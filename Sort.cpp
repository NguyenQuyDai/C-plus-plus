/*
// sap xep noi bot
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n ;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cout<< "a["<<i << "]=";
        cin>>a[i];
    }
    for(int i = 0 ; i< n-1 ; i++)
    {
        for(int j = i+1 ; j<n;j++)
        {
            if(a[i]>a[j])
            {
                int tmp = a[i];
                a[i]= a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i = 0 ; i < n ;i++)
    {
        cout <<a[i]<< " ";
    }
}
*/
/*
// sap xep lua chon
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n ;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cout<< "a["<<i << "]=";
        cin>>a[i];
    }
    for(int i = 0 ; i < n-1;i++)
    {
        int min = i;
        for(int j = i+1 ; j< n; j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
        if(min != i)
        {
            int tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
        }
    }
    for(int i = 0 ; i < n ;i++)
    {
        cout <<a[i]<< " ";
    }
}*/
// sap xep chen (insertion sort)
/*
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n ;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cout<< "a["<<i << "]=";
        cin>>a[i];
    }
    for(int i = 1 ; i < n ; i++)
    {
        int value = a[i];
        int pos = i;
        while( pos > 0 && value < a[pos-1])
        {
            // dich chuyen cac phan tu sang phai mot vi tri trong khi
            // tim kiem vi tri cho value
            a[pos] = a[pos-1];
            pos -= 1;
            a[pos] = value;
        }
    }
    for(int i = 0 ; i < n ;i++)
    {
        cout <<a[i]<< " ";
    }
}*/
/*
// sap xep tron
#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;
// Chúng ta cần có hai mảng con vì vậy cần tạo hai mảng con arr[l...m] và arr[m+1..r]. Sau đó gộp chúng lại
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];//tạo 2 mảng tạm thời để chứa các phần tử sau khi chia

    // Copy dữ liệu sang các mảng tạm
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    // khởi tạo các giá trị ban đầu
    i = 0;
    j = 0;
    k = l;

    //gộp hai mảng tạm thời vào mảng arr
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy các phần tử còn lại của mảng L vào arr nếu có
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy các phần tử còn lại của mảng R vào arr nếu có
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// l là chỉ số trái và r là chỉ số phải của mảng cần được sắp xếp
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        // Gọi hàm đệ quy tiếp tục chia đôi từng nửa mảng
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

// Hàm xuất mảng
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << arr[i];
        cout<<"\t";
      }
}

int main()
{
    int n;
    cin >>n ;
    int a[n];

    for(int i = 0;i < n;i++){
        cout<<"a["<<i<<"]=";
       cin >> a[i];
    };
    mergeSort(a, 0, n - 1);

    cout<<"\nMang sau khi duoc sap xep: \n";
    printArray(a, n);
}
*/
// sap xep nhanh (Quick sort)
#include<iostream>
using namespace std;
int Partition(int a[] , int l  , int r)
{
    int pivot = a[r]; // pivot
    int  i = l-1;
    for(int j = l ; j < r ; j++)
    {
        if(a[j] <=pivot)
        {
            ++i;
            swap(a[i],a[j]);
        }
    }
    // dua chot ve giua
    ++i;
    swap(a[i],a[r]);
    return i;
}

void quicksort(int a[] , int l , int r)
{
    if(l>=r) return ;
    int p = Partition(a , l ,r);
    quicksort(a , l , p-1);
    quicksort(a , p+1 , r);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n ; i++)
    {
        cout << "a["<<i<< "]=";
        cin>>a[i];
    }
    quicksort(a , 0 , n-1);
    for(int i = 0; i < n ; i++)
    {
        cout<< a[i]<< " ";
    }
}
