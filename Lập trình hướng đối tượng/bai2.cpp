#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fout;
    fout.open("daysao/txt");
    if(fout.fail()){
        cout << "Khong tao file thanh cong!";
    }
}
