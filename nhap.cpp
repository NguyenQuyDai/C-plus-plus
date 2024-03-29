/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[100][100];
    float b[100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];b[i]+=a[i][j];
        }}
        float max=b[0], min=b[0];
    for(int i=0;i<m;i++){
        b[i]=b[i]/n;
        if(b[i]>max) max=b[i];
        if(b[i]<min) min=b[i];
    } cout<<fixed<<setprecision(1)<<max<<" "<<fixed<<setprecision(1)<<min;
    }*/
/*
#include<iostream>
using namespace std;
int main()
{
   int m,n,k,s=0;
   cin>>m>>n>>k;
   int a[100][100];
   for(int i=0;i<m;i++){
   for(int j=0;j<n;j++)
    {cin>>a[i][j];}}
    double max=-999999,min=999999;
    for(int j=0;j<n;j++){
            if(a[k][j]>max)  max=a[k][j];
            if(a[k][j]<min)  min=a[k][j];
        }
        if(k<m) { cout<<max<<" "<<min;}
        else cout<<"-1";

    }*/
/*
#include<iostream>
using namespace std;
int main()
{
    int m,n,k,s=0,b=0;
    cin>>m>>n>>k;
    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {s+=a[i][k];}
    for(int j=0;j<n;j++)
    {b+=a[k][j];}
    cout<<s<<" "<<b;
}*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            {cin>>a[i][j];}
    }
    for(int i=0;i<m;i++){float b,s=0;
        for(int j=0;j<n;j++)
            {
                s+=a[i][j];
                b=s/n;
    } cout<<fixed<<setprecision(1)<<b<<" ";
}
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>a[i][j];}}
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){cout<<a[i][j]<<" ";}cout<<endl;}
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int m,n,k;
    cin>>m>>n>>k;
    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>a[i][j];}
    }
    double s=0,b=0;
    for(int i=0;i<m;i++)
    {
        s+=a[i][k];
    }
    for(int j=0;j<n;j++)
    {
        b+=a[k][j];
    }
    if(k<n) {cout<<s<<" "<<b;}
    else cout<<"0 0";
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[100][100],b[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>a[i][j];}
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>b[i][j];}
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cout<<a[i][j]+b[i][j]<<" ";} cout<<endl;
    }
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int m,n,s,g=0,c=0,d=0,e=0;
    cin>>m>>n;
    double a[100][100],b[100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j]; b[i]+=a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        b[i]=b[i]/n;
        if(b[i]>=8.0) g++;
        if(b[i]<8.0&&b[i]>=6) c++;
        if(b[i]<6&&b[i]>=5.0) d++;
        if(b[i]<5) e++;
    } cout<<g<<" "<<c<<" "<<d<<" "<<e;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int n,a[1000],min=99999,z;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<min && a[i]>0){
        min=a[i];
        z=i;
    }
   }
   if(min=99999) cout<<-1;
   else cout<<z;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100],b[100];
    for(int i=0;i<n;i++){cin>>a[i];}
     for(int i=0;i<n;i++){cin>>b[i];}
     for(int i=0;i<n;i++)
     {cout<<a[i]+b[i]<<endl;}
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    } cout<<s;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    int chan=0,le=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0) chan++;
        else le++;
    } cout<<chan<<" "<<le;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[100][100],b[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>a[i][j];}
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>b[i][j];}
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }cout<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[100][100];
    float b[100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i]+=a[i][j];
        }
    }
    float max=-1, min=99999999;
    for(int i=0;i<m;i++)
    {
        b[i]=b[i]/n;
        if(b[i]>max) max=b[i];
        if(b[i]<min) min=b[i];
    }  cout<<max<<" "<<min;}*/
/*#include<iostream>
using namespace std;
int main()
{
    int m,n,c=0,d=0,e=0,f=0;
    cin>>m>>n;
    int a[100][100];
    float b[100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>a[i][j];
            b[i]+=a[i][j];
        }}
    for(int i=0;i<m;i++){
        b[i]=b[i]/n;
        if(b[i]>=8) c++;
        if(b[i]>=6&&b[i]<8) d++;
        if(b[i]>=5&&b[i]<6) e++;
        if(b[i]<5) f++;
    }    cout<<c<<" "<<d<<" "<<e<<" "<<f;
    }*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,x,s=0;
    cin>>n>>x;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
     for(int i=0;i<n;i++){if(a[i]>x) s++;} cout<<s;
}*/
/*#include<iostream>
using namespace std;
int hello(int a)
{
    if(a==1) return 0;
    if(a==2) return 1;
    for(int i=2;i<a;i++){
        if(a%i==0) return 0;
    } return 1;
}
int main()
{
    int n,s=0;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){if(hello(a[i])) s+=a[i];}cout<<s;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,x,s=0;
    cin>>n>>x;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        if(a[i]==x) s++;
    } cout<<s;
}*/
// length(),size tim so ki tu cua xau
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s.length()<<endl;
}*/
/* Bai 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string a="xin chao";
    cout<<s;
}*/
/* Bai 2
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65&&s[i]<=90) s[i]+=32;
        cout<<s[i];
    }}*/
