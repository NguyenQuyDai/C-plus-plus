#include<iostream>
using namespace std;
int main()
{
    int m,n,k;
    cin>>m>>n>>k;
    int a[1000][1000];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>a[i][j];}
    }
    double max=-1,min=9999999;
    for(int j=0;j<n;j++)
    {
        if(a[k][j]>max) max=a[k][j];
        if(a[k][j]<min) min=a[k][j];
    }
    if(k<m) {cout<<min<<" "<<max;}
    else cout<<"-1 -1";
    return 0;
}
