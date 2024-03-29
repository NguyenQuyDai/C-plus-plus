#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int demso=0,demchu=0,demkhac;
    string s;
    ifstream finp;
    finp.open("NEWS.INP");
    if(finp.fail())
    {
        cout<<"Mo file khong thanh cong";
        return 0;
    }
    ofstream fout;
    fout.open("NEWS.OUT");
    if(fout.fail())
    {
        cout<<"Tao file khong thanh cong";
        return 0;
    }
    while(!finp.eof())
    {
        finp>>s;
        fflush(stdin);
        for(int i=0;i<s.length();i++)
        {
        if(s[i]>='0'&&s[i]<='9') demso++;
        else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') demchu++;
        else demkhac++;
        }

    }
    cout<<demchu<<" "<<demso<<" "<<demkhac;
}

