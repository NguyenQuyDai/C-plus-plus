/*#include<iostream>
using namespace std;
int pow(int x , int n)
{
	if(n==0)
		return 1;
	if(n>0)
		return x*pow(x,n-1);
}

int main()
{
	int x , n;
	cin>>x>>n;
	cout<<pow(x,n);
}*/
#include<iostream>
#include<stdlib.h>
#define MAX 100

using namespace std;

int n, dem;
int x[MAX];
bool a[MAX], b[MAX], c[MAX];

void attempt(int);
void printresult();

int main()
{
    cout << "Hay nhap vao so quan Hau: ";
    cin >> n;
   
    //khoi tao bien dem va mang danh dau
    dem = 0;
    for (int i = 0; i < n; i++)
        a[i] = true;
    for (int i = 0; i < n*2; i++)
        b[i] = true;
    for (int i = -n; i < n-1; i++)
        c[i + n] = true;
   
    attempt(0);
   
    system("PAUSE");
    return 0;
}

void attempt(int j)
{
     for (int i = 0; i < n; i++)
     {
         if (a[i] && b[i+j] && c[i-j+n])
         {
                  x[j] = i;
                  a[i] = false;
                  b[i+j] = false;
                  c[i-j+n] = false;
                 
                  if (j < n-1) attempt(j+1);
                  else {
                          printresult();  
                          return ;
                       }
                       
                  a[i] = true;
                  b[i+j] = true;
                  c[i-j+n] = true;
         }
     }
}

void printresult()
{
     for (int i = 0; i<n-1; i++)
     {
        cout << x[i] << " , ";
     }
    cout << x[n-1];
     cout << endl;
}
