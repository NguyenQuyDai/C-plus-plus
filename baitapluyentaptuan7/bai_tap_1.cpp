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
    int *p,n,k,tong=0,nhan2=0;
    cout<<"Nhap vao n:";
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>*(p+i);
    }
    cout<<"Day so da nhap la:";
    for(int i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(snt(*(p+i))) tong+=*(p+i);
    }
    cout<<"\nTong cac phan tu la so nguyen to la:"<<tong<<endl;
    cout<<"Nhap vao so k:";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(i==k) nhan2=*(p+i)*2;
    }
    cout<<"Phan tu o vi tri k sau khi nhan doi la:"<<nhan2;
}
