#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream finp;
    finp.open("chessinp.txt");
    if(finp.fail()){
        cout<<"Mo file khong thanh cong";
        return 0;
    }
    ofstream fout;
    fout.open("chessout.txt");
    if(fout.fail()){
        cout<<"Tao file khong thanh cong";
        return 0;
    }
    int a[100][100];
    int n,m,k,t=0,tong=0;
    double min=99999;
    while(!finp.eof())
    {
        if(finp.eof()) {break;}
        finp>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                finp>>a[i][j];
            }
        }
    }

    for(int i=0;i<n;i++){double max=-1;
        for(int j=0;j<m;j++){
            if(a[i][j]>max) max=a[i][j];
        }
        cout<<max<<" ";
    }
}
