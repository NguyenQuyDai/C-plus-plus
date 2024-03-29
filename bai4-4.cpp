#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    ifstream finp;
    finp.open("dayso.txt");
    if(finp.fail()){
        cout<<"Khong mo file thanh cong !";
        return 0;
    }
    int dem=0;
    while(!finp.eof())
    {
        finp>>n;
        if(n%2==0) dem++;
        if(finp.eof()) {break;}
    }
    cout<<"So luong so chan co trong file da cho la:"<<dem;
}
