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