/* Bai 4
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int kt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==32) kt++;
    } cout<<kt+1;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    double max=-1,min=999999999;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max) {max=a[i]; x=i;}
        if(a[i]<min) {min=a[i]; y=i;}
    }
     cout<<y<<" "<<x;
}*/
/* tim so chinh phuong
#include<iostream>
#include<math.h>
bool scp(int n)
{
    int can=sqrt(n);
    if(can*can==n) return true;
    else return false;
}
using namespace std;
int main()
{
    int n,dem=0;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++)
    {
        if(scp(a[i])==true) dem++;
    } cout<<dem;
}*/
/* tim so nguyen to trong mang
#include<iostream>
using namespace std;
int check(int a)
{
    if(a==1) return 0;
    if(a==2) return 1;
    for(int i=2;i<a;i++){
        if(a%i==0) return 0;
    } return 1;
}
int main()
{
    int n,s=0;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        if(check(a[i])) s+=a[i];
    } cout<<s;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,x,lon=0;
    cin>>n>>x;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        if(a[i]>x) lon++;
    } cout<<lon;
}*/
/* Sap xep tang dan
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}*/
/* kiem tra so nguyen to
#include<iostream>
using namespace std;
int snt(int a){
    if(a==1) return 0;
    for(int i=2;i<=a;i++){
        if(a%2==0) return 0;
    } return 1;
}
int main()
{
    int n;
    cin>>n;
        if(snt(n)) {cout<<"Co";}
        else cout<<"Khong";
    }*/
/*#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float x,s=0;
    for(int i=1;i<=n;i++){
        s+=pow(x,i);
    }
    cout<<fixed<<setprecision(2)<<s;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    while(n>0){
        d=n%10;
        n=n/10;
        cout<<d;
    }
}*/
/* tim uoc chung
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) cout<<i<<" ";
    }
}*/
/*  tim so nam mà tuoi cha x2 tuoi con
#include<iostream>
using namespace std;
int main()
{
    int cha,con,nam=0;
    cin>>cha>>con;
    if(cha<=30) {cout<<"Vui long nhap lai tuoi cha";}
    if(con>=15) {cout<<"Vui long nhap lai tuoi con";}
    while(con*2!=cha)
    {
        cha++;
        con++;
        nam++;
    } cout<<nam;
}*/
/*Viết chương trình nhập một câu bất kỳ, đếm số từ và ký tự trong câu đó, và in kết quả ra màn hình.
#include<iostream>
#include<string>
using namespace std;
int main()
{   int a=0,dem=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==32) a++;
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=121) dem++;
    }cout<<"So tu la: "<<a+1<<endl;
    cout<<"So ky tu la: "<<dem;
}*/
/* Nhập số nguyên n bất kỳ, viết chương trình in các phần tử đầu tiên của dãy Fibonacci từ 0 đến n.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {a[i]=a[i-1]+a[i-2];}
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}*/
/* Kiểm tra xem phải là số hoàn hảo hay không
#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=1;i<n;i++){
    if(n%i==0)
        s+=i;
    }
    if(s==n){cout<<"so hoan hao";}
    else cout<<"Khong phai la so hoan hao";
}*/
/* Tìm số amstrong
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    int i=0,z=n,e=n,s=0;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    while(z!=0)
    {
        d=z%10;
        s+=pow(d,i);
        z=z/10;
    }
    if(s==e) cout<<"Co";
    else cout<<"Khong";
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int x,y,s=0;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        if(i%2!=0) s+=i;
    } cout<<s;
}*/
/* tìm số amstrong có 3 chữ số
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    for(int i=100;i<1000;i++)
    {
        a=i/100;
        b=(i%100)/10;
        c=(i%100)%10;
        if(100*a+10*b+c==pow(a,3)+pow(b,3)+pow(c,3)) cout<<i<<endl;
    }}*/
