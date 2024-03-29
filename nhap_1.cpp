#include<iostream>
using namespace std;
int main()
{
	for(int i = 0 ; i < 10 ; i++)
	{
		cout<< "*";
		for(int j = i+1  ; j< 10 ; j++)
		{
			cout << "*";
		}
		cout<<endl;
	}
}
