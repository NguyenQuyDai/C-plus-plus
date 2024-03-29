#include<bits/stdc++.h>
using namespace std;
bool shh(int n)
{
   int tong=1;
   if(n<2) return false;
   for(int i=2;i<n;i++)
   {
       if(n%i==0)
       {
           tong+=i;
       }
   }
   if(tong==n) {return true;}
   return false;
}
int main()
{
    int n,tong=0;
    ifstream finp;
    finp.open("ra.txt");
    if(finp.fail()){
        cout<<"Mo file khong thanh cong";
        return 0;
    }
    while(!finp.eof())
    {
        if(finp.eof()) {break;}
        finp>>n;
    }
    ofstream fout;
    fout.open("vao.txt");
    if(fout.fail()){
        cout<<"Tao file khong thanh cong";
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(shh(i)) fout<<i<<" ";
    }
}
