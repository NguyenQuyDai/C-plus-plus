#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string ten;
    double diem;
    ofstream fout;
    cout<<"Nhap vao so luong sinh vien: ";
    cin>>n;
    fout.open("sinhvien.txt");
    if(fout.fail())
    {
        cout<<"Mo file khong thanh cong";
        return 0;
    }
    int i=0;
    while(i<n)
    {
        cout<<"Nhap vao ten sinh vien thu:"<<i+1;
        fflush(stdin);
        cout<<"\nTen:";
        getline(cin,ten);
        cout<<"Diem:";
        cin>>diem;
        if(ten=="Hoang"&&diem>=8.0) {
            fout<<ten<<" "<<diem<<endl;
        }
            i++;
    }
}
