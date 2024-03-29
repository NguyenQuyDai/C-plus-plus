/*#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

typedef struct  Node node;
struct stack{
    node *top;
};
typedef struct stack STACK;

// Ham khoi tao Stack
void Init(STACK &s)
{
    s.top = NULL;
}

// Ham tao moi mot node
node* CreateNode(int x)
{
    node *p;
    p = new node;
    //neu p = NULL thi ko du bo nho cap phat
    if(p == NULL)
    {
        cout << "Khong du bo nho!";
        return NULL;
    }
    // gan data bang x
    p->data = x;
    // gan con tro next bang NULL
    p->next = NULL;
    // tra ve node p
    return p;
}
// Ham kiem tra rong trong stack
int isEmpty(STACK s)
{
    if(s.top == NULL)
    {
        return 1;
    }
    else {
        return 0;
    }
}
// Thao tao push trong stack
void push(STACK &s , int x)
{
    // Tao mot node moi va truyen vao du lieu x
    node *NewNode = CreateNode(x);
    // Neu node moi khoi tao thanh cong
    if(NewNode!=NULL)
    {
        // Neu ngan xep rong
        if(isEmpty(s))
        {
            // s.top = NewNode
            s.top = NewNode;
        }
        else{ // Nguoc lai them NewNode vao dinh cua Stack
            NewNode->next = s.top;
            s.top = NewNode;
        }
    }
}
int pop(STACK &s)
{
    //Tao node p
    node *p;
    // tao bien x de gan bang du lieu cua node
    int x;
    // Neu stack khong rong
    if(!isEmpty(s))
    {
        // gan node p bang phan tu top cua stack
        p = s.top;
        // Thay doi lai top cua stack
        s.top = p->next;
        // gan du lieu cua node p vao x
        x = p->data;
        // Xoa di node p vua lua
        delete p;
        // tra ve x
        return x;

    }
}
int top(STACK s)
{
    node *p;
    // Kiem tra stack co rong khong
    if(!isEmpty(s))
    {
        return p->data;
    }
}
int main()
{
    STACK s;
    for(int i = 0 ; i < 11 ; i++)
    {
        push(s,i);
    }
    cout<< top(s);
}*/
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

typedef struct  Node node;
struct stack{
    node *top;
};
typedef struct stack STACK;

// Ham khoi tao Stack
void Init(STACK &s)
{
    s.top = NULL;
}

// Ham tao moi mot node
node* CreateNode(int x)
{
    node *p;
    p = new node;
    //neu p = NULL thi ko du bo nho cap phat
    if(p == NULL)
    {
        cout << "Khong du bo nho!";
        return NULL;
    }
    // gan data bang x
    p->data = x;
    // gan con tro next bang NULL
    p->next = NULL;
    // tra ve node p
    return p;
}
// Ham kiem tra rong trong stack
int isEmpty(STACK s)
{
    if(s.top == NULL)
    {
        return 1;
    }
    else {
        return 0;
    }
}
// Thao tao push trong stack
void push(STACK &s , int x)
{
    // Tao mot node moi va truyen vao du lieu x
    node *NewNode = CreateNode(x);
    // Neu node moi khoi tao thanh cong
    if(NewNode!=NULL)
    {
        // Neu ngan xep rong
        if(isEmpty(s))
        {
            // s.top = NewNode
            s.top = NewNode;
        }
        else{ // Nguoc lai them NewNode vao dinh cua Stack
            NewNode->next = s.top;
            s.top = NewNode;
        }
    }
}
int pop(STACK &s)
{
    //Tao node p
    node *p;
    // tao bien x de gan bang du lieu cua node
    int x;
    // Neu stack khong rong
    if(!isEmpty(s))
    {
        // gan node p bang phan tu top cua stack
        p = s.top;
        // Thay doi lai top cua stack
        s.top = p->next;
        // gan du lieu cua node p vao x
        x = p->data;
        // Xoa di node p vua lua
        delete p;
        // tra ve x
        return x;

    }
}
int top(STACK s)
{
    node *p;
    // Kiem tra stack co rong khong
    if(!isEmpty(s))
    {
        return p->data;
    }
}
int main()
{
    STACK s;
    for(int i = 0 ; i < 11 ; i++)
    {
        push(s,i);
    }
    pop(s);
    cout<< top(s);
}
