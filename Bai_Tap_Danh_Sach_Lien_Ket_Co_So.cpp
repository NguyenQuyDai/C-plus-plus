#include <iostream>
#include <math.h>
using namespace std;
/* Tạo cấu trúc dữ liệu cho danh sách liên kết đơn */
struct Node
{
    int x;
    int i;
    Node *pNext;
};
struct SingleList
{
    Node *pHead;
    Node *pTail;
};
/* Khởi tạo cho pHead và pTail */
void Initialize(SingleList *&list)
{
    list=new SingleList;
    list->pHead=list->pTail=NULL;
}
/* Tạo Node */
Node *CreateNode(int x,int i)
{
    Node *pNode=new Node;
    if(pNode==NULL)
    {
        cout<<"Loi cap phat bo nho";
        exit(0);
    }
    pNode->i=i;
    pNode->x=x;
    pNode->pNext=NULL;
    return pNode;
}
/* insertlast */
void InsertLast(SingleList *&list,int x,int i)
{
    Node *pNode=CreateNode(x,i);
    if(list->pTail==NULL)
        list->pHead=list->pTail=pNode;
    else
    {
        list->pTail->pNext=pNode;
        list->pTail=pNode;
    }
}
/*printlist*/
void PrintList(SingleList *list)
{
    Node *pTmp=list->pHead;
    while(pTmp!=NULL)
    {
        if(pTmp->pNext!=NULL)
            cout<<pTmp->x<<"^"<<pTmp->i<<"+";
        else
            cout<<pTmp->x<<"^"<<pTmp->i;
        pTmp=pTmp->pNext;
    }
}
/* Hàm tính tổng */
double SumOfList(SingleList *list)
{
    double sum=0;
    for(Node *pTmp=list->pHead;pTmp!=NULL;pTmp=pTmp->pNext)
    {
        double value=pow(pTmp->x,pTmp->i);
        sum+=value;
    }
    return sum;
}

int main(int argc, char** argv) {
    SingleList *list;
    Initialize(list);
    int n,x;
    cout<<"Nhap n:";
    cin>>n;
    cout<<"Nhap x:";
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        InsertLast(list,x,i);
    }
    cout<<"Danh sach lien ket don: \n";
    PrintList(list);
    double sum=SumOfList(list);
    cout<<"\nTong cac phan tu trong danh sach: "<<sum;

  cout<<"\n----------------------------\n";
 // cout<<"Chương trình này được đăng tại Freetuts.net";
}
