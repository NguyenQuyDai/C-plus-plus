#include<iostream>
using namespace std;
int main()
{
   int n,t;
   cout<<"Nhap vao n:";
   cin>>n;
   cout<<endl;
   int a[1000],b[1000];
   for(int i=0;i<n;i++){cin>>a[i];}
   for(int i=0;i<n;i++){cin>>b[i];}
   cout<<"Loai nam nguoi dan co the hai an duoc la:"<<endl;
   for(int i=0;i<n;i++)
   {
      if(a[i]>=2*b[i]) cout<<"("<<a[i]<<","<<b[i]<<")";
   }
   cout<<endl;
   double max=-1;
   for(int i=0;i<n;i++)
   {
      if(b[i]>max) {max=b[i]; t=i;}
   }
   cout<<"Loai nam co luong doc to cao nhat la:"<<endl<<"("<<a[t]<<","<<b[t]<<")";
   cout<<endl;
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]) {swap(a[i],a[j]); swap(b[i],b[j]);}
    }
   }
   cout<<"Cac loai nam theo chieu khong  giam cua muc dinh duong la:"<<endl;
   for(int i=0;i<n;i++){
    cout<<"("<<a[i]<<","<<b[i]<<")";
   }
}
