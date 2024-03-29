#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
typedef struct node Node;

struct queue{
    Node *front;
    Node *rear;
};
typedef struct queue QUEUE;

void Init(QUEUE &q)
{
    // gan front va rear ve nullptr
    q.front = nullptr;
    q.rear  = nullptr;
}
Node* createNode(int x)
{
    Node *p = new Node;
    if(p == nullptr)
    {
        cout << "Khong du bo nho!";
        return nullptr;
    }
    // gan data bang x
    p->data =x;
    // gan con tro next bang nullptr
    p->next = nullptr;
    return p;
}
// ham ktra rong
int isEmpty(QUEUE q)
{
    // neu front bang null thi queue rong
    if(q.front == nullptr)
    {
        return 1;
    }
    // nguoc lai tra ve 0
    return 0;
}
void Add(QUEUE &q , Node *NewNode)
{
    // neu hang doi rong thi them node moi vao ca dau va cuoi hang doi
    if(q.front == nullptr)
    {
        q.front = NewNode;
        q.rear  = NewNode;
    }
    else {
        // Nguoc lai them cuoi hang doi
        // dat con tro next cua phan tu cuoi ve NewNode
        q.rear ->next = NewNode;
        // gan lai phan tu cuoi cua danh sach
        q.rear = NewNode;
    }
}
int Remove(QUEUE &q)
{
    int x;
    Node *p = nullptr;
    // neu queue khong rong thuc hien lay phan tu dau tien
    if(!isEmpty(q))
    {
        // gan node p bang phan tu dau tien cua queue
        p = q.front;
        x = p->data;
        // xoa di node dau tien cua queue
        q.front = q.front->next;
        // neu front bang nullptr thi gan luon rear bang nullptr
        if(q.front == nullptr)
        {
            q.rear = nullptr;
        }
    }
    return x;
}
int main()
{
    QUEUE q;
    Init(q);
    int n;
    cout << "Nhap n :" ;
    cin>>n;
    for(int i = 0 ; i < n ;i ++)
    {
        int x;
        cout << "Nhap phan tu muon them:";
        cin>>x;
        Node *p =createNode(x);
        Add(q,p);
    }
    for(Node *p = q.front ;p!= nullptr ; p=p->next)
    {
        cout << p->data << " ";
    }
}
