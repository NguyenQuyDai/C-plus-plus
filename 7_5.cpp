#include <iostream>
#include <fstream>
using namespace std;
struct thongtin
{
	string TEN;
	int NXB, SL, GIA;
};
void docfile (thongtin sach[], int &n, ifstream &finp)
{
	finp.open("BOOK.INP.txt");
	if (finp.fail())
	{
		cout << "Mo file khong thanh cong";
	}
	finp >> n;
	for (int i = 0; i < n; i++)
	{
		finp.ignore();
		getline(finp, sach[i].TEN);
		finp >> sach[i].NXB;
		finp >> sach[i].SL;
		finp >> sach[i].GIA;
	}
	finp.close();
}
int doanhthu (int a, int b)
{
	return a * b;
}
void ghifile (thongtin sach[], int n, ofstream &fout)
{
	fout.open("BOOK.OUT.txt");
	if (fout.fail())
	{
		cout << "Mo file khong thanh cong";
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (doanhthu(sach[i].SL, sach[i].GIA) >= 1000)
		{
			count++;
		}
	}
	fout << count << endl;
	if (count > 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (doanhthu(sach[i].SL, sach[i].GIA) >= 1000)
			{
				fout << sach[i].TEN << endl;
			}
		}
	}
	fout.close();
}
int main ()
{
	int n;
	ifstream finp;
	ofstream fout;
	thongtin sach[100];
	docfile(sach, n, finp);
	ghifile(sach, n, fout);
}