/* Kiểm tra số lẻ
#include<iostream>
using namespace std;
bool sole(int d)
{
    while(d!=0)
    {
        int t=d%10;
        if(t%2==0) return false;
        d=d/10;
    } return true;
}
int main()
{
    int n;
    cin>>n;
    if(sole(n)==true) cout<<"Toan so le";
    else cout<<"Sai";
}*/
/* Tìm tổng ước số chẵn
#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            if(i%2==0)s+=i;
    }} cout<<s;
}*/
/*
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    for(int i=10;i<100;i++)
    {
        a=i/10;
        b=i%10;
        if(a*b==2*(a+b)) cout<<i<<" ";
    }}*/
/*#include<iostream>
using namespace std;
int main()
{
    int a,b,n,s=0;
    cin>>a>>b>>n;
    for(int i=1;i<n;i++)
    {
        if(i%a==0&&i%b!=0) s+=i;
    } cout<<s;

}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s+=1.0/(i*(i+1));
    } cout<<fixed<<setprecision(2)<<s;
}*/
/* Sap xep tang dan
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,dem=0;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]) swap(a[j],a[i]);
        }cout<<a[i]<<" ";}}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,s=0,c=0,d=0,e=0;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cout<<"a["<<i<<"]=";cin>>a[i];}
    int x,z=0;
    cout<<"x="; cin>>x;
    int i=0;
    for(;i<n;i++){
            if(x==a[i]){ cout<<"O dat can tim la o so "<<i<<endl;   z++;}}
            if(z==0) cout<<"khong co o dat nao co dien tich x(m2)"<<endl;

    for(int i=0;i<n;i++){s+=a[i];}
    cout<<"Tong dien tich la: "<<s<<"(m2)"<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]<100) c++;
        if(a[i]>=100&&a[i]<500) d++;
        if(a[i]>500) e++;
    }
    cout<<"So o dat co dien tich <100: "<<c<<endl;
    cout<<"So o dat co dien tich 100 den 500: "<<d<<endl;
    cout<<"So o dat co dien tich >500: "<<e<<endl;
}*/
/* Giai Phuong trinh bac 2
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,delta;
    cin>>a>>b>>c;
    if(a==0){
        if(b==0) {cout<<"Phuong trinh vo nghiem";}
        else cout<<"Nghiem cua phuong trinh la: "<<(double)b/c;
    }
    delta=b*b-4*a*c;
    if(delta<0) {cout<<"Phuong trinh vo nghiem";}
    if(delta==0) {cout<<"Phuong trinh co nghiem duy nhat: "<<(double)-b/(2*a);}
    double x1,x2;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    if(delta>0){cout<<"Phuong trinh co 2 nghiem phan biet: "<<x1<<" "<<x2;}
}*/
/*#include<iostream>
using namespace std;
int main()
{
   int x,t;
   cin>>x;
   int a[1000],s[1000];
   for(int i=0;i<x;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];}
   double max=-1,min=9999999;
   for(int i=0;i<x;i++){
    s[i]+=abs(a[i]-x);
    if(s[i]>max) {max=a[i]; t=a[i];}
   } cout<<"Gia tri trong mang cac so thuc xa gia tri x nhat la: :"<<t;}*/
/*#include<iostream>
using namespace std;
int main()
{
   float x,t;
   cin>>x;
   float a[1000],s[1000];
   for(int i=0;i<x;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];}
   double max=-1,min=9999999;
   for(int i=0;i<x;i++){
    s[i]+=abs(x-a[i]);
    if(s[i]<min) {min=a[i]; t=a[i];}
   } cout<<"Gia tri trong mang cac so thuc gan gia tri x nhat la: :"<<t;}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,gtln,gtnn;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cout<<"a["<<i<<"]="; cin>>a[i];}
    double max=a[0],min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min) {min=a[i]; gtnn=a[i];}
        if(a[i]>max) {max=a[i]; gtln=a[i];}
    } cout<<"Mang tren thuoc doan ["<<gtnn<<" "<<gtln<<" ]";}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cout<<"a["<<i<<"]=";cin>>a[i];}
    double max=abs(a[0]);
    for(int i=0;i<n;i++){
        if(abs(a[i])>abs(max)){max=a[i]; t=a[i];}
    }
    cout<<"Doan [-x,x] la: ["<<t<<" "<<abs(t)<<"]";}*/
