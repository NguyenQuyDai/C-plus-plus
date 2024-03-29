/* Bai 1a
#include<iostream>
using namespace std;
int main()
{
int n,s;
cin>>n;
for(int i=1;i<=n;i++){s+=i;}
cout<<s;
return 0;
}*/
/* Bai 1b
#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n;
    for(int i=1;i<=n;i++){s+=i*i;}
    cout<<s;
    return 0;
}*/
/* Bai 1c
#include<iostream>
using namespace std;
int main()
{
    double n,s;
    cin>>n;
    for(double i=1;i<=n;i++)
            s+=1/i;
    cout<<s;
    return 0;
}
/* Bai 1d
#include<iostream>
using namespace std;
int main()
{
    int n,s=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        s*=i;
    cout<<s;
    return 0;
}*/
/* Bai 1e
#include<iostream>
using namespace std;
int main()
{
    int n,s,a;
    cin>>n;
    a=1;
    s=0;
    for(int i=1;i<=n;i++)
       a*=i;
       s+=a;
    cout<<s;
    return 0;
}*/
/* Bai 2
#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int s=0;
        for(int i=2;i<=n-1;i++){
    if(i%a==0&&i%b!=0) s+=i;}
        cout<<s;
    return 0;
}*/
/* Bai 3
#include<iostream>
using namespace std;
int main()
{int a,b;
    for(int i=10;i<=90;i++)
    {
        a=i/10;
        b=i%10;
       if(a*b==2*(a+b))
        cout<<" "<<i;
    }
      return 0;
}*/
/* Bai 4
#include<bits/stdc++.h>
using namespace std;
int main(){
int i=0;
float s=0;
   while(s<2.101999)
{
   s=s+(float)1/(2*i-1);
   i++;
   }
   cout<<i-1;
}*/
/* Bai 5
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Nhap vao so n: ";
   cin>>n;
   cout<<n<<"-->";
   while(n!=0)
   {int a=0;
   a=n%10;
   n=n/10;
   cout<<a;
   }
   return 0;
}*/
/*Bai 6
#include<iostream>
using namespace std;
int check(int a)
{    if(a==2) return 1;
    for(int i=2;i<a;i++)
{
    if(a%i==0) return 0;
} return 1;
}
int main()
{
    int n;int s=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
       if(check(i)) s+=i;
    }
    cout<<s;}*/

/* Bai 7
#include<iostream>
using namespace std;
int check(int a,int b)
{ int d;
    while(b>0){
    d=a%b;
    a=b;
    b=d;
    }return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<check(a,b);
}*/
/* Bai 8
#include<iostream>
using namespace std;
int main()
{
    int x,n,s=0;
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        s+=pow(-1,i)*pow(x,2*i);
    }cout<<s;
}*/
/*Bai 9
#include<iostream>
using namespace std;
int main()
{
      int n,k,s=1;
      cin>>n>>k;
      for(int i=n-k+1;i<=n;i++)
      {
          s*=i;
      }cout<<s;
}*/
/* Bai 9
#include<iostream>
using namespace std;
int main(){
    int a[1000],n;
     cin>>n;
     a[0]=a[1]=1;
     for(int i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
     }
     for(int i=0;i<=n;i++){
        cout<<a[i]<<"  ";
     }
}*/
#include<iostream>
using namespace std;
int main()
{

}

