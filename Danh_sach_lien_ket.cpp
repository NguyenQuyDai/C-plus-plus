#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
typedef struct Node *node;
bool empty(node a)
{
    return a == nullptr;
}
int Size(node a)
{
    int cnt = 0;
    while(a!=NULL){
        ++cnt;
        a=a->next; // gan dia chi cua not tiep theo cho node hien tai
        // Cho node hien tai nhat sang not tiep theo
    }
    return cnt;
}
node createNode(int x)
{
    node p = new Node();
    p->data = x;
    p->next = nullptr;
    return p;
}
// them vao dau danh sach lien ket
void addHead(node &a , int x)
{
    node p = createNode(x);
    if(a == nullptr)
    {
        a = p;
    }
    else
    {
        p->next = a;
        a = p;
    }
}
void addTail(node &a , int x)
{
    node p = createNode(x);
    if(a == nullptr)
    {
        a = p;
    }
    else{
        node tmp = a;
        while(tmp->next!=nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = p;
    }
}
void addMiddle(node &a , int x , int pos)
{
    int n = Size(a);
    if(pos< 0 || pos > n +1)
    {
        cout << "Vi tri khong hop le";
    }
    if (n==1){
        addHead(a , x);
    }
    else if (n == pos+1)
    {
        addTail(a , x);
    }
    node p = a;
        for(int i = 0 ; i < pos-1 ; i++)
        {
            p = p->next;
        }
        node tmp = createNode(x);
        tmp->next = p->next;
        p->next = tmp;

}
void in(node a)
{
    while(a!=nullptr)
    {
        cout << a->data << " ";
        a = a->next;
    }
}

int main()
{
    node a = nullptr;
    for(int i = 0 ; i < 4 ; i++)
    {
        int x ;
        cin>>x ;
        addHead(a  , x);
    }
    for(int i = 0 ; i < 4 ; i++)
    {
        int b ;
        cin>>b ;
        addTail(a  , b);
    }
    cout<< "Nhap gia tri muon them va vi tri muon them :";
    int x , pos;
    cin>>x >>pos;
    addMiddle(a , x , pos);
    in(a);
}
