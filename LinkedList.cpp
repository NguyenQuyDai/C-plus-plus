#include<iostream>
#include <stdlib.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
typedef struct Node node;
struct list{
    node* head;
    node* tail;
};
typedef struct list LIST;

void khoiTao(LIST &l)
{
    l.head = nullptr; // dat dia chi dau danh sach bang null
    l.tail = nullptr; // dat dia chi cuoi danh sach bang null
}
int kiemTraRong(LIST l)
{
    // neu phan tu dau danh sach null
    if(l.head == nullptr){
        // tra ve 1 la co null
        return 1;
    }
    else
        //truong hop nguoc lai tra ve khong null
        return 0;
}
// tao muc nut moi
node* taoNode(int x)
{
    node* p = new node;
    if(p == nullptr)
    {
        cout<< "Khong du bo nho";
        return nullptr;
    }
    // gan thanh phan data = x;
    p->data = x;
    // gan con tro next = null
    p->next = nullptr;
    // tra ve nut da tap
    return p;
}
// Them phan tu vao dau danh sach
void themDau(LIST &l , node*p)
{
    if(l.head == nullptr)
    {
        l.head = p;
        l.tail = p;
    }
    else
    {
        // gan con tro next cua node bang phan tu dang la dau tien cua danh sach
        p->next = l.head;
        // gan head bang node p
        l.head = p;
    }
}
void themCuoi(LIST &l , node *p)
{
    if(l.head == nullptr)
    {
        l.head = p;
        l.tail = p;
    }
    else
    {
       l.tail->next = p;
       l.tail = p;
    }
}
void chenGiua(LIST &l , node* q , node*p)
{
    // neu ton tai node q thi thuc hen chen giua
    if(q!=nullptr)
    {
        p->next = q->next;
        q->next = p;
        // neu q la phan tu cuoi cung thi chen node p vao cui
        if(q == l.tail)
        {
            l.tail = p;
        }
    }
    else {
        themDau( l , p);
    }
}
void Nhap(LIST &l, int n){
    //duyet N lan
    for(int i = 0; i < n; i++){
        //nhap du lieu la so nguyen int x
        int x;
        cout<< "Nhap so thu "<<(i+1) << " :";
        cin>>x;
        //tao node p
        node *p = new node;
        //dua du lieu vua nhap vao node p
        p = taoNode(x);
        //dua node p vao ham chen cuoi
        themCuoi(l , p);
    }
}
void Xuat(LIST l){
    //khoi tao mot node
    node *p = new node;
    //duyet tu dau danh sach den cuoi danh sach voi dieu kien p!=NULL
    for(p = l.head; p!= NULL; p=p->next){
        //hien thi du lieu cua tung node
        cout<< p->data <<endl;
    }
}
node* TimKiem(LIST l , int x)
{
    //tao node p va gan la phan tu dau tien
    node * p = l.head;
    //trong khi p!= NULL (chua la phan tu cuoi) va
    //p->data !=x (du lieu cua p khong trung voi x tim kiem)
    while(p!=nullptr&&(p->data!=x))
    {
        p = p->next;
    }
    return p;
}
void xoaDau(LIST &l)
{
    node *p = l.head;
    l.head = l.head->next;
    p->next = nullptr;
    delete p;

}
void xoaCuoi(LIST &l)
{
    // duyet cac phan tu co trong danh sach
    for(node*k =l.head ; k!=nullptr; k=k->next)
    {
        // neu duyet den phan tu cuoi danh sach
        if(k->next == l.tail)
        {
            // xoa phan tu cuoi
            delete l.tail;
            k->next = nullptr;
            l.tail = k;
        }
    }
}
void xoaBatKy(LIST &l , int data)
{
    node *p = new node;
    // neu data bang voi head->data thi xoa dau
    if(l.head->data == data)
    {
        xoaDau(l);
        return ;
    }
    // neu data bang voi head->data thi xoa dau
    if(l.tail->data == data)
    {
        xoaCuoi(l);
        return ;
    }
    // duyet qua cac phan tu co trong danh sach
    for(node*k=l.head; k!=nullptr; k=k->next)
    {
        // neu tim thay data trung voi k->data dang duyet
        if(k->data == data){
        p->next = k->next;
        // xoa di node k
        delete k;
        return ;}
        //gan node p bang node k de node p luon la node dung truoc node k
        p = k;
    }
}
int main()
{
    system("Color A");
    LIST l;
    khoiTao(l);
    //kiemTraRong(l);
    while(1)
    {
        cout << "+---------------------MENU------------------------+"<<endl;
        cout << "| 1.Nhap danh sach                                |"<<endl;
        cout << "| 2.Them phan tu vao dau danh sach                |"<<endl;
        cout << "| 3.Them phan tu vao cuoi danh sach               |"<<endl;
        cout << "| 4.Xoa phan tu dau danh sach                     |"<<endl;
        cout << "| 5.Xoa phan tu cuoi danh sach                    |"<<endl;
        cout << "| 6.Xoa phan tu tuy chon                          |"<<endl;
        cout << "| 7.In danh sach                                  |"<<endl;
        cout << "| 8.Thoat                                         |"<<endl;
        cout << "+-------------------------------------------------+"<<endl;
        cout << "Nhap vao lua chon cua ban:";
    int lc ; cin>>lc;
    if(lc==1)
    {
        int x ; cout<< "Nhap so phan tu muon them:"; cin>>x;
        Nhap(l,x);
    }
    else if(lc==2)
    {
        node * p = new node;
        int x ; cout<< "Nhap phan tu muon them:"; cin>>x;
        p = taoNode(x);

        themDau(l , p);
    }
    else if(lc==3)
    {
        node * p = new node;
        int x ; cout<< "Nhap phan tu muon them:"; cin>>x;
        p = taoNode(x);

        themCuoi(l , p);
    }
    else if(lc == 4)
    {
        xoaDau(l);
    }
    else if(lc == 5)
    {
        xoaCuoi(l);
    }
    else if(lc == 6)
    {

        cout<< "Nhap gia tri can xoa:";
        int data; cin>>data;
        xoaBatKy(l , data);
    }
    else if(lc ==7)
    {
        Xuat(l);
    }
    else
    {
        break;
    }
    }
}
