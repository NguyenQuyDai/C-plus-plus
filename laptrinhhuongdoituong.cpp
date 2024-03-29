/*#include<iostream>
using namespace std;
class HOCSINH{
private:
    string HoTen;
    double DiemT,DiemL,DiemH,DiemTB;
public:
    void nhap();
    void in();
};
void HOCSINH::nhap(){
    cout<<"Nhap vao ho va ten: "; fflush(stdin); getline(cin,HoTen);
    cout<<"Nhap vao diem Toan: "; cin>>DiemT;
    cout<<"Nhap vao diem Ly: "; cin>>DiemL;
    cout<<"Nhap vao diem Hoa: "; cin>>DiemH;
    DiemTB=(DiemT+DiemL+DiemH)/3;
}
void HOCSINH::in(){
    cout<<"Thong tin hoc sinh la:"<<endl;
    cout<<"Ho va Ten: "<<HoTen<<endl;
    cout<<"Diem Toan la: "<<DiemT<<endl;
    cout<<"Diem Hoa la: :"<<DiemH<<endl;
    cout<<"Diem Ly la: "<<DiemL<<endl;
    cout<<"Diem trung binh la: "<<DiemTB<<endl;
    if(DiemTB>=8.0){cout<<"Hoc Sinh Gioi";}
    else if(DiemTB<8&&DiemTB>=6.0) {cout<<"Hoc Sinh Kha";}
    else if(DiemTB>=5&&DiemTB<6) {cout<<"Hoc Sinh Trung Binh";}
    else cout<<"Hoc Sinh Yeu";
}
int main()
{
    HOCSINH x;
    x.nhap();
    x.in();
}*/
/*#include<bits/stdc++.h>
using namespace std;
class Time{
private:
    int hour,minute,second;
public:
    Time(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void setTime(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    int getHour(){
        return hour;
    }
    void setHour(int hour){
        this->hour=hour;
    }
    int getMinute(){
        return minute;
    }
    void setMinute(int minute){
        this->minute=minute;
    }
    int getSecond(){
        return second;
    }
    void setSecond(int second){
        this->second=second;
    }
    void print(){
        string hour=to_string(this->hour);
        string minute=to_string(this->minute);
        string second=to_string(this->second);
        if(hour.length()==1)
            hour="0"+ hour;
        if(minute.length()==1)
            minute="0"+minute;
        if(second.length()==1)
            second="0"+second;
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    void nextSecond(){
        if(hour==23&&minute==59&&second==59){
            hour=0;
            minute=0;
            second=0;
            return;
        }
        if(minute==59&&second==59)
        {
            hour++;
            minute=0;
            second=0;
            return;
        }
        if(second==59)
        {
            minute++;
            second=0;
            return;
        }
        second++;
    }
    void previousSecond()
    {
        if(hour==0&&minute==0&&second==0)
        {
            hour=23;
            minute=59;
            second=59;
            return;

        }
        if(minute==0&&second==0){
            minute=59;
            second=59;
            return;
        }
        if(second==0){
            second=59;
            return;
        }
        second--;
    }
};
int main()
{
    Time t(12,1,1);
    t.print();
    t.setTime(11,2,3);
    t.nextSecond();
    t.print();
    t.previousSecond();
    t.print();
}*/
/*#include<bits/stdc++.h>
using namespace std;
class Time{
private:
    int hour,minute,second;
public:
    Time(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void setTime(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    int getHour()
    {
        return hour;
    }
    void setHour()
    {
        this->hour=hour;
    }
    int getMinute()
    {
        return minute;
    }
    void setMinute()
    {
        this->minute=minute;
    }
    int getSecond()
    {
        return second;
    }
    void setSecond()
    {
        this->second=second;
    }
    void nextSecond()
    {
        if(hour==23&&minute==59&&second==59)
        {
            hour=0;
            minute=0;
            second=0;
            return;
        }
        if(minute==59&&second==59)
        {
            minute=0;
            second=0;
            return;
        }
        if(second==59)
        {
            second=0;
            return;
        }
        second++;
    }
    void print()
    {
        string hour=to_string(this->hour);
        string minute=to_string(this->minute);
        string second=to_string(this->second);
        if(hour.length()==1)
            hour="0"+hour;
        if(minute.length()==1)
            minute="0"+minute;
        if(second.length()==1)
            second="0"+second;
            cout<<hour+":"<<minute+":"<<second<<endl;
    }
};
int main()
{
    Time t(0,0,0);
    t.print();
    t.nextSecond();
    t.print();
}*/
// PersonStudent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

