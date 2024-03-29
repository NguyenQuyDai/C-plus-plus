/*#include<iostream>
#include<fstream>
using namespace std;
struct mathang
{
	string tensp,quocgia;
	int sl,gia;	
};
int main()
{
	mathang sp[100];
	string quoc_gia="";
	ifstream finp;
	finp.open("mathang.INP");
	if(finp.fail())
	{
		cout<< "Mo file khong thanh cong";
		return 0;
	}
	int n,dem,dem_qg;
	finp>>n;
	for(int i=0;i<n;i++)
	{
		finp.ignore();
		getline(finp,sp[i].tensp);
		getline(finp,sp[i].quocgia);
		quoc_gia+=sp[i].quocgia;
		finp>>sp[i].sl;
		finp>>sp[i].gia;
	}
	for(int i=0;i<n;i++)
	{
		if(sp[i].sl*sp[i].gia>=1000) dem++;
	}
	for(int i=0;i<n;i++)
	{
		if(sp[i].quocgia=="Viet Nam") cout<<sp[i].quocgia;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(sp[i].gia<sp[j].gia) swap(sp[i].tensp,sp[j].tensp);
		}
	}
	cout<< quoc_gia;
/*	for(int i=0;i<n;i++)
	{
		cout<<sp[i].tensp<<endl;
	}
}
*/
#include<iostream>
using namespace std;
class FRACTION
{
private:
	int n,d;	
public:
	FRACTION(int , int)
	{
		this->n=n;
		this->d=d;	
	}
	FRACTION(FRACTION &i)
	{
		n=i.n;
		d=i.d;
	}
	friend istream & operator>>(istream &is, FRACTION &ps)
	{
		cout<< "Nhap vao tu so:";
		is>>ps.n;
		cout<< "Nhap vao mau so:";
		is>>ps.d;
		return is;
	}
};
int main()
{
	FRACTION ps;
	cin>>ps;
}


