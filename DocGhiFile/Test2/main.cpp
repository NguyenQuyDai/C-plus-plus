#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class NhanVien {
protected:
    string hoTen;
    double luongCoBan;

public:
    NhanVien() : hoTen(""), luongCoBan(0) {}

    NhanVien(string ten, double luong) : hoTen(ten), luongCoBan(luong) {}

    double layLuongCoBan() const {
        return luongCoBan;
    }

    virtual void nhapThongTin() {
        cout << "Nhap Ho Ten: ";
        getline(cin, hoTen);
        cout << "Nhap Luong Co Ban: ";
        cin >> luongCoBan;
        cin.ignore(); // Xóa bộ đệm đầu vào
    }
};

class QuanLy : public NhanVien {
private:
    double thuong;
    int thamNien;

public:
    QuanLy() : NhanVien(), thuong(0), thamNien(0) {}

    QuanLy(string ten, double luong, double _thuong, int _thamNien)
        : NhanVien(ten, luong), thuong(_thuong), thamNien(_thamNien) {}

    double layLuong() const {
        return luongCoBan + thuong;
    }

    void nhapThongTin() override {
        NhanVien::nhapThongTin();
        cout << "Nhap Thuong: ";
        cin >> thuong;
        cout << "Nhap Tham Nien: ";
        cin >> thamNien;
        cin.ignore(); // Xóa bộ đệm đầu vào
    }

    int layThamNien() const {
        return thamNien;
    }
};

bool soSanhTheoLuong(const QuanLy& ql1, const QuanLy& ql2) {
    return ql1.layLuong() < ql2.layLuong();
}

void hienThiQuanLys(const vector<QuanLy>& quanLys) {
    cout << "Thong Tin Quan Ly:" << endl;
    for (const QuanLy& quanLy : quanLys) {
        cout << "Ho Ten: " << quanLy.layLuongCoBan() << ", Luong Co Ban: " << quanLy.layLuongCoBan()
             << ", Thuong: " << quanLy.layLuong() - quanLy.layLuongCoBan()
             << ", Tong Luong: " << quanLy.layLuong() << ", Tham Nien: " << quanLy.layThamNien() << endl;
    }
}

void timQuanLyTheoThamNien(const vector<QuanLy>& quanLys, int thamNienCanTim) {
    bool timThay = false;
    cout << "Quan Ly co tham nien " << thamNienCanTim << ":" << endl;
    for (const QuanLy& quanLy : quanLys) {
        if (quanLy.layThamNien() == thamNienCanTim) {
            cout << "Ho Ten: " << quanLy.layLuongCoBan() << ", Luong Co Ban: " << quanLy.layLuongCoBan()
                 << ", Thuong: " << quanLy.layLuong() - quanLy.layLuongCoBan()
                 << ", Tong Luong: " << quanLy.layLuong() << ", Tham Nien: " << quanLy.layThamNien() << endl;
            timThay = true;
        }
    }
    if (!timThay) {
        cout << "Khong co quan ly nao co tham nien " << thamNienCanTim << "." << endl;
    }
}

int main() {
    int soLuong;
    cout << "Nhap so luong quan ly: ";
    cin >> soLuong;
    cin.ignore(); // Xóa bộ đệm đầu vào

    vector<QuanLy> quanLys;
    for (int i = 0; i < soLuong; ++i) {
        QuanLy quanLy;
        quanLy.nhapThongTin();
        quanLys.push_back(quanLy);
    }

    sort(quanLys.begin(), quanLys.end(), soSanhTheoLuong);

    hienThiQuanLys(quanLys);

    int thamNienCanTim;
    cout << "Nhap so nam tham nien can tim kiem: ";
    cin >> thamNienCanTim;

    timQuanLyTheoThamNien(quanLys, thamNienCanTim);

    return 0;
}
