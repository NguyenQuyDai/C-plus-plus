#include<bits/stdc++.h>
using namespace std;
struct thongtin
{
    string ma,ten;
    double soluong,giaban;
};
int main()
{
    vector<thongtin> danhsach;
    thongtin m;
    int n;
    ifstream finp;
    finp.open("mathanginp.txt");
    if(finp.fail()){
        cout<<"Mo file khong thanh cong";
        return 0;
    }
    ofstream fout;
    fout.open("mathangout.txt");
    if(fout.fail()){
        cout<<"Tao file khong thanh cong";
        return 0;
    }
    int i=0;
    finp>>n;
    while(i<n)
    {

    }
}
