#include<iostream>
#include<math.h>
using namespace std;
int demso(int n)
{
   int dem;
   while(n!=0){
      n=n/10;
      dem++;
   }
   return dem;
}
bool scp(int n)
{
    int can=sqrt(n);
    if(can*can==n) return true;
    else return false;
}
int snt(int n)
{
    if(n==1||n==0) return 0;
    if(n==2) return 1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }return 1;
}
int sdx(int n)
{
    int s=0;
    while(n!=0)
    {
        int d=n%10;
        s=s*10+d;
        n=n/10;
    } return s;
}
int main()
{
   long long M;
   cin>>M;
   cout<<"So chu so cua M la:"<<demso(M)<<endl;
   if(scp(M)==true) cout<<"M la so chinh phuong"<<endl;
   else cout<<"M khong phai la so chinh phuong"<<endl;
   if(snt(M)) cout<<"M la so nguyen to"<<endl;
   else cout<<"M khong phai la so nguyen to"<<endl;
   if(sdx(M)==M) cout<<"M la so doi xung";
   else cout<<"M khong phai la so doi xung";
}
