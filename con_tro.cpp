/*#include<iostream>
using namespace std;
void double1(int x)
{
    x*=2;
}
void double2(int &x)
{
    x*=2;
}
void double3(int *x) // x la con tro
{
    (*x) *=2;   // toan tu giai tham chieu: derederence
}
void swap(int *x , int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
struct SinhVien
{
    string ten,diachi;
    int tuoi;
};
int main()
{
    SinhVien x;
    x.ten = "Nguyen Van A";
    x.tuoi= 18;
    x.diachi = "Ha Noi";
    SinhVien *ptr = &x;
    cout << ptr->ten<< " " << ptr->tuoi<< " "<< ptr->diachi<<endl;
    cout<< (*ptr).ten;
    //int n =1000, m =2000;
    //swap(&n,&m);
    //cout<< n<< " "<< m ;
    /*
    int x;
    cin>>x;
    cout<<x<<endl; // in gia tri bien x
    cout<<&x<<endl; // in địa chỉ bộ nhớ của biến x
    cout<< *&x<<endl; //in giá trị tại địa chỉ ô nhớ của biến x

    *&x = 20;
    cout<<x;

    int value = 10; // khởi tạo con trỏ ptr là địa chỉ biến value
    int *ptr = &value;

    cout<< &value<<endl;   // in địa chỉ biến value
    cout<< ptr << endl;    // in địa chỉ của con trỏ ptr đang giữ


    int value = 10;
	cout << &value << "\n"; // in địa chỉ biến value
	cout << value << "\n"; // in giá trị biến value

	int *ptr = &value; // ptr trỏ đến biến value
	cout << ptr << "\n"; // in địa chỉ con trỏ ptr trỏ đến, tương đương &value
	cout << *ptr << "\n"; // in giá trị tại địa chỉ mà ptr trỏ đến , tương đương value

}
*/
/* Quan he giua manh va con tro
#include<iostream>
using namespace std;
int main()
{
    long long a[5];
    printf("%d\n",a);
    for(int i=0;i<5;i++)
    {
        printf("%d ",&a[i]);

    int n=5;
    int a[n];
    //printf("%d\n",a);
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
        //cin>>*(a+i);
    }
    //for(int i=0;i<n;i++)
    //{
    //    cout<<a[i];
    //}
    int *b = a;
    for(int i=0;i<n;i++)
    {
        cout<< b[i]<< " ";
    }
}
*/
/*#include<iostream>
using namespace std;
int main()
{
    int *a = new int[1000000000];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    delete []a;
    return 0;
}*/
/* TIM MAX
#include<iostream>
#include<conio.h>
using namespace std;
int *findMax(int data[],int n)
{
    int *max = data;
    int i;
    for(i=1;i<n;i++)
    {
        if(*max<*(max+i)) *max = *(max+i);
    }
    return max;
}

int main()
{
    int n,i,*p;
    cout<< "Nhap so du lieu:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<< "Nhap gia tri thu "<< i+1 <<" :";
        cin>>a[i];
    }
    p = findMax(a,n);
    cout<< *p;
}
*/
/*#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int *ptr = new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>*(a+i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
}*/
