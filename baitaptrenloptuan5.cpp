#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct sinhvien
{
    string ten,quequan;
    double diemT,diemV,diemA;
};
int main()
{
    int n;
    cout<<"Nhap vao n:"<<endl;
    cin>>n;
    string qq;
    double s=0;
    vector<sinhvien> danhsach;
    sinhvien m;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap vao thong tin sinh vien thu "<<i+1<<":";
        cout<<"Ten: ";
        fflush(stdin);
        getline(cin,m.ten);
        cout<<"Que quan: ";
        fflush(stdin);
        getline(cin,m.quequan);
        cout<<"Diem Toan: ";
        cin>>m.diemT;
        cout<<"Diem Van: ";
        cin>>m.diemV;
        cout<<"Diem Anh: ";
        cin>>m.diemA;
        danhsach.push_back(m);
    }
    cout<<"Nhap vao que quan: ";
    fflush(stdin);
    getline(cin,qq);
    cout<<"Nhung sinh vien co que "<<qq<<"la:";
    fflush(stdin);
    for(int i=0;i<danhsach.size();i++)
    {
        if(danhsach[i].quequan==qq) cout<<danhsach[i].ten<<" ";
    }

}
