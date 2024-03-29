#include<iostream>
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


int main()
{
    Tree root;
    Init(root);
}