/* Cho mảng 1 chiều các số thực, hãy tìm giá trị đầu tiên lớn hơn giá trị 2003. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về  -1
#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    float a[1000];
    for(int i=0;i<n;i++){cout<<"a["<<i<<"]=";cin>>a[i];}
    for(int i=0;i<n;i++){
        if(a[i]>2003) t=i;
        else goto dai;
    }cout<<"Co "<<t<<"gia tri lon hon 2003";
    dai: cout<<"-1";
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
bool scp(int n)
{
    int can=sqrt(n);
    if(can*can==n) return true;
    else return false;
}
int main()
{
    int n,s;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cout<<"a["<<i<<"]=";cin>>a[i];}
    for(int i=0;i<n;i++){
        if(scp(a[i])==true){s++; cout<<a[i]<<" ";}
    } if(s==0) cout<<"-1";
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    for(int i=1;i<100;i++){
        if(i==5||i==7||i==93) {continue;}
        cout<<"Cac so le nho hon 100 la: "<<i<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,d,e=0;
    cin>>n;
    while(n>0)
    {
        d=n%10;
        e=e*10+d;
        n=n/10;
    }
    cout<<e;}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0,s=0,x=n,z=n,d;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    while(x!=0)
    {
        d=x%10;
        s+=pow(d,i);
        x=x/10;
    }
    if(s==z) cout<<"Co";
    else cout<<"Khong";
}*/
/* so palindrem
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string a,b;
   getline(cin,a);
   for(int i=a.length()-1;i>=0;i--)
   {
       b+=a[i];
   }
    if(b==a) cout<<"Yes";
    else cout<<"No";
}*/
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=n,y=n,z=n,dem=0,s=0,a=1,b=0,c,d,e,f;
    while(n!=0)
    {
        n=n/10;
        dem++;
    }
    while(x!=0)
    {
        d=x%10;
        s+=d;
        x=x/10;
    }
    while(y!=0)
    {
        c=y%10;
        a*=c;
        y=y/10;
    }
    while(z!=0)
    {
        e=z%10;
        z=z/10;
    }

    cout<<"n co "<<dem<<" chu so"<<endl;
    cout<<"Tong cac chu so trong n la:"<<s<<endl;
    cout<<"Tich cac chu so trong n la:"<<a<<endl;
    cout<<"Chu so dau tien trong n la:"<<e<<endl;
}*/
/*#include<iostream>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<(long)pow(a+b,c+d);
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1934||n==1938||n==1982||n==2006) {cout<<"Italia";}
    else if(n==1930||n==1950) {cout<<"Uruguay";}
    else if(n==1954||n==1974||n==1990||n==2014) {cout<<"Germany";}
    else if(n==1958||n==1964||n==1970||n==1994||n==2002) {cout<<"Brasil";}
    else if(n==1966) {cout<<"English";}
    else if(n==1978||n==1986) {cout<<"Argentina";}
    else if(n==2006) {cout<<"Spain";}
    else if(n==1998||n==2018){cout<<"France";}
    else cout<<"Vietnam";
}*/
/* Bài toán đổi tiền
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[10]={1000,500,200,100,50,20,10,5,2,1};
        int dem=0;
        for(int i=0;i<10;i++)
        {
            dem+=n/a[i];
            n%=a[i];
        }
        cout<<dem<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
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
    int a,b;
    cin>>a>>b;
    int d=ucln(a,b);
    if(snt(d)) cout<<"yes";
    else cout<<"no";
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int a1,b1,c1,a2,b2,c2;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    if(c1>c2) cout<<"2";
    if(c1<c2) cout<<"1";
    if(c1==c2)
    {
        if(b1>b2) cout<<"2";
        if(b1<b2) cout<<"1";
    }
    if(c1==c2&&b1==b2)
    {
    if(a1>a2) cout<<"2";
    if(a1<a2) cout<<"1";
    }
}*/
/* tìm số lớn thứ 2,số nhỏ thứ 2 trong mảng
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++) {cin>>a[i];}
    double max=-1,min=99999;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    double max2=min,min2=max;
     for(int i=0;i<n;i++){
        if(min2>a[i]&&a[i]!=min) min2=a[i];
        if(max2<a[i]&&a[i]!=max) max2=a[i];
     }
    cout << max2<<" "<<min2;
    return 0;
}*/
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int m;
    char t;
    cin>>m;
    while(m--)
    {
        int dem=0;
        cin>>t;
        for(int i=0;i<s.length();i++){
            if(s[i]==t) dem++;
        }
        cout<<dem<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    float toan,ly,hoa,tong;
    cin>>toan>>ly>>hoa;
    tong=toan+hoa+ly;
    if(tong<15||toan<4||ly<4||hoa<4) cout<<"Fail";
    if(tong>=15){
        if(toan>=4&&toan<=5||ly>=4&&ly<=5||hoa>=4&&hoa<=5) cout<<"Medium";
        if(toan>=5&&hoa>=5&&ly>=5) cout<<"Excellent";
    }
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z') cout<<s[i];
    }
}*/
/*#include<iostream>
#include<cmath>
using namespace std;
int snt(int n)
{
    if(n==1||n==0) return 0;
    if(n==2) return 1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    } return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[1000];
    for(int i=0;i<m;i++){cin>>a[i];}
    for(int i=0;i<m;i++){
        if(snt(a[i]) && n%a[i]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}*/
