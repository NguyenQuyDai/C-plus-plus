#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    double max=-1,min=99999;
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    double max2=min,min2=max;
    for(int i=0;i<n;i++){
        if(max2<a[i]&&a[i]!=max) max2=a[i];
        if(min2>a[i]&&a[i]!=min) min2=a[i];
    }
    cout<<"So nho thu 2 la:"<<min2<<endl<<"so lon thu 2 la:"<<max2<<endl;
    cout<<"day truoc khi nhan:"<<endl;
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    for(int i=0;i<n;i++){
        if((i+1)%3==0) a[i]*=2;
    }
    cout<<endl;
    cout<<"day sau khi nhan:"<<endl;
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}
