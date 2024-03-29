#include<iostream>
using namespace std;
int main()
{
 float a,b,c,t;
 cout<<"Nhap vao diem chuyen can:"<<endl;
 cin>>a;
 cout<<"Nhap vao diem dieu kien:"<<endl;
 cin>>b;
 cout<<"Nhap vao diem cuoi ki:"<<endl;
 cin>>c;
 t=0.1*a+0.3*b+0.6*c;
 if(t<=10&&t>=8.5)
 {cout<<t<<" "<<"A";}
 if(t<=8.4&&t>=8)
 {cout<<t<<" "<<"B+";}
 if(t<=7.9&&t>=7)
 {cout<<t<<" "<<"B";}
 if(t<=6.9&&t>=6.5)
 {cout<<t<<" "<<"C+";}
 if(t<=6.4&&t>=5.5)
 {cout<<t<<" "<<"c";}
 if(t<=5.4&&t>=5)
 {cout<<t<<" "<<"D";}
 if(t<=4.9&&t>=4)
 {cout<<t<<" "<<"D";}
 if(t>=0&&t<=3.9)
 {
     cout<<t<<" "<<"F";
 }
 return 0;
 }
