#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,a=1;
    float x,s1,s2,s3;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
       s1+=pow(x,i)/(i*(i+1));
    }
    cout<<"s1= "<<s1<<endl;
    for(int i=1;i<=n;i++)
    {
        a*=i;
        s2+=1.0/(a);
    }
    cout<<"s2= "<<s2+1<<endl;
    for(int i=1;i<=n;i++)
    {
        s3+=pow(x,2*i+1);
    }
    cout<<"s3= "<<s3+x<<endl;
    cout<<"s4= "<<s1+2*(s2+1)+3*(s3+x);
}
