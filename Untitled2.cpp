#include<iostream>
using namespace std;
int tong(int a)
{
    int sum = 0;
    for(int i =1 ; i <a ; i++)
    {
        if(a%i==0) sum+=i;
    }
}
int uoc(int a , int b)
{
    for(int i = a ; i<=b ; i++)
    {
        cout << tong(i) <<endl;
    }
}
int main()
{
    int a ,b ;
    cin>>a >> b;
    uoc(a , b);
}
