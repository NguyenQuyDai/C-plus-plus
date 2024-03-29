#include<iostream>
using namespace std;
int UCLN(int a,int b)
{
   int d;
   while(b>0)
   {
      d=a%b;
      a=b;
      b=d;
   }return a;
}
int main()
{
   int a,b;
   cin>>a>>b;
   cout<<UCLN(a,b);
}
