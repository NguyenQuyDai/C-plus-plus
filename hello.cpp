#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    string a;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                a=s[i];
                s[i]=s[j];
                s[j]=a;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
       cout<<s[i]<< " ";
    }
}