/*#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    double Xo,Yo,Xm,Ym,r,s;
    cin>>Xo,Yo,Xm,Ym,r;
    s=sqrt((Xo-Xm)*(Xo-Xm)+(Yo-Ym)*(Yo-Ym));
    if(s<=6) cout<<"YES";
    else cout<<"NO";
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){cout<<"*";}cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=2*i+1;j>=1;j--){cout<<"*";}cout<<endl;
    }
}*/
/*in ra bảng cửu chương
#include<bits/stdc++.h>
using namespace std;
int b[10];
void print(int a[10],int i){
if(i==11) return;
cout<<setw(8)<<left<<i;
for(int j=0;j<10;j++){
    b[j]=a[j]*i;
}
for(int j=0;j<10;j++) cout<<setw(8)<<left<<b[j];
cout<<endl;
print(a,i+1);
return;
}
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
cout<<setw(8)<<left<<"x";
for(int i=0;i<10;i++) cout<<setw(8)<<left<<a[i];
cout<<endl;
print(a,1);
}*/
/*In ra lịch
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int month,year;
    cin>>month;
    cin>>year;
    int top = 31;
    switch (month){

        case 4: case 6: case 9: case 11:
            top = 30;
            break;
        case 2:
            top = ( (year%4==0 && year%100 != 0) || (year % 400 ==0)) ? 29: 28;
            break;
    }
    int d = 1;
    int a = (14-month)/12;
    int y = year - a;
    int m = month+12*a-2;
    int dow = (d+y+y/4-y/100+y/400+(31*m)/12)%7;
    cout<<"CN\tT2\tT3\tT4\tT5\tT6\tT7"<<endl;
    for(int i=0;i<7;i++)
        if (i<dow)
            cout<<"\t";
        else
            cout<<d++<<"\t";
    cout<<endl;
    do{
       for(int i=0;i<7;i++)
        if(d<top)
         cout<<d++<<"\t";
       if(d<top) cout<<endl;
    } while(d<top);
cout<<d++<<endl;

    return 0;
}*/
/*Bảng cửu chương 1-10
#include<iostream>
using namespace std;
int main()
{
    cout<<"x";
    for(int i=1;i<=10;i++){cout<<"\t"<<i;} cout<<endl;
    for(int i=1;i<=10;i++){
        cout<<i;for(int j=1;j<=10;j++){cout<<"\t"<<i*j;} cout<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int a[1000],b[1000];
    for(int i=0;i<N;i++){cin>>a[i];}
    double max=-1,min=99999;
    for(int i=0;i<N;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    double min2=max, max2=min;
    for(int i=0;i<N;i++){
        if(min2>a[i]&&a[i]!=min) min2=a[i];
        if(max2<a[i]&&a[i]!=max) max2=a[i];
    }
    cout<<min2<<" "<<max2<<endl;
    for(int i=0;i<N;i++){cout<<a[i]<<" ";} cout<<endl;
    for(int i=0;i<N;i++){
        if(i%3==0) a[i]=a[i]*2;

    }
    for(int i=0;i<N;i++){cout<<a[i]<<" ";}
}*/
// QLSinhVien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*#include <iostream>
#include<string>
#include<fstream>
using namespace std;

struct SinhVien {
    string hoTen, queQuan;
    float diemT, diemV, diemA;
};

