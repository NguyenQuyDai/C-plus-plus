#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int sn(int x)
{
    float n;
    x= n*10;
    if(x%10==0) return 1;
    else return 0;
}
bool snt(int n)
{
    if(n==1||n==0) return false;
    if(n==2) return true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return false;
    }
    return true;

}
int scp(int n)
{
    int can = sqrt(n);
    if(can*can==n) return 1;
    else return 0;
}
void kt()
{
    int x;
    cout<< "Moi ban nhap vao so x:";
    cin>>x;
    if(sn(x)) cout<< "x la so nguyen"<<endl;
    if(snt(x))
    {
        cout<< "x la so nguyen to"<<endl;
        cout<< "x khong la so chinh phuong"<<endl;
    }
    if(scp(x))
    {
        cout<< "x khong la so nguyen to"<<endl;
         cout<< "x la so chinh phuong"<<endl;
    }
}
int ucln(int a,int b)
{
    int d;
    while(b>0)
    {
        d=a%b;
        a=b;
        b=d;
    }
    return a;
}
int bcnn(int a,int b)
{
    int d = (a*b)/(ucln(a,b));
    return d;
}
void uoc_boi()
{
    int x,y;
    cout<< "Moi ban nhap vao 2 so nguyen x va y:";
    cin>>x>>y;
    cout<< "Uoc chung lon nhat cua 2 so nguyen la:"<<ucln(x,y)<<endl;
    cout<< "Boi so chung nho nhat cua 2 so nguyen la:"<<bcnn(x,y)<<endl;
    cout<< "------------------------------------------------"<<endl;
}
void tien_hat()
{

}
void tien_dien()
{
    int a;
    float s;
    cout<< "Nhap vao so dien su dung:";
    cin>>a;
    if(a>=0&&a<=50) {s= a*1.678;}
    else if(a>=51&&a<=100) {s=50*1.678+(a-50)*1.734;}
    else if(a>=101&&a<=200) {s=50*1.678+50*1.734+(a-100)*2.014;}
    else if(a>=201&&a<=300) {s=50*1.678+50*1.734+100*2.014+(a-200)*2.536;}
    else if(a>=301&&a<=400) {s=50*1.678+50*1.734+100*2.014+100*2.536+(a-400)*2.834;}
    else s=50*1.678+50*1.734+100*2.014+100*2.536+100*2.834+(a-400)*2.927;
    cout<< "So tien ban phai tra la:"<<s<< " dong";
}
void doi_tien()
{
    int gia[] = {500,200,100,50,20,10,5,2,1};
    int s,dem;
    cout<< "Nhap vao so tien can doi:";
    cin>>s;
    for(int i=0;i<9;i++)
    {
        dem = s/gia[i];;
        if(dem!=0)
        {
            cout<< "Co " <<dem<< " to menh gia "<<gia[i]<<endl;
        }
        s = s-dem*gia[i];
    }

}
void vay_ngan_hang()
{
    long long so_tien,so_tien_phai_tra,so_tien_con_lai;
    cout<<"Nhap so tien muon vay: ";
    cin>>so_tien;
    int goc_phai_tra = so_tien/12;
    cout<<setw(20)<<"Ky han"<<setw(20)<<"Lai phai tra"<<setw(20)<<"Goc phai tra"<<setw(20)<<"So tien phai tra"<<setw(20)<<"So tien con lai"<<endl;
    for(int i=1;i<=12;i++)
    {
        long long lai_phai_tra;
        lai_phai_tra = so_tien*0.05;
        so_tien = so_tien-goc_phai_tra;
        cout<<setw(20)<<i<<setw(20)<<lai_phai_tra<< setw(20)<<goc_phai_tra<<setw(20)<<lai_phai_tra+goc_phai_tra<<setw(20)<<so_tien<<endl;
    }
}
void vay_mua_xe()
{

}
struct SV
{
    string name;
    float diem;
};
void thong_tin()
{
    int n;
    cout<< "Nhap vao so luong sinh vien:";
    cin>>n;
    SV sv[n];
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cout<< "\n------------------------------------------------"<<endl;
        cout<< "Nhap vao thong tin sinh vien thu "<<i+1<<":"<<endl;
        cout<< "Nhap vao ho ten sinh vien:";
        getline(cin,sv[i].name);
        cout<< "Nhap vao diem hoc tap cua ban:";
        cin>>sv[i].diem;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sv[i].diem<sv[j].diem) swap(sv[i].diem,sv[j].diem);
        }
    }
    cout<< "Thong tin sinh vien"<<endl;
    cout<<setw(25)<<"STT"<<setw(25)<<"Ho ten"<<setw(25)<< "Diem"<< setw(25)<< "Hoc luc"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<setw(25)<<i+1<<setw(25)<<sv[i].name<<setw(25)<<sv[i].diem;
        if(sv[i].diem>=9) cout<<setw(20)<<"Hoc luc xuat sac"<<endl;
        else if(sv[i].diem<9&&sv[i].diem>=8) cout<<setw(25)<<"Hoc luc gioi"<<endl;
        else if(sv[i].diem<8&&sv[i].diem>=6.5) cout<< setw(25)<<"Hoc luc kha"<<endl;
        else if(sv[i].diem<6.5&&sv[i].diem>=5) cout<<setw(25)<<"Hoc luc trung binh"<<endl;
        else cout<<setw(25)<<"Hoc luc yeu"<<endl;
    }
}
void FPOLY_LOTT()
{
    int so_1,so_2,Random,dem;
    srand(time(0));
    cout<< "Nhap vao 2 so ban lua chon:";
    cin>>so_1>>so_2;
    for(int i=0;i<2;i++)
    {
        Random = rand()%15+1;
        if(Random==so_1||Random==2) {dem++;}
    }
    if(dem==0) cout<< "Chuc ban may man lan sau"<<endl;
    else if(dem==1) cout<< "Chuc mung ban da trung giai nhi"<<endl;
    else cout<< "Chuc mung ban da trung giai nhat"<<endl;
}
void Phan_so()
{
    int ts1,ts2,ms1,ms2,add1,add2,sub1,sub2,mul1,mul2,dv1,dv2;
    cout<< "Nhap vao tu so phan so 1:";
    cin>>ts1;
    cout<< "Nhap vao mau so phan so 1:";
    cin>>ms1;
    cout<< "Nhap vao tu so phan so 2:";
    cin>>ts2;
    cout<< "Nhap vao mau so phan so 2:";
    cin>>ms2;
    add1 = ts1*ms2+ts2*ms1;
    add2 = ms1*ms2;
    int UCLN1 = ucln(abs(add1),abs(add2));
    add1 = add1/UCLN1;
    add2 = add2/UCLN1;
    cout<< "\nTong hai phan so la:"<<add1<< "/"<<add2<<endl;
    sub1 = ts1*ms2-ts2*ms1;
    sub2 = ms1*ms2;
    int UCLN2 = ucln(abs(sub1),abs(sub2));
    sub1 = sub1/UCLN2;
    sub2 = sub2/UCLN2;
    cout<< "Hieu hai phan so la:"<<sub1<< "/"<<sub2<<endl;
    mul1 = ts1*ts2;
    mul2 = ms1*ms2;
    int UCLN3= ucln(abs(mul1),abs(mul2));
    mul1 = mul1/UCLN3;
    mul2 = mul2/UCLN3;
    cout << "Tich hai phan so la:"<<mul1<< "/"<<mul2<<endl;
    dv1 = ts1*ms2;
    dv2 = ts2*ms1;
    int UCLN4 = ucln(abs(dv1),abs(dv2));
    dv1 = dv1/UCLN4;
    dv2 = dv2/UCLN4;
    cout<< "Thuong hai phan so la:"<<dv1<< "/"<<dv2<<endl;
}
int main()
{
    system("color A");
    for(;;)
    {
        cout<<"     \n    CHAO MUNG BAN DEN VOI CHUONG TRINH      "<<endl;
        cout<<"-+------------------------------------------------------+-"<<endl;
        cout<<" |   	1. Kiem tra so nguyen                  		|"<<endl;
        cout<<" |   	2. Tim uoc chung, boi chung            		|"<<endl;
        cout<<" |   	3. Chuong trinh tinh tien gio karaoke  		|"<<endl;
        cout<<" |   	4. Tinh tien dien                      		|"<<endl;
        cout<<" |   	5. Chuc nang doi tien                  		|"<<endl;
        cout<<" |   	6. Vai lai suat ngan hang              		|"<<endl;
        cout<<" |   	7. Vay mua xe                          		|"<<endl;
        cout<<" |   	8. Sap xep thong tin sinh vien         		|"<<endl;
        cout<<" |   	9. Game FPT-lott                       		|"<<endl;
        cout<<" |   	10. Lam viec voi phan so               		|"<<endl;
        cout<<" |   	11. Thoat!                             		|"<<endl;
        cout<<"-+------------------------------------------------------+-"<<endl;
        int chuc_nang;
        cout<<"\nXin moi chon chuc nang cho chuong trinh!: ";
        cin>>chuc_nang;
        cout<<endl;
        cout<< "------------------------------------------------"<<endl;
        if(chuc_nang==1)
        {
            kt();
        }
        else if(chuc_nang==2)
        {
            uoc_boi();
        }
        else if(chuc_nang==3)
        {
            tien_hat();
        }
        else if(chuc_nang==4)
        {
            tien_dien();
        }
        else if(chuc_nang==5)
        {
            doi_tien();
        }
        else if(chuc_nang==6)
        {
            vay_ngan_hang();
        }
        else if(chuc_nang==7)
        {
            vay_mua_xe();
        }
        else if(chuc_nang==8)
        {
            thong_tin();
        }
        else if(chuc_nang==9)
        {
            FPOLY_LOTT();
        }
        else if(chuc_nang==10)
        {
            Phan_so();
        }
        else break;
    }

}
