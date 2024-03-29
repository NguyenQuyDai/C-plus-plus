#include<bits/stdc++.h>
using namespace std;
class nhanvien{
private:
    string Ho_ten,birthday,que_quan;
    bool gt;
    int luong;
public:
    nhanvien(){}
    nhanvien(string Ho_ten,string birthday,string que_quan,bool gt,int luong){
        this->Ho_ten=Ho_ten;
        this->birthday=birthday;
        this->gt=gt;
        this->que_quan=que_quan;
        this->luong=luong;
    }
    ~nhanvien(){}
    friend istream& operator>>(istream& is,nhanvien &nv);
    friend ostream& operator<<(ostream& out,nhanvien& nv);
    string getque_quan(){
        return que_quan;
    }
    int getLuong() {
        return luong;// tra ve gia tri luong
    }
};
istream& operator>>(istream& is,nhanvien &nv){
    is.ignore();
    cout<<"Nhap vao ho ten: ";
    getline(is,nv.Ho_ten);
    cout<<"Nhap vao ngay thang nam sinh: ";
    getline(is,nv.birthday);
    cout<<"Nhap vao que quan: ";
    getline(is,nv.que_quan);
    cout << "Nhap gioi tinh 0-Nam, 1-Nu: ";
    string gtinh;
    cin >> gtinh;
    cin.ignore();
    if (gtinh == "Nam" || gtinh == "nam") {
        nv.gt = false;
    }
    else {
        nv.gt = true;
    }
    cout<<"Nhap vao luong: ";
    is>>nv.luong;
    return is;
}
ostream& operator<<(ostream& out,nhanvien& nv){
    out << "\nHo ten: " << nv.Ho_ten;
    out << "\tNgay thang nam sinh : " << nv.birthday;
    out << "\tGioi tinh: " << nv.gt;
    out << "\tQue quan: " << nv.que_quan;
    out << "\tLuong: " << nv.luong;
    return out;
}
int main()
{
    nhanvien dsNV[100];
    int n;// so nhan vien
    cout << "Nhap so nhan vien can quan ly: ";
    cin >> n;
    //1. Nhap du lieu cho n nhan vien
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << "\n";
        cin >> dsNV[i];
    }
    /*for(int i=0;i<n;i++)
    {
        if(dsNV[i].getque_quan()=="Ha Noi")
            cout << dsNV[i];
    }*/
    int sum;
    for (int i = 0; i < n; i++) {
        sum += dsNV[i].getLuong();
    }
    cout<<sum;
}
