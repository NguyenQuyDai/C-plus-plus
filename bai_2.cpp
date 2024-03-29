#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ifstream finp;
    finp.open("songuyen.inp");
    if(finp.fail()){
        cout<<"Khong mo file thanh cong";
        return 0;
    }
    vector<int> a;
    int n;
    while(!finp.eof()){
        if(finp.eof()) {break;}
        finp>>n;
        a.push_back(n);
    }
    int b[100],x=1;
    b[0]=a.at(0);
    for(int i=0;i<a.size();i++){
        int dem = 0;
        for(int j = 0; j < x; j++){
            if(a.at(i) == b[j]){
                dem++;
            }
        }
        if(dem == 0){
            b[x] = a.at(i);
            x++;
        }
    }
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            if(b[i]>b[j]) swap(b[i],b[j]);
        }
    }
    for(int i=0;i<x;i++){
        if(b[i]%2==0) cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        if(b[i]%2!=0) cout<<b[i]<<" ";
    }
}

