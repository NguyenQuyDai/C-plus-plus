#include<iostream>
#include<fstream>
using namespace std;
struct THANHPHO
{
	string ten_thanh_pho;
	int nam1,nam2;	
};
int main()
{
	THANHPHO TP[100];
	ifstream finp;
	finp.open("covid.inp");
	if(finp.fail())
	{
		cout<< "Mo file khong thanh cong!";
		return 0;
	}
	int n;
	finp>>n;
	for(int i=0;i<n;i++)
	{
		finp.ignore();
		getline(finp,TP[i].ten_thanh_pho);
		finp>>TP[i].nam1;
		finp>>TP[i].nam2;
	}
	finp.close();
	int min=99999;
	ofstream fout;
	fout.open("covid.out");
	if(fout.fail())
	{
		cout<< "Tao file khong thanh cong!";
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if((TP[i].nam2-TP[i].nam1)<min) min=TP[i].nam2-TP[i].nam1;
	}
	for(int i;i<n;i++)
	{
		if((TP[i].nam2-TP[i].nam1)==min) fout<< TP[i].ten_thanh_pho<<endl;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((TP[i].nam2-TP[i].nam1)==(TP[j].nam2-TP[j].nam1))
			fout<< TP[i].ten_thanh_pho<< " "<<TP[j].ten_thanh_pho<<endl;
		}
	}
	fout.close();
}

