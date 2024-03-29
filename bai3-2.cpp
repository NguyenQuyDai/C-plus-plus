#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Nhap vao du lieu:"<<endl;
    cin>>n>>m;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){cin>>a[i][j];}
    } cout<<endl;
    cout<<"Ma tran la:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){cout<<a[i][j]<<" ";}cout<<endl;
    } cout<<endl;
    double max=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>max) max=a[i][j];
        }
    }
    cout<<"So lon nhat la: "<<max<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==max) cout<<"Vi tri xuat hien la:["<<i<<"]["<<j<<"]"<<endl;
        }
    }
    cout<<endl;
    int k;
    cout<<"Nhap vao so K:"; cin>>k;
    for(int j=0;j<m-1;j++){
        for(int z=j+1;z<m;z++){
            if(a[k][j]>a[k][z]) swap(a[k][j],a[k][z]);
        }
    }
    cout<<"Ma tran sau khi sap xep dong K la:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){cout<<a[i][j]<<" ";}cout<<endl;
    }
    cout<<"Ma tran nghich dao la:"<<endl;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){cout<<a[i][j]<<" ";}cout<<endl;
    }
}
