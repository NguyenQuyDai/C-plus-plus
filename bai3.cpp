// Nguyen Thi Thuy Dung
//msv: 715105053
//stt :20
//phòng :608
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream finp;
    finp.open("D:\\NEWS.INP");
    if (finp.fail()) {
        cout<<"Khong mo file thanh cong";
        return 0;
    }
    string s,chuoi;
    int so=0, chu = 0 , dacbiet;
    while(getline(finp,s)){
         chuoi+=s;
    }
    for(int i = 0 ; i< chuoi.size();i++){
        if(chuoi[i]>='0'&&chuoi[i]<='9') so++;
        else if(chuoi[i]>='a'&&chuoi[i]<='z')  chu++;
        else{
            dacbiet++;
        }
    }
    cout<<chu <<so<< dacbiet;
    ofstream fout;
    fout.open("D:\\NEWS.OUT");
    if (fout.fail()) {
        cout<<"Tao file khong thanh cong";
        return 0;
    }
    fout<<chu<<" "<<so<<" " <<" "<<dacbiet;
}
