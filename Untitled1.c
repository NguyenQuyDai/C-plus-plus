#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x;
    int n;
    cin>>x>>n;
    double s=1;
    for(int i=1;i<=n;i++)
    {
        s+=(pow(-1,i)*pow(x,2*i))/2*i;
    }cout<<s;
}
