#include<iostream>
using namespace std;
int main()
{
    int *p,n;
    cout<<"Nhap vao n: ";
    cin>>n;
    p=new int [n];
    for(int i=0;i<n;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>*(p+i);
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        if(*(p+i)%2==0&&*(p+i)%3==0) s+=*(p+i);
    }
    cout<<s;
}