int main()
{
    // doc du lieu tu file
    ifstream finp;// bien de doc du lieu tu file <=> cin
    finp.open("sinhvien.inp");
    if (finp.fail()) {
        cout << "Mo file khong thanh cong!";
        return 0;
    }

    int n;
    finp >> n;// doc dong dau tien
    // doc cac dong con lai
    SinhVien dsSV[100];

    for (int i = 0; i < n; i++) {
        finp.ignore();
        getline(finp, dsSV[i].hoTen);
        getline(finp, dsSV[i].queQuan);
        finp >> dsSV[i].diemT;
        finp >> dsSV[i].diemV;
        finp >> dsSV[i].diemA;
    }

    // ghi du lieu vao file
    ofstream fout;
    fout.open("sinhvien.out");
    if (fout.fail()) {
        cout << "Mo tao file khong thanh cong!";
        return 0;
    }
    float diemTB = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        diemTB = (dsSV[i].diemT + dsSV[i].diemV + dsSV[i].diemA) / 3.0;
        if (diemTB >= 8.5) {
            dem++;
        }
    }
    fout << dem << endl;
    for (int i = 0; i < n; i++) {
        diemTB = (dsSV[i].diemT + dsSV[i].diemV + dsSV[i].diemA) / 3.0;
        if (diemTB >= 8.5) {
            fout << dsSV[i].hoTen << "\n" << dsSV[i].queQuan << "\n" << diemTB << endl;
        }
    }
    return 0;
}*/
// XauKiTu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class Circle{
public:
    int x,y,r;
    double C,S;
    void nhap()
    {
        cout<<"Nhap vao x:";
        cin>>x;
        cout<<"Nhap vao y:";
        cin>>y;
        cout<<"Nhap vao r: ";
        cin>>r;
        C=2*3.14*r;
        S=3.14*pow(r,2);
        cout<<endl;
    }
    void xuat(){
        cout<< "Diem x bang:"<<x<<endl;
        cout<< "Diem y bang:"<<y<<endl;
        cout<<"Ban kinh r bang:"<<r<<endl;
        cout<< "Chu vi hinh tron la:"<<fixed<<setprecision(2)<<C<<endl;
        cout<< "Dien tich hinh tron la:"<<fixed<<setprecision(2)<<S;
    }
};
int main()
{
    Circle A;
    A.nhap();
    A.xuat();
    Circle B;
    B.nhap();
    B.xuat();
}*/
// NhanVien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
#include <string>
using namespace std;

// tao lop nhan vien
class NhanVien {
private:
    // thanh phan du lieu/dac trung/thuoc tinh
    string hoTen, doB, queQuan;
    bool gioiTinh;
    int luong;
public:
    // ham thanh phan
    // ham tao khong tham so -- khoi tao gia tri cho doi tuong
    NhanVien() {
        hoTen = "";
        doB = "01/01/1954";
        gioiTinh = true;
        luong = 0;
        queQuan = "";
    }
    // ham tao co tham so -- khoi tao gia tri cho doi tuong
    NhanVien(string hoTen, string doB, string queQuan, bool gioiTinh, int luong) {
        this->hoTen = hoTen;
        this->doB = doB;
        this->queQuan = queQuan;
        this->gioiTinh = gioiTinh;
        this->luong = luong;
    }

    // ham huy
    ~NhanVien() {

    }
    /// Ham NHap DU lieu
    // cach 1: viet ham nhap
    void nhapDL();
    // cach 2: viet toan tu nhap
    friend istream& operator>>(istream& is, NhanVien &nv);
    /// ham hien thi
    // Cach 1: Viet ham hien thi
    void hienThi();
    // Cach 2: Viet toan tu xuat du lieu
    friend ostream& operator<<(ostream& out, NhanVien& nv);

    // ham lay thong tin ve que quan
    string getQueQuan() {
        return queQuan;// tra ve gia tri que quan
    }
    // ham lay thong tin ve luong
    int getLuong() {
        return luong;// tra ve gia tri luong
    }

    // dinh nghia toan tu so sanh 2 nhan vien qua gia tri ve luong
    bool operator>(NhanVien x);

};
// trien khai ham nhap du lieu
void NhanVien::nhapDL() {
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap ngay thang nam sinh: ";
    cin >> doB;
    cout << "Nhap gioi tinh 0-Nam, 1-Nu: ";
    string gt;
    cin >> gt;
    cin.ignore();
    if (gt == "Nam" || gt == "nam") {
        gioiTinh = false;
    }
    else {
        gioiTinh = true;
    }
    cout << "Nhap que quan: ";
    getline(cin, queQuan);
    cout << "Nhap luong: ";
    cin >> luong;
}
// trien khai toan tu nhap du  lieu
istream& operator>>(istream& is, NhanVien& nv) {
    is.ignore();
    cout << "Nhap ho ten: ";
    getline(is, nv.hoTen);
    cout << "Nhap ngay thang nam sinh: ";
    is >> nv.doB;
    cout << "Nhap gioi tinh 0-Nam, 1-Nu: ";
    string gt;
    cin >> gt;
    cin.ignore();
    if (gt == "Nam" || gt == "nam") {
        nv.gioiTinh = false;
    }
    else {
        nv.gioiTinh = true;
    }
    cout << "Nhap que quan: ";
    getline(is, nv.queQuan);
    cout << "Nhap luong: ";
    is >> nv.luong;
    return is;
}

