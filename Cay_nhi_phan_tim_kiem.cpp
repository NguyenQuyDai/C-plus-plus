/*#include<iostream>
#include<queue>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
typedef struct Node* Tree;
Tree root;
// Ham khoi tao cay nhi phan
void Init(Tree &root)
{
    root = NULL;
}

// Ham tao mot node moi trong cay nhi phan
Node* CreateNode(int x)
{
    // Tao Node moi
    Node* p = new Node;
    // neu node p duoc cap phat bo nho
    if(p!=NULL)
    {
        p->left = NULL;
        p->right = NULL;
        p->data = x;
    }
    return p;
}
int InsertNode(Tree &root , Node*p)
{
    // Neu node root khac rong thi thuc hien them vao cay
    if(root!=NULL){
        // neu 2 data cua node bang nhau thi ket thuc
        if(root->data == p->data){
            return 0;
        }
        if(root->data>p->data)
        {
            return InsertNode(root->left , p);
        }
        else {
            return InsertNode(root->right,p);
        }
    }
    else{
        root =p;
    }
}
void NLR(Tree root)
{
    if(root!=NULL)
    {
        cout<<root->data<< " ";
        NLR(root->left);
        NLR(root->right);
    }
}
void LNR(Tree root)
{
    if(root!=NULL)
    {
        LNR(root->left);
        cout<<root->data<< " ";
        LNR(root->right);
    }
}
void LRN(Tree root)
{
    if(root!=NULL)
    {
        LRN(root->left);
        LRN(root->right);
        cout<< root->data << " ";
    }
}
Node* TimKiem(Tree root , int x)
{
    if(root!=NULL)
    {
        // neu data cua node goc bang x can tim
        if(root->data == x)
        {
            // tra ve node goc cua cay
            return root;
        }
        // neu data cua node goc lon hon x can tim
        if(root->data>x)
        {
            return TimKiem(root->left , x);
        }
        else{
            // nguoc lai data cua node goc nho hon x can tim
            //goi lai ham tim kiem theo cay con phai
            return TimKiem(root->right,x);
        }
        // neu khong tim thay node co data bang x thi tra ve rong
        return NULL;

    }
}
int timMax(Tree root)
{
    if(root->right==NULL)
    {
        return root->data;
    }
    return timMax(root->right);
}
void NutCuoi(Tree &root)
{
    if(root!=NULL)
    {
        queue<Tree> a;
        //stack<Tree> b;
        a.push(root);
        while(!a.empty())
        {
            Node *p = a.front();
            cout<<p->data<< " ";
            a.pop();
            if(p->left!=NULL)
            {
                a.push(p->left);
            }
            if(p->right!=NULL)
            {
                a.push(p->right);
            }
        }
    }
}

int main()
{
    Tree root;
    Init(root);
    int n;
    cout<< "Nhap so luong nut can them:";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int x ;
        cout << "Nhap data cua node thu "<<(i+1)<< ":";
        cin>>x;
        Node* p =CreateNode(x);
        InsertNode(root,p);
    }
    NLR(root);
    cout<<endl;
    LNR(root);
    cout<<endl;
    LRN(root);
    cout<< "\n Nhap node can tim kiem:";
    int x ; cin>>x;
    Node *ap =TimKiem(root,x);
    if(ap== NULL)
    {
        cout<< "Khong tim thay node";
    }
    else
    {
        cout << "Tim thay phan tu theo pp de quy";
    }
    cout<<timMax(root);
    NutCuoi(root);

}*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
typedef struct Node* Tree;
Tree root;
// Ham khoi tao cay nhi phan
void Init(Tree &root)
{
    root = NULL;
}

// Ham tao mot node moi trong cay nhi phan
Node* CreateNode(int x)
{
    // Tao Node moi
    Node* p = new Node;
    // neu node p duoc cap phat bo nho
    if(p!=NULL)
    {
        p->left = NULL;
        p->right = NULL;
        p->data = x;
    }
    return p;
}
int nhap(Tree &root ,Node* p )
{
    if(root!=nullptr)
    {
        if(root->data == p->data) return 0;
        if(root->data> p->data) return nhap(root->left , p);
        else {
            return nhap(root->right , p);
        }
    }
    else {
        root = p;
    }
}
void NLR(Tree root)
{
    if(root!=nullptr)
    {
        cout<<root->data<< " ";
        NLR(root->left);
        NLR(root->right);
    }
}
void LNR(Tree root)
{
    if(root!=nullptr)
    {
        LNR(root->left);
        cout<< root->data;
        LNR(root->right);
    }
}
void LRN(Tree root)
{
    if(root!=nullptr)
    {
        LRN(root->left);
        LRN(root->right);
        cout<< root->data;
    }
}
int sum(Tree root)
{
    if(root == nullptr) return 0;
    else
        return sum(root->left) +sum(root->right)+root->data;
}
int sumLa(Tree root)
{
    if(root== nullptr) {return 0;}
    if(root->left == nullptr && root->right == nullptr) {return 1;}
    else{
       return  sum(root->left)+sum(root->right);
    }
}
// xac dinh chieu sau
int maxDepth(Tree root)
{
    if(!root) return -1;
    else
        return max(maxDepth(root->left), maxDepth(root->right))+1;
}
int timMax(Tree root)
{
    if(root->right == nullptr)
    {
        return root->data;
    }
    return timMax(root->right);
}
Node * TimKiem(Tree root, int x)
{
    if(root->data == x) return root;
    else if(root->data >x) return TimKiem(root->left , x);
    else return TimKiem(root->right , x);

    return nullptr;
}
int main()
{
    Tree root;
    Init(root);
    int n;
    cout << "Nhap so nut can tao:";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cout << "Nhap nut :";
        cin>>x;
        Node* p = CreateNode(x);
        nhap(root , p);
    }
    NLR(root);
    cout <<endl;
    cout << "Tong cac nut cua cay la:"<<sum(root)<<endl;
    cout << "Tong cac nut la la:"<<sumLa(root)<<endl;
    cout << "Chieu cao cua cay la:"<<maxDepth(root)<<endl;
    cout<< "Gia tri lon nhat cua cay la:"<<timMax(root)<<endl;

    int x ;
    cout << "Nhap gia tri can tim kiem:";
    cin>>x;
    Node *p =TimKiem(root , x);
    if(p!=nullptr)
    {
        cout << "co gia tri can tim!";
    }
    else
    {
        cout << "Khong tim thay!";
    }
}

