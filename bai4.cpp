#include<bits/stdc++.h>
using namespace std;
struct nhanvien
{
    string HoTen;
    int soluongmay;
};
int main()
{
    vector<nhanvien> thongtin;
    nhanvien m;
    int n;
    cout<<"Nhap nhap vao n:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nNhap vao thong tin nhan vien thu "<<i+1<<" :";
        cout<<"\nHo Ten:";
        fflush(stdin);
        getline(cin,m.HoTen);
        cout<<"So luong may ban duoc:";
        cin>>m.soluongmay;
        thongtin.push_back(m);
    }
    double tb=0;
    for(int i=0;i<thongtin.size();i++)
    {
        tb+=thongtin[i].soluongmay;
    }
    tb=tb/n;
    cout<<"Nhung nhan vien ban duoc so luong may lon hon so luong trung binh la:"<<endl;
    for(int i=0;i<thongtin.size();i++)
    {
        if(tb<thongtin[i].soluongmay) cout<<thongtin[i].HoTen<<" "<<thongtin[i].soluongmay<<endl;
    }
    for(int i=0;i<thongtin.size();i++)
    {

    }
}