// tao lop -- tuong ung voi viec tao kieu du lieu
class ConNguoi{
    // thuoc tinh
private:
    string ten;
    int tuoi;
    // phuong thuc/ham/hanh dong
public:
    // ham tao de khoi tao gia tri cho doi tuong
    // ham tao khong tham so
    ConNguoi() {
        tuoi = 1;
        ten = "";
    }
    // ham tao co tham so
    ConNguoi(string ten, int tuoi) {
        this->ten = ten;
        this->tuoi = tuoi;
    }
    // ham nhap du lieu
    void nhapDL();
    void hienThi();
    // ham lay thong tin ve ten
    string getTen() {
        return ten;
    }
    // ham lay thong tin ve tuoi
    int getTuoi() {
        return tuoi;
    }
};

//trien khai ham
//ham nhap du lieu
void ConNguoi::nhapDL() {
    cout << "Nhap ten: ";
    getline(cin, ten);
    cout << "Nhap tuoi: ";
    cin >> this->tuoi;
}

// ham hien thi du lieu
void ConNguoi::hienThi() {
    cout << "Ten: " << this->ten << "\ttuoi: " << tuoi;
}

// tao lop SinhVien ke thua lop ConNguoi
class SinhVien :public ConNguoi {
    // thuoc tinh
private:
    string chuyenNganh, tenTruong;
    // phuong thuc
public:

    // ham tao ko tham so
    SinhVien() :ConNguoi() {
        chuyenNganh = "";
        tenTruong = "";
    }
    // ham tao co tham so
    SinhVien(string ten, int tuoi, string chuyenNganh, string tenTruong) :ConNguoi(ten, tuoi) {
        this->chuyenNganh = chuyenNganh;
        this->tenTruong = tenTruong;
    }

    void nhapDL();// ham mang tinh overriding -- da hinh
    void hienThi();// ham mang tinh overriding -- da hinh

    // ham lay thong tin ve ten truong
    string getTenTruong() {
        return tenTruong;
    }
    // Hàm tra ve nhung đoi tuong co schoolname = “HNUE”
    friend void dsDoiTuongHNUE(vector<SinhVien> &dsSV);
    //friend void sapXepSinhVien(vector<SinhVien>& dsSV);

};

// ham nhap du lieu
void SinhVien::nhapDL() {
    ConNguoi::nhapDL();// goi ham cua lop cha
    cout << "Nhap chuyen nganh: ";
    cin.ignore();
    getline(cin, chuyenNganh);
    cout << "Nhap ten truong: ";
    getline(cin, tenTruong);
}

// ham hien thi du lieu
void SinhVien::hienThi() {
    ConNguoi::hienThi();// goi den ham hien thi cua lop cha
    cout << "\tChuyen nganh: " << chuyenNganh << "\tten truong: " << tenTruong;
}
// Hàm trả về những đối tượng có schoolname = “HNUE”
void dsDoiTuongHNUE(vector<SinhVien>& dsSV) {
    cout << "\nCac sinh vien cua truong HNUE la:\n";
    // duyet qua tat ca cac sinh vien
    for (int i = 0; i < dsSV.size(); i++) {
        //moi 1 sv can kiem tra thong tin ve truong hoc
        //neu truong la hnue ---> thi in ra ket qua
        if (dsSV.at(i).getTenTruong() == "HNUE") {
            // in thong tin cua sinh viens
            dsSV.at(i).hienThi();
            cout << endl;
        }
    }
}

// hoi doi 2 doi tuong
void hoanDoi(SinhVien &sv1, SinhVien &sv2) {
    SinhVien tg;
    tg = sv1;
    sv1 = sv2;
    sv2 = tg;
}

// sap xep sinh vien theo tuoi giam dan
void sapXepSinhVien(vector<SinhVien>& dsSV) {
    for (int i = 0; i < dsSV.size()-1; i++) {
        for (int j = i + 1; j < dsSV.size(); j++) {
            if (dsSV.at(i).getTuoi() < dsSV.at(j).getTuoi()) {
                hoanDoi(dsSV.at(i), dsSV.at(j));
            }
        }
    }
}
// ham tu do
int main()
{
    // quan ly n sinh vien
    vector<SinhVien> dsSV;
    int n;// so luong sinh vien
    cout << "Nhap so luong sinh vien can quan ly: ";
    cin >> n;
    cin.ignore();
    SinhVien tGian;// tao doi tuong
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sv thu " << i + 1 << "\n";
        tGian.nhapDL();// goi ham cua lop thi phai thong qua doi tuong
        // dua tGian vao danh sach
        dsSV.push_back(tGian);
    }

    // goi ham ban cua lop thi ko can thong qua doi tuong
    dsDoiTuongHNUE(dsSV);

    sapXepSinhVien(dsSV);

    cout << "\nThong tin cua cac sinh vien sau khi sap xep la:\n";
    for (int i = 0; i < n; i++) {
        dsSV.at(i).hienThi();
        cout << endl;
    }

    return 0;
}*/
#include<iostream>
using namespace std;
class Woman{
public:
    string fullname;
    float weight;

    void makeup(){}

    void introduce(){}

private:
    int age
};
int main()
{

}
