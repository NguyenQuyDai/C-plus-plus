// Nguyen Thi Thuy Dung
//msv: 715105053
//stt :20
//phòng :608
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
struct THANHPHO
{
    string thanhpho;
    int nam2020,nam2021;
};
int main()
{
    ofstream fout;
    fout.open("D:\\DANSO.OUT");
    if (fout.fail()) {
        cout<<"Tao file khong thanh cong";
        return 0;
    }
    int n;
    cin>>n;
    vector<THANHPHO> danhsach;
    THANHPHO TP;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,TP.thanhpho);
        cin>>TP.nam2020;
        cin>>TP.nam2021;
        danhsach.push_back(TP);
    }
    int max = -1;
    for(int i=0;i<n;i++){
        if(abs(danhsach[i].nam2021-danhsach[i].nam2020)>max){
            max=abs(danhsach[i].nam2021-danhsach[i].nam2020);
        }
    }
    for(int i=0;i<n;i++){
        if(abs(danhsach[i].nam2021-danhsach[i].nam2020)==max){
            cout<<danhsach[i].thanhpho<<" ";
        }
    }
    for(int i = 0 ; i < n-1;i++){
        for(int j = i+1 ; j< n;j++)
        {
            if(abs(danhsach[i].nam2021-danhsach[i].nam2020)==abs(danhsach[j].nam2021-danhsach[j].nam2020)){
                fout<< danhsach[i].thanhpho<< " ";
            }
        }
    }
    return 0;
}
