/*Bai 1.
#include<iostream>
using namespace std;
int main()
{
float a,b,c,d;
cout<<"Nhap vao diem Toan,Li,Hoa:"<<" ";
cin>>a>>b>>c;
d=a+b+c;
if(d>=27.01){cout<<"Trung tuyen";}
else cout<<"Khong trung tuyen";
}*/

/* Bài 2
#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"Nhap vao diem hoc phan cua sinh vien:"<<" ";
    cin>>a;
    if(a>=8.5&&a<=10)cout<<"A";
    else if(a<=8.4&&a>=8)cout<<"B+";
    else if(a<=7.9&&a>=7)cout<<"B";
    else if(a<=6.9&&a>=6.5)cout<<"C+";
    else if(a<=6.4&&a>=5.5)cout<<"C";
    else if(a<=5.4&&a>=5.0)cout<<"D+";
    else if(a<=4.9&&a>=4)cout<<"D";
    else cout<<"Hoc lai";
    return 0;
}*/

/* Bài 3
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"An mot phim tu 1 den 9:";
    cin>>a;
    switch(a){
    case 1:cout<<"1";break;
    case 2:cout<<"2";break;
    case 3:cout<<"3";break;
    case 4:cout<<"4";break;
    case 5:cout<<"5";break;
    case 6:cout<<"6";break;
    case 7:cout<<"7";break;
    case 8:cout<<"8";break;
    case 9:cout<<"9";break;
    default:cout<<"Phim ban an khong phai la so";
    return 0;
    }
}/*

/* Bài 4
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b;
    cout<<"Nhap vao he so a,b tuong ung:"<<" ";
    cin>>a>>b; //ax+b=0
    if(a==0){cout<<"Phuong trinh vo nghiem";}
    else if(a!=0&&b==0)cout<<"Phuong trinh co nghiem:"<<"x=0";
    else cout<<"Phuong trinh co nghiem"<<(double)-b/a<<endl;
    return 0;
}*/

/* Bài 5
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cout<<"Nhap vao he so a,b,c tuong ung:"<<" ";
    cin>>a>>b>>c;

    d=b*b-4*a*c;
    if(d<0){cout<<"Phuong trinh vo nghiem";}
    else if(d==0)cout<<"Phuong co mot nghiem"<<-b/2*a;
    else cout<<"Phuong trinh co hai nghiem phan biet"<<(-b+sqrt(d))/2*a<<" "<<(-b-sqrt(d))/2*a;
    return 0;
}*/

/*Bài 6
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Nhap vao so km di duoc: ";
    cin>>a;
    long b=a*0.9*110000;
    if(a>=0&&a<=1){cout<<"so tien la: "<<"15000VND";}
    else if(a<=4&&a>=1) cout<<"So tien la: "<<a*135000<<"VND";
    else if(a>=5&&a<=118) cout<<"So tien la: "<<a*110000<<"VND";
    else cout<<"So tien la: "<<b<<"VND";
    return 0;
}*/

/* Bài 7
#include<iostream>
using namespace std;
int main()
{
    float cc,dk,dt,d;
    cout<<"Nhap vao diem chuyen can va diem kiem tra dieu kien: ";
    cin>>cc>>dk;
    if(cc<5||dk<3){cout<<"Cam thi";}
    else {cout<<"Du dieu kien thi ket thuc hoc phan"<<endl;
        cout<<"Nhap vao diem ket thuc hoc phan: ";
        cin>>dt;
        d=cc*0.1+dk*0.3+dt*0.6;
        if(d<=10&&d>=8.5){cout<<"A";}
        else if(d<=8.4&&d>=8) cout<<"B+";
        else if(d<=7.9&&d>=7) cout<<"B";
        else if(d<=6.9&&d>=6.3) cout<<"C+";
        else if(d<=6.2&&d>=5.5) cout<<"C";
        else if(d<=5.4&&d>=4.8) cout<<"D+";
        else if(d<=4.7&&d<=4) cout<<"D";
        else cout<<"F";
        }
        return 0;*/
//Bai 8
#include<iostream>
using namespace std;
int main(){
    int ngay;
    char a[10];
    cout<<"Nhap vao so ngay:";
    cin>>ngay;
    cout<<"Nhap vao loai phong ban chon:";
    cin>>a[0];
    if(a[0]=='A')
    {
        if(ngay<=10)cout<<"So tien khach phai tra la:"<<ngay*800000<<" VND";
        else cout<<"So tien khach phai tra la:"<<ngay*90/100*800000<<" VND";
    }
    if(a[0]=='B')
    {
        if(ngay<=10) cout<<"So tien khach phai tra la:"<<ngay*600000<<" VND";
        else cout<<"So tien khach phai tra la:"<<ngay*92/100*600000<<" VND";
    }
    if(a[0]=='C')
    {
        if(ngay<=10) cout<<"So tien khach phai tra la:"<<ngay*500000<<" VND";
        else cout<<"So tien khach phai tra la:"<<ngay*500000*92/100<<" VND";
    }
    return 0;
}

