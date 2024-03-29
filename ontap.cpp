/* Bai 1
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n!=0)
  { int a=0;
    a=n%10;
    n=n/10;
    cout<<a;
  }
}*/
/* Bai 2
#include<iostream>
using namespace std;
int hello(int a)
{
    if(a==2) return 1;
    for(int i=2;i<a;i++)
    {
        if(a%i==0) return 0;
    } return 1;
}
int main()
{
    int n;
    cin>>n;
    int s=0;
    for(int i=2;i<n;i++)
    {
        if(hello(i)) s+=i;
    } cout<<s;
    return 0;
}*/
/* Bai 3
#include<iostream>
using namespace std;
int hello(int a,int b)
{  while(b>0){
    int d;
    d=a%b;
    a=b;
    b=d;}return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<hello(a,b);
}*/
/* Bai 4
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=pow(-1,i)*pow(x,2*i);
        cout<<s;
    }
}*/
/* Bai 5
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int s=1,d=1;
   for(int i=n-k+1;i<=n;i++)
   {
       s*=i;

   }
    cout<<s;
}*/
/* Bai 6
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long truoc=1,sau=0,tong;
    int i=1;
    while(i<=n)
    {   cout<<" "<<truoc;
        tong=truoc+sau;
        sau=truoc;
        truoc=tong;
        i++;
    }
}*/
/* Bai 10
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,n,s=0;
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        s+=pow(x,i);
    } cout<<s;
}*/
/* Bai 9
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    for(int i=100;i<=999;i++)
    {
      a=i/100;
      b=(i%100)/10;
      c=i%10;
      if(100*a+10*b+c==pow(a,3)+pow(b,3)+pow(c,3)) cout<<i<<" ";
    } return 0;
}*/
/* Bai 14
#include<iostream>
using namespace std;
int main()
{
    int n,d,s=0,z=0;
    cin>>n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        if(d%2==0) { z+=1; break;}
    } if(z==1) {cout<<"Vui long nhap lai";}
    else cout<<"Toan so le";
}*/
/* Bai 15
#include<iostream>
using namespace std;
int main()
{
    int x,s;
    cin>>x;
    if(x>=5)
        { s=2*x*x+5*x+9; cout<<s;}
   else if(x<5) {s=-2*x*x+4*x-9;cout<<s;}
}*/
/* Bai 16
#include<iostream>
using namespace std;
int main()
{
    int thang,nam;
    cin>>thang>>nam;
    if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){cout<<31;}
    else if(thang==2)
    {
        if(nam%4!=0||(nam%100==0&&nam%400!=0)) cout<<28;
            else cout<<29;
    }
    else cout<<30;
}*/
/* Bai 1 tren cst
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double s=0,a=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   a+=i;
        s+=(double)1.0/a;
    } cout<<fixed<<setprecision(2)<<s;
}*/
/* Bai 3 tren cst
#include<iostream>
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
/*#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
   int n; double x,s=1;
   cin>>x>>n;
   for(int i=1;i<=n;i+2)
   {
       s+=(pow(-1,i)*pow(x,2*i))/2*i;

   } cout<<s;

   return 0;
}*/
#include<iostream>
using namespace std;
int snt(int n)
{
    if(n==0||n==1) return 0;
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }return 1;
}
int main()
{
    int n;
    cin>>n;
    if(snt(n)) cout<<"Co";
    else cout<<"Khong";
}
