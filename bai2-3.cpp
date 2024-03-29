#include<iostream>
using namespace std;
void dong()
{for(int i=1;i<=120;i++){cout<<"=";}}
int hamgiatrituyetdot(int n){return abs(n);}
double hamgiatrituyetdot(double n)
{return abs(n);}
int timmax(int a,int b,int c){
   double max=a;
   if(b>max) max=b;
   if(c>max) max=c;
   return max;
}
double timmax(double a,double b,double c){
   double max=a;
   if(b>max) max=b;
   if(c>max) max=c;
   return max;}
int timmin(int a,int b,int c){
   double min=a;
   if(b<min) min=b;
   if(c<min) min=c;
   return min;
}
double timmin (double a,double b,double c){
   double min=a;
   if(b<min) min=b;
   if(c<min) min=c;
   return min;}
int trungbinhcong(int a,int b,int c)
{
    return (a+b+c)/3;
}
double trungbinhcong(double a,double b,double c)
{
    return (a+b+c)/3;
}
int main()
{
    cout<<"cau so 1:"<<endl;
    int a; float b;
    cin>>a>>b;
    cout<<hamgiatrituyetdot(a)<<" "<<hamgiatrituyetdot(b)<<endl;
    dong();
    cout<<"cau so 2:"<<endl;
    int x1,x2,x3;
    float a1,a2,a3;
    cin>>x1>>x2>>x3;
    cin>>a1>>a2>>a3;
    cout<<timmax(x1,x2,x3)<<" "<<timmax(a1,a2,a3)<<endl;
    dong();
    cout<<"cau so 3:"<<endl;
    int x4,x5,x6;
    float a4,a5,a6;
    cin>>x4>>x5>>x6;
    cin>>a4>>a5>>a6;
    cout<<timmin(x4,x5,x6)<<" "<<timmin(a4,a5,a6)<<endl;
    dong();
    cout<<"cau so 4:"<<endl;
    int b1,b2,b3;
    float d1,d2,d3;
    cin>>b1>>b2>>b3;
    cin>>d1>>d2>>d3;
    cout<<trungbinhcong( b1,b2,b3)<<" "<<trungbinhcong(d1,d2,d3);
}
