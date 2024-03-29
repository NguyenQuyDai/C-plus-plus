/* Bai 2
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {cin>>a[i];}
    double max=a[0];
    for(int i=1;i<=n;i++)
    {
        if(a[i]>max) max=a[i];
    } cout<<max;
}*/
/* Bai 1
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {cin>>a[i];}
   int x; cin>>x;
   int i;
   for(;i<n;i++)
    if(a[i]==x) break;
   if(i<n) {cout<<i;}
   else cout<<-1;
    return 0;
}*/
/* Bai 3
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {cin>>a[i][j];}
    }
    int max=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
          if(a[i][j]>max) max=a[i][j];
        }
    }cout<<max;
}*/
/* Bai 5
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {cout<<"a["<<i<<"]=";
         cin>>a[i];}
    int x;
    cin>>x;
    int i,s=0,d=0,b=0,c=0;
    for(;i<n;i++)
        if(a[i]==x) break;
        if(i<n) {cout<<"O dat can tim la o so: "<<i<<endl;}
        else cout<<"khong co o dat nao co dien tich x"<<endl;
    for(int i=0;i<n;i++){s+=a[i];} cout<<"Tong dien tich la: "<<s<<endl;;
    for(int i=0;i<n;i++)
{
        if(a[i]<100) d++;
        else if(a[i]>=100&&a[i]<=500) b++;
        else if(a[i]>500) c++;}
     cout<<"So o dat co dien tich <100 la: "<<d<<endl;
      cout<<"So o dat co dien tich 100 den 500 la: "<<b<<endl;
      cout<<"So o dat co dien tich >500 la: "<<c<<endl;
}*/
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
     cout<<x<<" "<<y;
}
