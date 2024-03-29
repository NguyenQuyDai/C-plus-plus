#include<bits/stdc++.h>
using namespace std;
struct daily
{
    string hoten;
    int slbanduoc;
};
int main()
{
    daily m;
    vector<daily> danhsach;
    vector<string> thongtin;
    int n;
   double s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap vao thong tin nhan vien thu "<<i+1<<":"<<endl;
        cout<<"Ho ten:";
        fflush(stdin);
        getline(cin,m.hoten);
        cout<<"Nhap vao so luong may ban duoc:";
        cin>>m.slbanduoc;
        danhsach.push_back(m);
    }
    cout<<endl;
    for(int i=0;i<danhsach.size();i++)
    {
        s+=danhsach[i].slbanduoc;
    }
    double tb=s/n;
    cout<<"Thong tin nhan vien ban duoc so luong may tinh lon hon tb la:"<<endl;
    for(int i=0;i<danhsach.size();i++)
    {
        if(tb<danhsach[i].slbanduoc) cout<<danhsach[i].hoten<<" "<<danhsach[i].slbanduoc<<endl;
    }

}
