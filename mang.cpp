#include<iostream>
#include<string>
using namespace std;
int main()
{
    int dem=0,demsai=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]>='0'&&s[i]<='9') dem++;
        else demsai++;
    }
    if(dem==0)
        {cout<<"Chuoi vua nhap khong bieu dien 1 chuoi nguyen duong";
         cout<<"Can bo di it nhat"<<demsai<<"de xau con lai bieu dien so nguyen duong";
        }
    else cout<<"Chuoi vua  nhap la so nguyen duong";
}
