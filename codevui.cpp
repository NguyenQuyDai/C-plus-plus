#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	long s = 0 ;
	int n , x;
	cin>>n>>x;
	for(int i = 1 ; i <=n;i++)
	{
		s=s+pow(-1,i)*pow(x,2*i);
	}
	cout<<s;
}