//ham hien thi
void NhanVien::hienThi() {
    cout << "\nHo ten: " << hoTen;
    cout << "\tNgay thang nam sinh : " << doB;
    cout << "\tGioi tinh: " << gioiTinh;
    cout << "\tQue quan: " << queQuan;
    cout << "\tLuong: " << luong;
}

ostream& operator<<(ostream& out, NhanVien& nv) {
    out << "\nHo ten: " << nv.hoTen;
    out << "\tNgay thang nam sinh : " << nv.doB;
    out << "\tGioi tinh: " << nv.gioiTinh;
    out << "\tQue quan: " << nv.queQuan;
    out << "\tLuong: " << nv.luong;
    return out;
}

//ham toan tu so sanh
bool NhanVien::operator>(NhanVien x) {
    if (this->luong > x.luong) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    NhanVien nv;
    //nv.nhapDL();
    cin >> nv;//operator>>(cin, nv);// goi ham
    //nv.hienThi();
    cout << nv;// operator<<(cout, nv)// goi ham

    NhanVien dsNV[100];
    int n;// so nhan vien
    cout << "Nhap so nhan vien can quan ly: ";
    cin >> n;
    //1. Nhap du lieu cho n nhan vien
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << "\n";
        //cin >> dsNV[i];// c1: su dung toan tu
        dsNV[i].nhapDL();// c2: goi ham
    }

    // 2. Hien thi nhan vien co que Ha Noi
    // duyet tat ca cac nhan vien
    cout << "Cac nhan vien co que o Ha Noi la: ";
    for (int i = 0; i < n; i++) {
        // kiem tra nhan vien co que o HN ko
        if (dsNV[i].getQueQuan() == "Ha Noi") {
            cout << dsNV[i];//c1: su dung toan tu
            //dsNV[i].hienThi();//c2: goi ham
        }
    }

    // 3. Tính và đưa ra trung bình cộng lương của các nhân viên
    int tongLuong = 0;
    for (int i = 0; i < n; i++) {
        tongLuong += dsNV[i].getLuong();
    }
    cout << "Trung binh luong cua nhan vien la: " << float(tongLuong) / n;//2 -- 10/3=3.3333

    // 4. Sap xep thong thuong
    /*
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dsNV[i].getLuong() > dsNV[j].getLuong()) {
                NhanVien tg;
                tg = dsNV[i];
                dsNV[i] = dsNV[j];
                dsNV[j] = tg;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dsNV[i] > dsNV[j]) {// or goi ham: dsNV[i].operator>(dsNV[j])
                NhanVien tg;
                tg = dsNV[i];
                dsNV[i] = dsNV[j];
                dsNV[j] = tg;
            }
        }
    }
    cout << "\nDanh sach nhan vien duoc sap xep theo ko giam ve luong la\n";
    for (int i = 0; i < n; i++) {
        dsNV[i].hienThi();//c2: goi ham
    }

    //
    return 0;
}*/
/*#include<iostream>
using namespace std;
bool shh(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) sum+=i;
    }
    if(sum==n) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(shh(i)) cout<<i<< " ";
    }
}*/
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
class PhanSo
{
private:
    int tuso,mauso;
public:
    PhanSo(){}
    PhanSo(int tuso,int mauso)
    {
        this->tuso=tuso;
        this->mauso=mauso;
    }
    friend istream & operator>>(istream &is, PhanSo &ps){
        cout<< "Nhap vao tu so:";
        is>>ps.tuso;
        cout<< "Nhap vao mau so:";
        is>>ps.mauso;
        return is;
    }
    friend ostream & operator<<(ostream &out,PhanSo &ps){
        out<< "Ket qua cua phep tinh la:" << ps.tuso<< "/"<<ps.mauso;
        return out;
    }
    int ucln(int a,int b){
    int d;
    while(b>0)
    {
        d=a%b;
        a=b;
        b=d;
    }
    return a;
}
        PhanSo operator+ (PhanSo ps)
    {
        PhanSo kq;
        kq.tuso=tuso*ps.mauso+mauso*ps.tuso;
        kq.mauso=mauso*ps.mauso;

        int UCLN= ucln(kq.tuso,kq.mauso);

        kq.tuso= kq.tuso/UCLN;
        kq.mauso= kq.mauso/UCLN;
        return kq;
    }
};
int main()
{
    PhanSo ps1,ps2,ps3;
    cin>>ps1>>ps2;
    ps3=ps1+ps2;
    cout<<ps3;
}*/
/*
//So Strong
#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<< "Nhap vao n:";
    cin>>n;
    while(n!=0)
    {
        int d,a=1;
        d= n%10;
        cout<<d<< "  ";
        for(int i=1;i<=d;i++)
        {
            a*=i;
        }
        s+=a;
        n=n/10;
    }
}*/
/*Chữ số đầu tiên và cuối cùng
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    while(n!=0)
    {
        int d;
        d = n%10;
        a.push_back(d);
        n=n/10;
    }
    cout<<a[a.size()-1]<< " "<<a[0];
}*/
/* Phan tich thua so nguyen to
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Nhap vao n:";
    cin>>n;
    int dem;
    for(int i=2;i<=n;i++)
    {
        dem = 0;
        while(n%i==0)
        {
            dem++;
            n/=i;
        }
        if(dem)
        {
            cout<<i;
            if(dem>1) cout<< "x"<<dem;
            if(n>i)
            {
                cout<< "x";
            }
        }
    }
}*/
/*Chuan hoa ten
#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if(s[0]>='a'&&s[0]<='z') s[0]-=32;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')  {s[i]+=32;}
    }
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==' ') {s[i+1]-=32;}
    }
    cout<<s;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cout<< "Nhap vao n:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int tg;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tg = a[i];
                a[i]=a[j];
                a[j]= tg;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }
}*/
//                      DE QUY
/*#include<iostream>
using namespace std;
int giai_thua(int n)
{
    if(n==0) return 1;
    return giai_thua(n-1)*n;
}
int main()
{
    cout<<giai_thua(5);
}*/
/*#include<iostream>
using namespace std;
int ucln(int a,int b)
{
    if(b==0) return a;
    else return ucln(b,a%b);
}
int main()
{
    cout<<ucln(14,10);
}*/
/*#include<iostream>
using namespace std;
void dao(int n)
{
    //int n;
    if(n!=0)
    {
        cout<<n%10;
        dao(n/10);
    }
}
int main()
{
    int n;
    cin>>n;
    dao(n);
}*/
/*#include<iostream>
using namespace std;
bool smm(int n)
{
    int a=n,s=0;
    while(n!=0)
    {
        int d = n%10;
        s+=d;
        n=n/10;
    }
    if(a%s==0) return true;
    else return false;
}
int main()
{
    int n,a[100],dem=0;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(smm(a[i])) dem++;
    }
    cout<<dem;
}*/
/*#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    map<char , int> mp;
    for(char x :s)
    {
        mp[x]++;
    }
    for(auto x : mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int current_size = -1;
const int MAX_SIZE = 100;
int stack[MAX_SIZE];

//Kiem tra stack rong
bool isEmpty()
{
    return (current_size == -1);
}
// Kiem tra stack day
bool isFull()
{
    return (current_size  == MAX_SIZE);
}

// them phan tu vao stack
void push(int data)
{
    // Kiem tra xem Stack da day chua , neu chua thi them phan tu vao
    if(!isFull())
    {
        current_size++;
        stack[current_size] = data;
    }
    else
    {
        cout << "Stack da day!!";
    }
}

// Tra ve phan tu dau stack
int top(){
    if(!isEmpty())
    {
        int data = stack[current_size];
        return data;
    }
    else
    {
        cout<< "Stack rong!!";
    }
}
// Xoa phan tu ra khoi ngan xep
int pop()
{
    if(!isEmpty())
    {
        int data = stack[current_size];
        current_size--;
        return data;
    }
    else {
        cout<< "Ngan xep rong!!";
    }
}
int main()
{
    for(int i = 0 ; i < 10 ; i++)
    {
        push(i);
    }
}*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin>>a[i];
    }
    int dem = 0;
    for(int i = 0 ; i< n-1 ; i++)
    {
        for(int j = i+1 ; j< n ; j++)
        {
            if(a[i]!=a[j])
            {
                dem++;
            }
        }
    }
    cout<<dem;
}
