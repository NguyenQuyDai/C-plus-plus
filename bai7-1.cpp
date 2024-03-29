#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream finp;
    finp.open("anhdat.txt");
    if(finp.fail()){
        cout<<"Mo file khong thanh cong";
        return 0;
    }
    double max=-1,min=256;
    int dem=0,m,n,a[100][100];
    while(!finp.eof())
    {
        if(finp.eof()) {break;}
        finp>>m>>n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                finp>>a[i][j];
            }
        }
    }
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]<min) min=a[i][j];
                if(a[i][j]>max) max=a[i][j];
                if(a[i][j]<70) dem++;
            }
        }
        cout<<"Diem toi nhat: "<<min<<endl;
        cout<<"Diem sang nhat: "<<max<<endl;
        cout<<"So diem anh nho hon 70: "<<dem;
}
