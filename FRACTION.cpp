#include<iostream>
using namespace std;
class PhanSo
{
private:
    int tuso,mauso;
public:
    PhanSo(){}
    PhanSo(int tuso,int mauso)
    {
        this->tuso=tuso;
        this->mauso=mauso;
    }
    friend istream & operator>>(istream &is, PhanSo &ps){
        cout<< "Nhap vao tu so:";
        is>>ps.tuso;
        cout<< "Nhap vao mau so:";
        is>>ps.mauso;
        return is;
    }
    friend ostream & operator<<(ostream &out,PhanSo &ps){
        out<< "Phan so vua nhap la:" << ps.tuso<< "/"<<ps.mauso;
        return out;
    }
    PhanSo operator+ (PhanSo ps)
    {
        PhanSo kq;
        kq.tuso=tuso*ps.mauso+mauso*ps.tuso;
        kq.mauso=mauso*ps.mauso;
        return kq;
    }
};
int main()
{
    PhanSo ps1,ps2,ps3;
    cin>>ps1>>ps2;
    cout<<ps1<<endl<<ps2<<endl;
    ps3=ps1+ps2;
    cout<<ps3;
} 
