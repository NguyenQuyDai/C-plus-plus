#include<iostream>
#include<fstream>
using namespace std;
struct thongtin{
    string tenThanhPho;
    double diemTBHocBa,diemTBTHPT;
};
int main()
{
    int n;
    ifstream finp;
    ofstream fout;
    finp.open("diemthi.txt");
    if(finp.fail()){
        cout<< "Mo file khong thanh cong!";
    }
    fout.open("diemthi.out");
	if (fout.fail())
	{
		cout << "Tao file khong thanh cong";
		return 0;
	}
    finp>>n;
    thongtin diem[100];
    for(int i = 0 ; i< n ; i++){
        finp.ignore();
        getline(finp,diem[i].tenThanhPho);
        finp>>diem[i].diemTBHocBa;
        finp>>diem[i].diemTBTHPT;
    }
    finp.close();

    for(int i = 0 ; i<n-1;i++){
        for(int j = i+1 ; j<n;j++){
            if(abs(diem[i].diemTBHocBa-diem[i].diemTBTHPT)<abs(diem[j].diemTBHocBa-diem[j].diemTBTHPT)){
                swap(diem[i],diem[j]);
            }
        }
    }
     for (int i = 0; i < 3; ++i) {
        fout << diem[i].tenThanhPho << ": "
             << abs(diem[i].diemTBHocBa - diem[i].diemTBTHPT) << endl;
    }
    for(int i = 0 ; i<n-1;i++){
        for(int j = i+1 ; j<n;j++){
            if(abs(diem[i].diemTBHocBa-diem[i].diemTBTHPT)>abs(diem[j].diemTBHocBa-diem[j].diemTBTHPT)){
                swap(diem[i],diem[j]);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        fout << diem[i].tenThanhPho <<endl;
    }
}
