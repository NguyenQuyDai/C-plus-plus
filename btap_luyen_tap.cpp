/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int demso=0,demchu=0,demkhac;
    string s;
    ifstream finp;
    finp.open("NEWS.INP");
    if(finp.fail())
    {
        cout<<"Mo file khong thanh cong";
        return 0;
    }
    ofstream fout;
    fout.open("NEWS.OUT");
    if(fout.fail())
    {
        cout<<"Tao file khong thanh cong";
        return 0;
    }
    while(!finp.eof())
    {
        finp>>s;
        fflush(stdin);
        for(int i=0;i<s.length();i++)
        {
        if(s[i]>='0'&&s[i]<='9') demso++;
        else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') demchu++;
        else demkhac++;
        }

    }
    fout<<demchu<<" "<<demso<<" "<<demkhac;
}*/
/*#include<iostream>
#include<fstream>
using namespace std;
struct sach
{
    string ten;
    int nam,sl,gia;
};
int main()
{
    ifstream finp;
    finp.open("BOOK.INP");
    if(finp.fail()){
        cout<< "Mo file khong thanh cong";
        return 0;
    }
    ofstream fout;
    fout.open("BOOK.OUT");
    if(fout.fail())
    {
        cout<< "Tao file thanh cong";
        return 0;
    }
    sach sp[100];
    int n,dem=0;
    finp>>n;
    for(int i=0;i<n;i++)
    {
        finp.ignore();
        getline(finp,sp[i].ten);
        finp>>sp[i].nam;
        finp>>sp[i].sl;
        finp>>sp[i].gia;
    }
    for(int i=0;i<n;i++)
    {
        if(sp[i].sl*sp[i].gia>=1000) {dem++;}
    }
    fout<<dem<<endl;
    for(int i=0;i<n;i++)
    {
        if(sp[i].sl*sp[i].gia>=1000) {
            fout<<sp[i].ten<<endl;
        }
    }
}*/
/*#include<iostream>
using namespace std;
bool shh(int n)
{
    int s=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) s+=i;
    }
    if(s==n) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(shh(i)) cout<<i<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
class SINHVIEN
{
private:
    string hoten;
    int namsinh;
    double diemTB;
    bool gioitinh;
public:
    SINHVIEN(){}
    SINHVIEN(string hoten,int namsinh,double diemTB,bool gioitinh)
    {
        this->hoten=hoten;
        this->namsinh=namsinh;
        this->diemTB=diemTB;
        this->gioitinh=gioitinh;
    }
    string getHoten(){
        return hoten;
    }
    int getNamsinh()
    {
        return namsinh;
    }
    friend istream & operator>>(istream &is, SINHVIEN &sv)
    {
        cout<< "\nNhap bao ho ten: ";
        is.ignore();
        getline(is,sv.hoten);
        cout<< "Nhap vao nam sinh: ";
        is>>sv.namsinh;
        cout<< "Nhap vao diem trung binh: ";
        is>>sv.diemTB;
        cout<< "Nhap vao gioi tinh: ";
        string gt;
        cin>>gt;
        if(gt=="Nam"||gt=="nam"){sv.gioitinh=true;}
        return is;
    }
    friend ostream &operator<<(ostream &out, SINHVIEN &sv)
    {
        out<<sv.hoten<< "-" <<sv.namsinh<< "-"<<sv.diemTB<< "-"<<sv.gioitinh<<endl;
        return out;
    }
    bool operator>(SINHVIEN x){
        if(this->namsinh>x.namsinh){return true;}
        else return false;
    }
};
string timkiem(string s)
{
    int pos=s.rfind(" ");
    string ten;
    for(int i=pos+1;i<s.length();i++)
    {
        ten+=s[i];
    }
    return ten;
}
int main()
{
    // Nhap du lieu cho danh sach sinh vien gom n sinh vien
    int n,dem=0;
    cout<< "Nhap vao so sinh vien can quan ly:";
    cin>>n;
    SINHVIEN SV[100];
    for(int i=0;i<n;i++)
    {
        cin>>SV[i];
    }
    //Hien thi du lieu da nhap len man hinh
    for(int i=0;i<n;i++)
    {
        cout<<SV[i];
    }
    //Tim so luong sv ten "Binh" va nam sinh la 1982
    for(int i=0;i<n;i++)
    {
        if(timkiem(SV[i].getHoten())=="Binh" && SV[i].getNamsinh==1982) dem++;
    }
    cout<<dem;
    //Sap xep lai danh sach theo thu tu khong tang
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(SV[i]<SV[j]) swap(SV[i],SV[j]);
        }
    }
    // Hien thi danh sach khi sap xep len man hinh
    for(int i=0;i<n;i++)
    {
        cout<<SV[i];
    }
}*/
/* Bai toan thap HN
#include<iostream>
#include<algorithm>
using namespace std;

void thn(int n, char a, char b, char c) {
	if (n == 1)cout << a << " -> " << c<<endl;
	else {
		thn((n - 1), a, c, b);
		cout << a << " -> " << c << endl;
		thn(n - 1, b, a, c);
	}
}
int main() {
	int n; cin >> n;
	thn(n, 'A', 'B', 'C');
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
class THIETBI
{
protected:
    string tenthietbi;
    int namsx;
    double giaban;
public:
    THIETBI(){}
    THIETBI(string tenthietbi,int namsx,double giaban)
    {
        this->tenthietbi=tenthietbi;
        this->namsx=namsx;
        this->giaban=giaban;
    }
    double GetGiaBan()
    {
        return giaban;
    }
    void nhap()
    {
        cout<< "\nNhap vao ten thiet bi:";
        cin.ignore();
        getline(cin,tenthietbi);
        cout<< "Nhap vao nam san xuat:";
        cin>>namsx;
        cout<< "Nhap vao gia ban:";
        cin>> giaban;
    }
    void hienthi()
    {
        cout<< "\nTen thiet bi: "<<tenthietbi<<endl;
        cout<< "Nam san xuat: "<<namsx<<endl;
        cout<< "Gia ban: "<<giaban<<endl;
    }
};
class MAYTINH:public THIETBI
{
private:
    string hangsanxuat;
    double tocdo;
    long dolonocung;
public:
    MAYTINH(){}
    MAYTINH(string tenthietbi,int namsx,double giaban,string hangsanxuat,double tocdo,long dolonocung)
    {
        this->hangsanxuat=hangsanxuat;
        this->tocdo=tocdo;
        this->dolonocung=dolonocung;
    }
    void nhap()
    {
        THIETBI::nhap();
        cout<< "Nhap vao hang san xuat:";
        cin.ignore();
        getline(cin,hangsanxuat);
        cout<< "Nhap vao toc do:";
        cin>>tocdo;
        cout<< "Nhap vao do lon o cung:";
        cin>>dolonocung;
    }
    void hienthi()
    {
        THIETBI::hienthi();
        cout<< "Hang san xuat:"<<hangsanxuat<<endl;
        cout<< "Toc do:"<<tocdo<<endl;
        cout<< "Do lon o cung:"<<dolonocung<<endl;
    }
    double getTocDo()
    {
        return tocdo;
    }
    bool Ktra(double tocdo)
    {
        if(tocdo>=pow(10,6)) return true;
        else return false;
    }
};
class DIENTHOAI:public THIETBI
{
private:
    string hangsanxuat,hedieuhanh;
    double kichthuocmanhinh,cannang;
public:
    DIENTHOAI(){}
    DIENTHOAI(string ,int ,double ,string ,string ,string ,double ,double )
    {
        this->hangsanxuat=hangsanxuat;
        this->hedieuhanh=hedieuhanh;
        this->kichthuocmanhinh=kichthuocmanhinh;
        this->cannang=cannang;
    }
    void nhap()
    {
        THIETBI::nhap();
        cout<< "Nhap vao hang san xuat:";
        cin.ignore();
        getline(cin,hangsanxuat);
        cout<< "Nhap vao he dieu hanh:";
        cin.ignore();
        getline(cin,hedieuhanh);
        cout<< "Nhap vao kich thuoc man hinh:";
        cin>>kichthuocmanhinh;
        cout<< "Nhap vao can nang:";
        cin>>cannang;
    }
    void hienthi()
    {
        THIETBI::hienthi();
        cout<< "Hang san xuat:"<<hangsanxuat<<endl;
        cout<< "He dieu hanh:"<<hedieuhanh<<endl;
        cout<< "Kich thuoc man hinh:"<<kichthuocmanhinh<<endl;
        cout<< "Can nang:"<<cannang<<endl;
    }
    double getCanNang()
    {
        return cannang;
    }
    bool Ktra_sieu_nhe(double cannang)
    {
        if(cannang<=50) return true;
        else return false;
    }

};
int main()
{
    int dem_mt,dem_dt;
    MAYTINH mt[100];
    DIENTHOAI dt[100];
    int n,m;
    cout<< "Nhap vao so luong may tinh:";
    cin>>n;
    cout<< "Nhap vao so luong dien thoai:";
    cin>>m;
    cout<< "\nNhap vao thong tin may tinh:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< "May thu "<<i+1<<":";
        mt[i].nhap();
    }
    cout<< "\nNhap vao thong tin dien thoai"<<endl;
    for(int i=0;i<m;i++)
    {
        cout<< "\nMay thu "<<i+1<<":";
        dt[i].nhap();
    }
    cout<< "Thong tin may tinh co gia ban >=10^5 la:";
    for(int i=0;i<n;i++)
    {
        if(mt[i].GetGiaBan()>=pow(10,5)) {mt[i].hienthi();}
    }
    cout<<"=============================================="<<endl;
    cout<<"Thong tin dien thoai co gia ban <=10^4 la:";
    for(int i=0;i<m;i++)
    {
        if(dt[i].GetGiaBan()<=pow(10,4)) {dt[i].hienthi();}
    }

}
*/
#include<iostream>
#include<vector>
using namespace std;
class Author
{
protected:
	string name,email;
public:
	Author(){}
	Author(string name,string email)
	{
		this->name=name;
		this->email=email;
	}
	void setEmail(string email)
	{
		this->email=email;
	}
	string getEmail()
	{
	return email;
	}
	void setName(string name)
	{
		this->name=name;
	}
	void nhap()
	{
		cout<< "Nhap vao ten tac gia:";
		getline(cin,name);
		cout<< "Nhap vao email cua tac gia:";
		cin>>email;
	}
};
class Book:public Author
{
	private:
		string tensach;
		double gia;
		vector<Author> authors;
	public:
		Book(){}
		Book(string tensach,double gia)
		{
			this->tensach=tensach;
			this->gia=gia;
		}
		void getTensach(string tensach)
		{
			this->tensach=tensach;
		}
		string getTensach()
		{
			return tensach;
		}
		void setGia(double gia)
		{
			this->gia=gia;
		}
		double GetGia()
		{
			return gia;
		}

};
int main()
{

}
