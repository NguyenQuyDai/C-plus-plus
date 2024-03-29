#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>> n ;
    int a[n];
    for(int i = 0 ; i< n ; i++)
    {
        cin>>a[i];
    }
    for(int i  = 1 ; i < n ; i++)
    {
        int value = a[i];
        int pos = i;
        while(pos > 0 && value < a[pos-1])
        {
                a[pos] = a[pos-1];
                pos -=1;
                a[pos] = value;
        }
    }
    for(int i = 0 ; i< n ; i++)
    {
        cout<<a[i]<< " ";
    }
}
