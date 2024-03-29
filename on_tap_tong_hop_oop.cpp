/*
#include<iostream>
using namespace std;
int snt(int n)
{
    if(n==1||n==0) return 0;
    if(n==2) return 1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,a[1000];
    cout<< "Nhap vao n:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<< "Moi ban nhap vao so X:";
    int X,dem=0;
    cin>>X;
    for(int i=0;i<n;i++)
    {
        if(X==a[i]) dem++;
    }
    cout<< "So lan "<<X<<" xuat hien la:"<<dem<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    cout<< "Day so sap xep theo qui tac la:";
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0) cout<<a[i]<< " ";
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0) cout<<a[i]<< " ";
    }
    int b[100],x=1;
    b[0]=a[0];
    for(int i=0;i<n;i++)
    {
        int d=0;
        for(int j=0;j<x;j++)
        {
            if(a[i]==b[j]) {d++;}
        }
        if(d==0){
            b[x]=a[i];
            x++;
        }
    }
    cout<<"\nSo nguyen to khac nhau co mat trong day la:";
    for(int j=0;j<x;j++)
    {
        if(snt(b[j])) cout<<b[j]<< " ";
    }
    cout<< "\nbo ba so a,b,c thoa man dk la:";
    for(int i=0;i<x-2;i++){
        for(int j=i+1;j<x-1;j++){
            for(int t=j+1;t<x;t++){
                if(a[i]*a[i]+a[j]*a[j]==a[t]*a[t])
                    cout<<a[i]<< " " <<a[j]<< " "<<a[t]<< " ";
            }
        }
    }
}
*/
/*#include<iostream>
using namespace std;
 class SINHVIEN
 {
 private:
    string hoten;
    int namsinh;
    double diemtb;
    bool gioitinh;
 public:
    SINHVIEN(){}
    SINHVIEN(string hoten,int namsinh,double diemtb,bool gioitinh)
    {
        this->hoten=hoten;
        this->namsinh=namsinh;
        this->diemtb=diemtb;
        this->gioitinh;
    }
    string getHoten()
    {
        return hoten;
    }
    int getnamsinh()
    {
        return namsinh;
    }
    friend istream & operator>>(istream &is, SINHVIEN &sv)
    {
        cout<< "Nhap vao ho va ten: ";
        fflush(stdin);
        getline(is,sv.hoten);
        cout<< "Nhap vao nam sinh: ";
        is>>sv.namsinh;
        cout<< "Nhap vao diem trung binh: ";
        is>>sv.diemtb;
        cout<< "Nhap vao gioi tinh: ";
        string gt;
        is>>gt;
        is.ignore();
        if(gt=="Nam"|| gt=="nam"){
            sv.gioitinh=false;
        }
        else {
            sv.gioitinh=true;
        }
        return is;
    }
    friend ostream & operator<<(ostream &out,SINHVIEN& sv){
        out << "\nHo ten: " << sv.hoten;
        out << "\tNam sinh : " << sv.namsinh;
        out<< "\tDiem trung binh: "<<sv.diemtb;
        out<< "\tGioi tinh: "<< sv.gioitinh;
        return out;
    }
    bool operator>(SINHVIEN x);
 };
 bool SINHVIEN::operator>(SINHVIEN x) {
    if (this->namsinh > x.namsinh) {
        return true;
    }
    else {
        return false;
    }
}
string layTenSV(string s) {
    // "vu thi xuyen"
    int viTriDauCach = s.rfind(" ");
    string ten = "";
    for (int i = viTriDauCach + 1; i < s.length(); i++) {
        ten = ten + s[i];
    }
    return ten;
}
int main()
{
    SINHVIEN SV[100];
    int n,dem=0;
    cout<< "Nhap so nhan vien can quan ly: "; cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<< "Nhap thong tin cua nhan vien thu :"<<i+1<< "\n";
        cin>>SV[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<< "\nThong tin cua sinh vien thu: "<<i+1<<endl<<SV[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(SV[i]>SV[j]) swap(SV[i],SV[j]);
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(SV[i].getnamsinh()==1982) dem++;
    }
    cout<< "So luong sinh vien sinh nam 1982 la: "<< dem;
    cout<< "\nDanh sach sinh vien theo thu tu khong tang la:";
    for(int i=0;i<n;i++)
    {
        cout<< "\nThong tin cua sinh vien thu: "<<i+1<<endl<<SV[i];
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    Person(){}
    Person(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    void nhap()
    {
        cout<< "\nNhap vao ten: ";
        fflush(stdin);
        getline(cin,this->name);
        cout<< "Nhap vao tuoi: ";
        cin>>this->age;
    }
    void xuat()
    {
        cout<<this->name<< "-"<<this->age<< "-";
    }
};
class Student:public Person
{
protected:
    int id;
    string major,schoolname;
public:
    Student(){}
    Student(string name,int age, int id, string major,string schoolname)
    {
        this->id=id;
        this->major=major;
        this->schoolname=schoolname;
    }
    int getId()
    {
        return id;
    }
    string getMajor()
    {
        return major;
    }
    string getSchoolname()
    {
        return schoolname;
    }
    void nhap()
    {
        Person::nhap();
        cout<< "Nhap vao ma sinh vien: ";
        cin>>this->id;
        cout<< "Nhap vao chuyen nganh: ";
        fflush(stdin);
        getline(cin,major);
        cout<< "Nhap vao ten truong: ";
        fflush(stdin);
        getline(cin,schoolname);
    }
    void xuat()
    {
        Person::xuat();
        cout << " - " << this->id << " - " << this->major<< " - " << this->schoolname << endl;
    }

};
int main()
{
    Student A[100];
    int n;
    cout<< "Nhap vao so hoc sinh can quan li: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        A[i].nhap();
    }
    for(int i=0;i<n;i++)
    {
        cout<< "Thong tin hoc sinh thu " <<i+1<< ":"<<endl;
         A[i].xuat();
    }
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
class THIETBI
{
protected:
    string tenthietbi;
    int namxuatsan;
    double giaban;
public:
    THIETBI(){}
    THIETBI(string tenthietbi,int namxuatsan,double giaban)
    {
        this->tenthietbi=tenthietbi;
        this->namxuatsan=namxuatsan;
        this->giaban=giaban;
    }
    void nhap()
    {
        cout<< "\nNhap vao ten thiet bi: ";
        fflush(stdin);
        getline(cin,this->tenthietbi);
        cout<< "Nhap vao nam xuat san: ";
        cin>>this->namxuatsan;
        cout<< "Nhap vao gia ban: ";
        cin>>this->giaban;
    }
    void xuat()
    {
        cout<< "\n"<<this->tenthietbi<< "-"<<this->namxuatsan<< "-" <<this->giaban;
    }
};
class MAYTINH:public THIETBI
{
protected:
    string hangsanxuat;
    double tocdo;
    long ocung;
public:
    MAYTINH(){}
    MAYTINH(string tenthietbi,int namxuatsan,double giaban,string hangsanxuat,double tocdo,long ocung)
    {
        this->hangsanxuat=hangsanxuat;
        this->tocdo=tocdo;
        this->ocung;
    }
    void nhap()
    {
        THIETBI::nhap();
        cout<< "Nhap vao hang san xuat: ";
        fflush(stdin);
        getline(cin,this->hangsanxuat);
        cout<< "Nhap vao toc do: ";
        cin>>this->tocdo;
        cout<< "Nhap vao do lon cua o cung: ";
        cin>>this->ocung;
    }
    double getTocdo()
    {
        return tocdo;
    }
    void xuat()
    {
        THIETBI::xuat();
        cout<< "-"<<this->hangsanxuat<< "-"<<this->tocdo<< "-"<<this->ocung;
    }
};
class DIENTHOAI:public THIETBI
{
protected:
    string hangsansuat;
    string hedieuhanh;
    double manhinh;
    double canang;
public:
    DIENTHOAI(){}
    DIENTHOAI(string tenthietbi,int namxuatsan,double giaban,string hangsansuat,string hedieuhanh,double manhinh,double canang)
    {
        this->hangsansuat=hangsansuat;
        this->hedieuhanh=hedieuhanh;
        this->manhinh=manhinh;
        this->canang=canang;
    }
    void nhap()
    {
        THIETBI::nhap();
        cout<< "Nhap vao hang san xuat: ";
        fflush(stdin);
        getline(cin,this->hangsansuat);
        cout<< "Nhap vao he dieu hanh: ";
        fflush(stdin);
        getline(cin,this->hedieuhanh);
        cout<< "Nhap vao kich thuoc man hinh: ";
        cin>>this->manhinh;
        cout<< "Nhap vao can nang: ";
        cin>>this->canang;
    }
    void xuat()
    {
        THIETBI::xuat();
        cout<< "-" <<this->hangsansuat<< "-"<< this->hedieuhanh<< "-"<< this->manhinh<< "-" <<this->canang;
    }
};
int main()
{
    MAYTINH A[100];
    DIENTHOAI B[100];
    int n,m,dem=0;
    cout<< "Nhap vao so luong may tinh : ";
    cin>>n;
    cout<< "Nhap vao so luong dien thoai: ";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        A[i].nhap();
    }
    for(int i=0;i<n;i++)
    {
        A[i].xuat();
    }
}*/
/*#include<iostream>
using namespace std;
class PhanSo
{
private:
    int tuso;
    int mauso;
public:
    PhanSo(){}
    PhanSo(int tuso , int mauso)
    {
        this->tuso=tuso;
        this->mauso=mauso;
    }
    friend istream &operator>>(istream &is, PhanSo &ps){
        cout<< "Nhap vào tu so: ";
        is>>ps.tuso;
        cout<< "Nhap vào mau so: ";
        is>>ps.mauso;
        return is;
    }
    friend ostream &operator<<(ostream &out, PhanSo &ps){
        out<< "Phan so vua nhap la:"<<ps.tuso<< "/" <<ps.mauso;
        return out;
    }
    PhanSo operator+(PhanSo ps){
        PhanSo kq;
        kq.tuso = tuso*ps.mauso + ps.tuso*mauso;
        kq.mauso = mauso * ps.mauso;
    return kq;
    }
};
int main()
{
    PhanSo ps1;// tao doi tuong
    PhanSo ps2;
    cin >> ps1;// operator>>(cin, ps);
    cin >> ps2;
    PhanSo ps3;
    ps3 = ps1 + ps2;

}*/
/*#include<iostream>
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
    string getEmail()
    {
        return email;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void nhap()
    {
        cout<< "Nhap vao ten tac gia: ";
        cin>>this->name;
        cout<< "Nhap vao email: ";
        cin>>this->email;
    }
};
class Book:public Author
{
private:
    string bookname;
    int value;
    vector<Author> authors;
public:
    Book(){}
    Book(string name,string email, string bookname,int value )
    {
        this->bookname=bookname;
        this->value=value;
    }
    string getBookname()
    {
        return bookname;
    }
    void setBookname(string bookname)
    {
        this->bookname=bookname;
    }
    int getValue()
    {
        return value;
    }
    void setValue(int value)
    {
        this->value=value;
    }
    string getAuthorName() {
		string authorNames = "";
		for (int i = 0; i < authors.size() - 1; i++) {
			authorNames += authors[i].getName() ;
		}
		authorNames += authors[authors.size() - 1].getName();
		return authorNames;
	}
	void nhap()
    {
        Author::nhap();
        fflush(stdin);
        cout<< "Nhap vao ten sach:";
        getline(cin,this->bookname);
        cout<< "Nhap gia tien:";
        cin>>this->value;
    }
};
int main()
{
    Book A[100];
    int n;
    cout<< "Nhap vao so cuon sach:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        A[i].nhap();
    }
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(A[i].getValue()>max) max=A[i].getValue();
    }
    for(int i=0;i<n;i++)
    {
        if(A[i].getValue()==max)
            cout<< A[i].getName()<< "-"<<A[i].getEmail()<< "-"<< A[i].getBookname()<< "-"<< A[i].getValue()<<endl;
    }
}
*/
/*#include <iostream>
#include <fstream>
using namespace std;
struct thongtin
{
	string TEN,QUOCGIA;
	int SL,GIA;
};
int main ()
{
	int n;
	string s="Viet Nam";
	ifstream finp;
	ofstream fout;
	thongtin sp[100];
	finp.open("mathang.inp");
	if (finp.fail())
	{
		cout << "Mo file khong thanh cong";
		return 0;
	}
	fout.open("mathang.out");
	if (finp.fail())
	{
		cout << "Tao file khong thanh cong";
		return 0;
	}
	finp >> n;
	for (int i = 0; i < n; i++)
	{
		finp.ignore();
		getline(finp, sp[i].TEN);
		getline(finp, sp[i].QUOCGIA);
		s+=sp[i].QUOCGIA;
		finp >> sp[i].SL;
		finp >> sp[i].GIA;
	}
	finp.close();
	for (int i = 0; i < n; i++)
	{
		cout<< sp[i].TEN<<endl;
		cout<< sp[i].QUOCGIA<<endl;
		cout<< sp[i].SL<<endl;
		cout<< sp[i].GIA<<endl;
	}
	int dem_doanh_thu=0;
	int xuat_xu_viet_nam=0;
	for(int i=0;i<n;i++)
    {
        if(sp[i].SL*sp[i].GIA>1000){dem_doanh_thu++;}
    }
    fout<< dem_doanh_thu<<endl;
    for(int i=0;i<n;i++)
    {
        if(sp[i].QUOCGIA==s) {xuat_xu_viet_nam++;}
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sp[i].GIA<sp[j].GIA) swap(sp[i].TEN,sp[j].TEN);
        }
    }
    for(int i=0;i<n;i++)
    {
        fout<<sp[i].TEN<<endl;
    }

}*/
/*#include<iostream>
using namespace std;
class FRACTION
{
private:
    int n,d;
public:
    FRACTION(){}
    FRACTION(int n,int d)
    {
        this->n=n;
        this->d=d;
    }

    FRACTION(FRACTION &i)
    {
        n=i.n;
        d=i.d;
    }
    friend istream & operator>>(istream &is,FRACTION &ps)
    {
        cout<< "Nhap vao tu so:";
        is>>ps.n;
        cout<< "Nhap vao mau so:";
        is>>ps.d;
        return is;
    }
    friend ostream & operator<<(ostream &out,FRACTION &ps)
    {
        out<< "Phan so dang:"<<ps.n<< "/"<<ps.d;
        return out;
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
    FRACTION operator+(FRACTION ps)
    {
        FRACTION kq;
        kq.n=n*ps.d+d*ps.n;
        kq.d=d*ps.d;

        int UCLN=ucln(kq.n,kq.d);
        kq.n=kq.n/UCLN;
        kq.d=kq.d/UCLN;
        return kq;
    }
};
int main()
{
    FRACTION ps1,ps2,ps3;
    cin>>ps1>>ps2;
    ps3=ps1+ps2;
    cout<<ps3;
}*/
/*#include<iostream>
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
	string getname()
	{
	    return name;
	}
	void nhap()
	{
		cout<< "\nNhap vao ten tac gia:";
		cin.ignore();
		getline(cin,name);
		cout<< "Nhap vao email cua tac gia:";
		cin>>email;
	}
	void hienthi()
	{
	    cout<< "\nTen tac gia la:"<<name<<endl;
	    cout<< "Email cua tac gia la:"<<email<<endl;
	}
};
class Book:public Author
{
	private:
		string tensach;
		double gia;
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
		string getAuthorName()
        {
            return getname();
        }
		void nhap()
		{
			Author::nhap();
			cout<< "Nhap vao ten sach:";
			cin.ignore();
			getline(cin,tensach);
			cout<< "Nhap vao gia sach:";
			cin>>gia;
		}
		void hienthi()
		{
		    Author::hienthi();
		    cout<< "Ten sach la:"<<tensach<<endl;
		    cout<< "Gia sach la:"<<gia<<endl;
		}

};
int main()
{
	int n,dem;
	string x;
	cout<< "Nhap vao so cuon sach:";
	cin>>n;
	Book b[100];
	for(int i=0;i<n;i++)
	{
		b[i].nhap();
	}
	double max=-1;
	for(int i=0;i<n;i++)
    {
        if(b[i].GetGia()>max) max=b[i].GetGia();
    }
    cout<< "Thong tin cuon sach co gia cao nhat la:"<<endl;
    for(int i=0;i<n;i++)
    {
        if(max==b[i].GetGia()) b[i].hienthi();
    }
    cout<< "========================================================"<<endl;
    cout<< "Nhap vao ten tac gia ban can tim kiem:";
    cin.ignore();
    getline(cin,x);
    for(int i=0;i<n;i++)
    {
        if(b[i].getAuthorName()==x) {
            cout<< "Ten cuon sach cua tac gia vua nhap la:"<<b[i].getTensach();
            dem++;
        }
    }
    if(dem==0) cout<< "Khong tin duoc cuon sach cua tac gia!";
}
*/
// DemTu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    // doc du lieu
    ifstream finp;// bien de doc du lieu tu file
    // mo file
    finp.open("demtu.inp");
    // kiem tra xem co mo duoc file khong
    if (finp.fail()) {
        cout << "Khong mo dc file!";
        return 0;
    }
    int n;// so luong dong
    // doc dong dau tien
    finp >> n;// tuong tu nhu cin >> n
    //cout << n;//hien thi len de nhin kq
    string s;
    string sNew = "";
    for (int i = 0; i <= n; i++) {
        getline(finp, s);
        sNew += s + " ";
    }
    cout << sNew << endl;

    // duyet cac ki tu cua sNew
    int dem = 0;
    for (int i = 0; i < sNew.length()-1; i++) {
        if (sNew[i] == ' ' && sNew[i + 1] != ' ' && sNew[i + 1] >= 'a' && sNew[i + 1] <= 'z') {
            dem++;
        }
    }
    finp.close();// dong file
    // ghi du lieu vao file
    ofstream fout;// fout la bien de thuc hien ghi du lieu vao file-- tuong tu nhu cout de hien thi du lieu len ma hinh
    fout.open("demtu.out");
    if (fout.fail()) {
        cout << "Tao file khong thanh cong!";
        return 0;
    }
    fout << dem;
    fout.close();
    return 0;
}
*/
/*#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ifstream finp;
    finp.open("songuyen.inp");
    if(finp.fail())
    {
        cout<< "Mo file khong thanh cong!";
        return 0;
    }
    int n,b[100];
    vector<int> a;
    while(!finp.eof())
    {
        if(finp.eof()) {break;}
        finp>>n;
        a.push_back(n);
    }
    int x=1;
    b[0]=a.at(0);
    for(int i=0;i<a.size();i++)
    {
        int dem=0;
        for(int j=0;j<x;j++)
        {
            if(a.at(i)==b[j])
            dem++;
        }
        if(dem==0)
        {
            b[x]=a.at(i);
            x++;
        }
    }
    for(int j=0;j<x;j++)
    {
        cout<<b[j]<< " ";
    }
}*/
/*#include<iostream>
using namespace std;
class NHANVIEN
{
private:
    string ht,time,quequan;
    bool gioitinh;
    int luong;
public:
    NHANVIEN(){}
    NHANVIEN(string ht,string time,string quequan,bool gioitinh,int luong)
    {
        this->ht=ht;
        this->time=time;
        this->quequan=quequan;
        this->gioitinh=gioitinh;
        this->luong=luong;
    }
    string getTime()
    {
        return time;
    }
    friend istream &operator>>(istream &is,NHANVIEN &nv)
    {
        cout<< "\nNhap vao ho ten nhan vien:";
        is.ignore();
        getline(is,nv.ht);
        cout<< "Nhap vao ngay thang nam:";
        getline(is,nv.time);
        cout<< "Nhap vao que quan:";
        getline(is,nv.quequan);
        cout<< "Nhap vao gioi tinh:";
        string s;
        cin>>s;
        if(s=="Nam"||s=="nam")
        {
            nv.gioitinh=true;
        }
        else {nv.gioitinh=false;}
        cout<< "Nhap vao luong cua nhan vien:";
        is>>nv.luong;
        return is;
    }
    friend ostream & operator<<(ostream &out,NHANVIEN &nv)
    {
        out<<nv.ht<< "-"<<nv.time<< "-"<<nv.quequan<< "-"<<nv.gioitinh<< "-"<<nv.luong<<endl;\
        return out;
    }
    bool operator>(NHANVIEN x)
    {
        if (this->luong > x.luong) {
        return true;
    }
    else {
        return false;
    }
    }
};

int main()
{
    NHANVIEN NV[100];
    int n;
    cout<< "Nhap vao so nhan vien can quan ly:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>NV[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<< "Thong tin nhan vien thu "<<i+1<< "la:"<<endl;
        cout<<NV[i];
    }
    string name[1000];

}*/
/*#include<iostream>
#include<fstream>
using namespace std;
struct THANHPHO
{
	string ten_thanh_pho;
	int nam1,nam2;
};
int main()
{
	THANHPHO TP[100];
	ifstream finp;
	finp.open("covid.inp");
	if(finp.fail())
	{
		cout<< "Mo file khong thanh cong!";
		return 0;
	}
	int n;
	finp>>n;
	for(int i=0;i<n;i++)
	{
		finp.ignore();
		getline(finp,TP[i].ten_thanh_pho);
		finp>>TP[i].nam1;
		finp>>TP[i].nam2;
	}
	finp.close();
	int min=99999;
	ofstream fout;
	fout.open("covid.out");
	if(fout.fail())
	{
		cout<< "Tao file khong thanh cong!";
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if((TP[i].nam2-TP[i].nam1)<min) min=TP[i].nam2-TP[i].nam1;
	}
	for(int i;i<n;i++)
	{
		if((TP[i].nam2-TP[i].nam1)==min) fout<< TP[i].ten_thanh_pho<<endl;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((TP[i].nam2-TP[i].nam1)==(TP[j].nam2-TP[j].nam1))
			fout<< TP[i].ten_thanh_pho<< " "<<TP[j].ten_thanh_pho<<endl;
		}
	}
	fout.close();
}*/
/*#include<iostream>
using namespace std;
int main()
{
    string s,email1,email2,email3;
    getline(cin,s);
    int pos= s.rfind(" ");
    for(int i=pos+1;i<s.length();i++)
    {
        email1+=s[i];
    }
    email2=s[0];
    for(int i=0;i<pos;i++)
    {
        if(s[i]==' ')
        {
            email2+=s[i+1];
        }
    }
    email3=email1+email2+"@gmail.com";
    cout<<email3;
}*/
/*#include<iostream>
using namespace std;
class VanDongVien
{
private:
    string hoten,monthidau;
    int tuoi;
    double cannang,chieucao;
public:
    VanDongVien(){}
    VanDongVien(string , string , int , double , double)
    {
        this->hoten=hoten;
        this->monthidau=monthidau;
        this->tuoi=tuoi;
        this->cannang=cannang;
        this->chieucao= chieucao;
    }
    ~VanDongVien(){}
    friend istream &operator>>(istream &is, VanDongVien &vdv)
    {
        cout<< "Nhap vao ho va ten:";
        fflush(stdin);
        getline(is,vdv.hoten);
        cout<< "Nhap vao mon thi dau:";
        fflush(stdin);
        getline(is,vdv.monthidau);
        cout<< "Nhap vao tuoi:";
        fflush(stdin);
        is>>vdv.tuoi;
        cout<< "Nhap vao can nang:";
        is>>vdv.cannang;
        cout<< "Nhap vao chieu cao:";
        is>>vdv.chieucao;
        return is;
    }
    friend ostream &operator<<(ostream &out, VanDongVien &vdv)
    {
        out<< "Thong tin:"<<vdv.hoten<< "-"<<vdv.monthidau<< "-"<<vdv.tuoi<< "-"<<vdv.cannang<< "-"<< vdv.chieucao;
        return out;
    }
    bool operator>(VanDongVien &obj)
    {
        if(this->chieucao>obj.chieucao)
            return true;
        else
            return false;
    }
};
int main()
{
    int n;
    cout<< "Nhap vao n:";
    cin>>n;
    VanDongVien a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<< "**********************************************"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<< "**********************************************"<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}*/
#include<iomanip>
#include<iostream>
#include<math.h>
using namespace std;int main(){
//set the number you want to square and cube to.
int x = 50;
//set the width
int w = 10;
//output the column headings
//use setw() with a arg for the width
cout<<setw(w)<<"Number"<<setw(w)<<"Square"<<setw(w)<<"Cube"<<endl;
cout<<"===================================="<<endl;
//loop through
for(int i = 3; i<=x; i+=9)
{
//output the number, square and cube in fields of width x
cout<<setw(w)<<i<<setw(w)<<pow(i,2)<<setw(w)<<pow(i,3)<<endl;
}
}
