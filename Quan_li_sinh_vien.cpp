#include<iostream>
#include <stdlib.h>
using namespace std;
struct SinhVien{
    int maSV;
    string ten , lop,hanhKiem;
    float diemTK;
};
typedef struct SinhVien SV;
struct Node{
    SV data;
    Node* next;
};
typedef struct Node node;
struct list{
    node* head ;
    node* tail;
};
typedef struct list LIST;
void khoiTao(LIST &ds)
{
    ds.head = nullptr;
    ds.tail = nullptr;
}
int kiemTraRong(LIST &ds)
{
    if(ds.head == nullptr)
    {
        return 1;
    }
    return 0;
}
Node* taoNode(SV x)
{
    node* p = new node;
    if(p==nullptr)
    {
        cout << "Khong du bo nho!";
        return nullptr;
    }
    p->data = x;
    p->next = nullptr;
    return p;
}
void themCuoi(LIST &ds,node *p)
{
    if(ds.head== nullptr)
    {
        ds.head = p;
        ds.tail = p;
    }
    else
    {
        ds.tail->next =p;
        ds.tail = p;
    }
}
void nhap(LIST &ds , int n)
{
    cout<< "--------------------------------------\n";
    cout << "Nhap thong tin sinh vien:"<<endl;
    for(int i =0 ;i< n ;i++)
    {
        SV x;
        cout << "Nhap vao ma sinh vien:" ;
        fflush(stdin);
        cin>> x.maSV;
        cout<< "Nhap ho ten sinh vien:";
        fflush(stdin);
        getline(cin , x.ten);
        cout<< "Nhap vao lop cua sinh vien:";
        fflush(stdin);
        getline(cin,x.lop);
        cout<< "Nhap vao diem tong ket cua sinh vien:";
        cin>> x.diemTK;
        cout<< "Nhap vao hanh kiem cua sinh vien:";
        fflush(stdin);
        getline(cin , x.hanhKiem);
        node*p = new node;
        p = taoNode(x);
        themCuoi(ds,p);
    }
}
void timKiem(LIST ds)
{
    node *p = ds.head;
    for(p ; p!=nullptr ; p=p->next)
    {
        if(p->data.lop=="E1")
        {
            cout<< p->data.maSV << "-"<<p->data.ten<< "-"<<p->data.lop<< "-"<<p->data.diemTK<< "-"<<p->data.hanhKiem<<endl;
        }
    }
}
void duyet(LIST ds)
{
    node *p = ds.head;
    for(p ; p!=nullptr;p=p->next)
    {
        cout<< p->data.maSV << "-"<<p->data.ten<< "-"<<p->data.lop<< "-"<<p->data.diemTK<< "-"<<p->data.hanhKiem<<endl;
    }
}
void sapxep(LIST &ds)
{
    node *p , *q;
    for(p=ds.head;p!=nullptr ;p=p->next)
    {
        for(q=p->next;q!=nullptr;q=q->next)
        {
            if(p->data.maSV>q->data.maSV)
            {
                SV x = p->data;
                p->data = q->data;
                q->data = x;
            }
        }
    }
}
void xoaCuoi(LIST &ds)
{
    node *k = ds.head;
    for(k; k!=nullptr ; k= k->next)
    {
        if(k->next==ds.tail)
        {
            delete ds.tail;
            k->next = nullptr;
            ds.tail = k;
        }
    }
    duyet(ds);
}
int main()
{
    LIST ds;
    khoiTao(ds);
    system("Color B");
    //kiemTraRong(l);
    while(1)
    {
        cout << "+---------------------MENU------------------------+"<<endl;
        cout << "| 1.Nhap danh sach                                |"<<endl;
        cout << "| 2.Hien thi danh sach da nhap                    |"<<endl;
        cout << "| 3.Liet ke sinh vien lop E1                      |"<<endl;
        cout << "| 4.Sap xep theo ma sinh vien tang dan            |"<<endl;
        cout << "| 5.Xoa phan tu cuoi danh sach                    |"<<endl;
        cout << "| 6.Thoat                                         |"<<endl;
        cout << "+-------------------------------------------------+"<<endl;
        cout << "Nhap vao lua chon cua ban:";
        int lc ; cin>>lc;
        if(lc==1)
        {
            cout << "Nhap so luong sinh vien can nhap:";
            int n; cin>>n;
            nhap(ds ,n );
        }
        else if(lc==2)
        {
            duyet(ds);
        }
        else if(lc==3)
        {
            timKiem(ds);
        }
        else if(lc == 4)
        {
            sapxep(ds);
        }
        else if(lc == 5)
        {
            xoaCuoi(ds);
        }
        else
        {
            break;
        }
        }
}
