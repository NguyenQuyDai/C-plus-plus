/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n;
   float x,s=0;
   do
   {    cout<<"n=";
       cin>>n;
       cout<<"x=";
       cin>>x;
       for(int i=1;i<=n;i++){
        s+=pow(-1,i-1)*((pow(x,i))/i);
       }
       cout<<"S("<<n<<","<<x<<")="<<(double)s;
   }
   while(n>50);
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{  int demthuong=0,demhoa=0,demso=0,demkytu=0;
    string s;
    do{cout<<"Nhap vao mat khau: "<<endl;
    getline(cin,s);
    }while(s.size()<8);
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z') demhoa++;
        else if(s[i]>='a'&&s[i]<='z') demthuong++;
        else if(s[i]>='0'&&s[i]<='9') demso++;
        else {s[i]='$';demkytu++;}
    }
      cout<<"so chu cai thuong: "<<demthuong<<endl;
      cout<<"so chu cai hoa : "<<demhoa<<endl;
      cout<<"so chu so: "<<demso<<endl;
      cout<<"So ky tu khac: "<<demkytu<<endl;
      cout<<"Mat khau sau thay $ la: "<<s;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s+=1.0/(i*(i+1));
    }
    cout<<fixed<<setprecision(2)<<s;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
bool scp(int n)
{
    int can=sqrt(n);
    if(can*can==n) return true;
    else return false;
}
int main()
{
    int n,dem=0;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++)
    {
        if(scp(a[i])==true) dem++;
    }
    cout<<dem;}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    float x,s1=0,s2=0,s3=0,s4=0;
    cout<<"n=";
    cin>>n;
    cout<<"x=";
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        s1+=pow(x,i)/(i*(i+1));
        s2+=1.0/i;
        s3+=pow(x,2*i+1);
    }
    cout<<"s1= "<<s1<<endl;
    cout<<"s2= "<<1+s2<<endl;
    cout<<"s3= "<<s3+x<<endl;
    cout<<"s4= "<<s1+2*(1+s2)+3*(x+s3)<<endl;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,z;
    cout<<"Du lieu vao:n=";
    cin>>n;
    int a[1000],b[1000];
    cout<<"Muc dinh duong:";
    for(int i=0;i<n;i++){cin>>a[i];}
    cout<<"Luong doc to:";
    for(int i=0;i<n;i++) {cin>>b[i];}
    cout<<"Cac loai nam nguoi dan co the hai ve nau an duoc la:";
    for(int i=0;i<n;i++){if(a[i]>=2*b[i]) cout<<"("<<a[i]<<","<<b[i]<<")"<<" ";}
    cout<<endl;
    cout<<"Loai nam co luong doc to cao nhat la: ";
    double max=-1;
    for(int i=0;i<n;i++){
        if(b[i]>max) {max=b[i];z=i;}
    } cout<<"("<<a[z]<<","<<b[z]<<")"<<endl;
    cout<<"Ket qua sau khi sap xep theo chieu khong giam cua muc dinh duong la: ";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){if(a[j]<a[i]) {swap(a[i],a[j]); swap(b[i],b[j]);}}
    }
    for(int i=0;i<n;i++){cout<<"("<<a[i]<<","<<b[i]<<")"<<" ";}

}*/
/*#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double x,s=0;
    cout<<"x=";
    cin>>x;
    do{     cout<<"n=";
            cin>>n;}
    while(n>10);
    for(int i=0;i<=n;i++){
        s+=(double)pow(x,2*i+1)/(2*i+1);
    } cout<<s+1;
}*/
/*#include<iostream>
using namespace std;
int snt(int n)
{
    if(n==1||n==0) return 0;
    if(n==2) return 1;
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    } return 1;
}
int main()
{
    int n,m,dem=0,x,y,demsnt=0;
    do{cin>>n>>m;}
    while(n<1||m>100);
    int a[100][100];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){cin>>a[i][j];}}
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(a[i][j]==0) dem++;
        }
    } cout<<"So luong o khong co co vat la:"<<dem<<endl;
    double max=-1;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(a[i][j]>max) {max=a[i][j];x=i;y=j;}
        }
    }
    cout<<"O co gia tri co vat lon nhat la:"<<"("<<x<<","<<y<<")"<<endl;
    cout<<"Gia tri co vat lon nhat la:"<<max<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(snt(a[i][j])) demsnt++;
        }}
    cout<<"so o gia tri co vat la so nguyen to la: "<<demsnt;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    float s=0;
    for(int i=1;i<=n;i++)
    {
        s+=pow(-1,i)*(1.0/(2*i+1));
    }
    cout<<"Pi="<<(1+s)*4;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m,dem=0;
    cout<<"n=";cin>>n;cout<<"m=";cin>>m;
    int a[100][100];
    cout<<"Ma tran gia tri:"<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){cin>>a[i][j];}}
    double max=-1;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(a[i][j]>max) { max=a[i][j];}
        }
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            if(a[i][j]==max) { dem++;}
        }
    }
    cout<<"Gia tri kinh te lon nhat la:"<<max<<endl;
    cout<<"So luong cay co gia tri kinh te lon nhat:"<<dem;
}*/
/*#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int i, x = 0;
for ( i = 1; i < 10; i*=2 )
{
x++;
cout << setw( 4 ) << x;
}
}*/
/*#include <iostream>
using namespace std;
int main()
{
	
	for(int i =65 ; i <=90 ; i ++)
	{
		cout<<"\""<<(char) i <<"\""<<",";
	}
}*/
#include<iostream>
using namespace std;
int main()
{
	int n ; 
	cin>>n;
	for(int i = 1 ; i<=n ; i ++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
}
