// tim kiem nhi phan
/*#include<iostream>
using namespace std;
bool binarySearch(int a[] , int n , int x)
{
    int low  = 0 ;
    int high = n-1;
    int mid;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x)
            return true;
        else if(a[mid]>x)
            high = mid-1;
        else
            low =  mid+1;
    }
    return false;
}
void nhap(int a[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    nhap(a , n);
    cout << "Nhap phan tu can tim kiem:";
    cin>>x;
    int result = binarySearch(a , n , x);
    if(result == 1)
    {
        cout << "Tim thay x!";
    }
    else
        cout << "Khong tim thay x!";
}*/
/*#include<iostream>
using namespace std;
void nhap(int a[] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
int timkiem(int a[] , int n  , int x)
{

    for(int i = 0 ; i < n ; i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;
}
int main()
{
    cout << "Nhap so phan tu:";
    int n ;
    cin>>n ;
    int a[n];
    nhap(a , n);
    cout << "Nhap so can tim:";
    int x ; cin>>x;
    cout << timkiem(a , n , x);
}*/
/*
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
typedef struct Node * Tree;
Tree root;
void init(Tree &root)
{
    root = nullptr;
}
// ham khoi tao node trong cai nhi phan
Node* CreateNode(int x)
{
    // Tao node moi
    Node *p = new Node;
    if(p!=nullptr)
    {
        p->data = x ;
        p->left = nullptr;
        p->right = nullptr;
    }
    return p;
}
// them node vao cay nhi phan
int insertNode(Tree &root , Node* p)
{
    if(root!= nullptr)
    {
        // neu node moi bang node root ket thuc
        if(root->data == p->data)
            return 0;
        if(root->data > p->data)
            return insertNode(root->left , p);
        else
            return insertNode(root->right , p);
    }
    else{
        root = p ;
    }
}

Node* TimKiem(Tree root , int x)
{
    if(root!= nullptr)
    {
        // neu data cua root bang x can tim
        if(root->data == x)
            return root;
        if(root->data > x)
            return TimKiem(root->left , x);
        else
            return TimKiem(root->right ,x);
    }
    else
        return nullptr;
}
int khoaNhoNhat(Tree root)
{
    if(root->left == nullptr)
    {
        return root->data;
    }
    else
    {
        return khoaNhoNhat(root->left);
    }
}
int khoaLonNhat(Tree root)
{
    if(root->right==nullptr)
    {
       return root->data;
    }
    else
    {
        return khoaLonNhat(root->right);
    }
}
void DeleteNode(Tree &root , int X)
{
    // neu cay rong thi ket thuc ham xoa
    if(root == nullptr)
    {
        return ;
    }
    // neu khoa X nho hon data cua node dang xet
    if(root->data > X)
    {
        //de quy ham xoa theo nhanh trai
        return DeleteNode(root->left , X);
    }
    // neu khoa X lon hon data cua node dang xet
    if(root->data < X)
    {
        //de quy ham xoa theo nhanh phai
        return DeleteNode(root->right , X);
    }
    // tao node p lam node the mang
    Node* p = root;
    // neu cay con trai la rong
    if(root->left == nullptr)
    {
        // gan lai node goc theo nhanh phai
        root = root->right;
    }
    else if(root->right == nullptr)
    {
        // gan lai node goc theo nhanh trai
        root = root->left;
    }
    else
    {
        // nguoc lai , neu cay co du 2 con
        // su dung node the mang
        FindReplNode(p , root->right);
    }
    // xoa di node p
    delete p;
}
void FindReplNode(Tree &p , Tree &q)
{
    if(q->left)
    {
        FindReplNode(p , q->left);
    }
    else {
        p->data = q->data;
        p = q;
        q = q->right;
    }
}
int main()
{
    Tree root;
    init(root);
    int n ;
    cin>>n ;
    for(int i = 0 ; i < n ; i ++)
    {
        cout << "Nhap nut can them:";
        int x ; cin>>x;
        Node *p = CreateNode(x);
        insertNode(root , p);
    }
    int a;
    cout << "Nhap gia tri can tim kiem:"; cin>>a;
    Node* p = TimKiem(root, a);
    if(p!= nullptr)
    {
        cout << "Tim thay gia tri can tim!";
    }
    else
    {
        cout << "Khong tim thay gia tri can tim!";
    }
    cout << "Khoa nho nhat la:" << khoaNhoNhat(root);
}*/
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
typedef struct Node *Tree;
Tree root;

void Init(Tree &root)
{
    root = nullptr;
}
Node *createNode(int x)
{
    Node *p = new Node;
    if(p != nullptr)
    {
        p->data = x;
        p->left = nullptr;
        p->right = nullptr;
    }
    return p;
}
int ThemNode(Tree &root , Node *p)
{
    if(root!= nullptr)
    {
        if(root->data == p ->data)
            return 0;
        if(root -> data > p->data)
            return ThemNode(root-> left , p);
        if (root -> data < p->data)
            return ThemNode(root-> right , p);
    }
    else
    {
        root = p;
    }
}
void NLR(Tree root)
{
    if(root!=nullptr)
    {
        cout << root ->data << " ";
        NLR(root->left);
        NLR(root->right);
    }
}
int main()
{
    Tree root;
    Init(root);
    for(int i = 0 ; i < 5 ; i ++)
    {
        int x;
        cin>>x;
        Node *p = createNode(x);
        ThemNode(root , p);
    }
    NLR(root);
}
