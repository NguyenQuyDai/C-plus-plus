#include<bits/stdc++.h>
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
    int *p,n;
    cout<<"Nhap vao n: ";
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>*(p+i);
    }
    cout<<"Day so vua nhap la: ";
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(snt(*(p+i))) dem++;
    }
    cout<<"\nSo luong so nguyen to vua nhap la:"<<dem;
}
