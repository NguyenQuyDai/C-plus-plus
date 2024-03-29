#include <iostream>
#include <fstream>
using namespace std;
struct thongtin
{
	string TEN,QUOCGIA;
	int SL,GIA;
};
int main ()
{
	int n;
	string s="Viet Nam";
	ifstream finp;
	ofstream fout;
	thongtin sp[100];
	finp.open("mathang.inp");
	if (finp.fail())
	{
		cout << "Mo file khong thanh cong";
		return 0;
	}
	fout.open("mathang.out");
	if (finp.fail())
	{
		cout << "Tao file khong thanh cong";
		return 0;
	}
	finp >> n;
	for (int i = 0; i < n; i++)
	{
		finp.ignore();
		getline(finp, sp[i].TEN);
		getline(finp, sp[i].QUOCGIA);
		s+=sp[i].QUOCGIA;
		finp >> sp[i].SL;
		finp >> sp[i].GIA;
	}
	finp.close();
	/*for (int i = 0; i < n; i++)
	{
		cout<< sp[i].TEN<<endl;
		cout<< sp[i].QUOCGIA<<endl;
		cout<< sp[i].SL<<endl;
		cout<< sp[i].GIA<<endl;
	}*/
	int dem_doanh_thu=0;
	int xuat_xu_viet_nam=0;
	for(int i=0;i<n;i++)
    {
        if(sp[i].SL*sp[i].GIA>1000){dem_doanh_thu++;}
    }
    fout<< dem_doanh_thu<<endl;
    for(int i=0;i<n;i++)
    {
        if(sp[i].QUOCGIA=="Viet Nam") {xuat_xu_viet_nam++;}
    }
    cout<< xuat_xu_viet_nam;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sp[i].GIA<sp[j].GIA) swap(sp[i].TEN,sp[j].TEN);
        }
    }
    for(int i=0;i<n;i++)
    {
        fout<<sp[i].TEN<<endl;
    }

}
