/*#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;
//Cap phat dong mot node moi voi du lieu la so nguyen x
node makeNode(int x)
{
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

// Kiem tra rong
bool empty(node a)
{
    return a == NULL;
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

// them mot phan tu vao dau danh sach lien ket
void insertFirst(node &a ,int x){
    node tmp = makeNode(x);
    if(a == NULL )
    {
        a = tmp;
    }
    else{
        tmp ->next = a;
        a = tmp;
    }
}

// Them mot phan tu vao cuoi danh sach lien ket
void insertlast(node &a , int x){
    node tmp = makeNode(x);
    if(a == NULL)
    {
        a = tmp;
    }
    else {
        node p =a;
        while(p->next !=NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}

// Them 1 phan vao giua
void insertMiddle(node &a , int x , int pos){
    int n = Size(a);
    if(pos<=0||pos>pos+1) {
        cout<< "Vi tri khong hop le";
    }
    if(n==1){
        insertFirst(a,x); return;
    }
    else if(n==pos+1)
    {
        insertlast(a,x); return ;
    }
    node p = a;
    for(int i=1;i<pos-1;i++)
    {
        p=p->next;
    }
    node tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
}
// Xoa phan tu o dau
void deleteFirst(node &a)
{
    if(a==NULL) return;
    a = a->next;
}
// Xoa phan tu o cuoi
void deletelast(node &a)
{
    if(a==NULL) return;
    node truoc =NULL , sau = a;
    while(sau->next!=NULL)
    {
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL){
        a = NULL;
    }
    else {
        truoc->next = NULL;
    }
}

// Xoa o giua;
void deleteMiddle(node &a,int pos)
{
    if(pos<=0||pos>Size(a)) return ;
    node truoc = NULL , sau = a;
    for(int i=1;i<pos;i++)
    {
        truoc = sau;
        sau = sau->next;
    }
    if(truoc ==NULL){
        a = a->next;
    }
    else {
        truoc->next = sau->next;
    }
}
void in(node a)
{
    cout<< "-------------------------------------\n";
    while(a!=NULL){
        cout << a->data<< " ";
        a = a->next;
    }
    cout<<endl;
    cout<< "-------------------------------------\n";
}
void sapxep(node &a)
{
    for(node p = a ; p->next != NULL ; p = p->next)
    {
        node min  = p;
        for(node q= p->next;q!=NULL;q = q->next)
        {
            if(q->data<min->data)
            {
                min = q;
            }
        }
        int tmp = min->data;
        min->data = p->data;
        p->data = tmp;
    }
}
int main()
{
    node head = NULL;
    while(1)
    {
        cout<< "----------------MENU---------------------\n";
        cout<< "1. Chen phan tu vao dau \n";
        cout<< "2. Chen phan tu vao cuoi\n";
        cout<< "3. Chen phan tu vao giua\n";
        cout<< "4. Xoa phan tu o dau\n";
        cout<< "5. Xoa phan tu o cuoi\n";
        cout<< "6. Xoa phan tu o giua\n";
        cout<< "7. Duyet danh sach lien ket\n";
        cout<< "8. Sap xep phan tu\n";
        cout<< "0. Thoat!\n";
        cout<< "-------------------------------------\n";
        cout<< "Nhap lua chon:";
        int lc ; cin>>lc;
        if(lc == 1){
            int x ; cout<< "Nhap gia tri can chen:"; cin>>x;
            insertFirst(head,x);
        }
        else if(lc == 2)
        {
            int x ; cout<< "Nhap gia tri can chen:"; cin>>x;
            insertlast(head,x);
        }
        else if(lc == 3)
        {
            int x ; cout<< "Nhap gia tri can chen:"; cin>>x;
            int pos; cout<< "Nhap vi tri can chen:"; cin>>pos;
            insertMiddle(head,x,pos);
        }
        else if(lc==4)
        {
            deleteFirst(head);
        }
        else if(lc==5)
        {
            deletelast(head);
        }
        else if(lc == 6)
        {
            int pos; cout<< "Nhap vi tri can xoa:"; cin>>pos;
            deleteMiddle(head,pos);
        }
        else if(lc==7){
            in(head);
        }
        else if(lc==8)
        {
            sapxep(head);
        }
        else if(lc==0) {break;}
    }
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

struct Student{
	string name, id;
	double gpa;
};

struct SV{
	Student s;
	SV *next;
};

typedef struct SV* sv;

//Cap phat dong mot node moi voi du lieu la so nguyen x
sv makeNode(){
	Student s;
	cout << "Nhap thong tin sinh vien :\n";
	cout << "Nhap ID :"; cin >> s.id;
	cout << "Nhap ten :"; cin.ignore();
	getline(cin, s.name);
	cout << "Nhap gpa :"; cin >> s.gpa;
	sv tmp = new SV();
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}

//Kiem tra rong
bool empty(sv a){
	return a == NULL;
}

int Size(sv a){
	int cnt = 0;
	while(a != NULL){
		++cnt;
		a = a->next; // gan dia chi cua not tiep theo cho node hien tai
		//cho node hien tai nhay sang not tiep theo
	}
	return cnt;
}

//them 1 phan tu vao dau danh sach lien ket
void insertFirst(sv &a){
	sv tmp = makeNode();
	if(a == NULL){
		a = tmp;
	}
	else{
		tmp->next = a;
		a = tmp;
	}
}

//Them 1 phan tu vao cuoi dslk
void insertLast(sv &a){
	sv tmp = makeNode();
	if(a == NULL){
		a = tmp;
	}
	else{
		sv p = a;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = tmp;
	}
}

//Them 1 phan tu vao giua
void insertMiddle(sv &a,int pos){
	int n = Size(a);
	if(pos <= 0 || pos > n + 1){
		cout << "Vi tri chen khong hop le !\n"; return;
	}
	if(pos == 1){
		insertFirst(a); return;
	}
	else if(pos == n + 1 ){
		insertLast(a); return;
	}
	sv p = a;
	for(int i = 1; i < pos - 1; i++){
		p = p->next;
	}
	sv tmp = makeNode();
	tmp->next = p->next;
	p->next = tmp;
}

//xoa phan tu o dau
void deleteFirst(sv &a){
	if(a == NULL) return;
	a = a->next;
}

//xoa phan tu o cuoi
void deleteLast(sv &a){
	if(a == NULL) return;
	sv truoc = NULL, sau = a;
	while(sau->next != NULL){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = NULL;
	}
	else{
		truoc->next = NULL;
	}
}

//Xoa o giua
void deleteMiddle(sv &a, int pos){
	if(pos <=0 || pos > Size(a)) return;
	sv truoc = NULL, sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = a->next;
	}
	else{
		truoc->next = sau->next;
	}
}

void in(Student s){
	cout << "--------------------------------\n";
	cout << "ID : " << s.id << endl;
	cout << "Ho ten :" << s.name << endl;
	cout << "GPA : " << fixed << setprecision(2) << s.gpa << endl;
	cout << "--------------------------------\n";
}

void inds(sv a){
	cout << "Danh sach sinh vien :\n";
	while(a != NULL){
		in(a->s);
		a = a->next;
	}
	cout << endl;
}

void sapxep(sv &a){
	for(sv p = a; p->next != NULL; p = p->next){
		sv min = p;
		for(sv q = p->next; q != NULL; q = q->next){
			if(q->s.gpa < min->s.gpa){
				min = q;
			}
		}
		Student tmp = min->s;
		min->s = p->s;
		p->s = tmp;
	}
}

//Tim kiem trong dslk
//Tim phan tu lon nhat, nho nhat
//Tim kiem sinh vien theo ten, theo ma, id ...


int main(){
	sv head = NULL;
	while(1){
		cout << "-----------------MENU---------------\n";
		cout << "1. Chen sinh vien vao dau danh sach\n";
		cout << "2. Chen sinh vien vao cuoi danh sach\n";
		cout << "3. Chen sinh vien vao giua danh sach\n";
		cout << "4. Xoa phan tu o dau\n";
		cout << "5. Xoa phan tu o cuoi\n";
		cout << "6. Xoa phan tu o giua\n";
		cout << "7. Duyet danh sach lien ket\n";
		cout << "8. Sap xep cac sinh vien trong dslk\n";
		cout << "0. Thoat !\n";
		cout << "-------------------------------------\n";
		cout << "Nhap lua chon :";
		int lc; cin >> lc;
		if(lc == 1){
			insertFirst(head);
		}
		else if(lc == 2){
			insertLast(head);
		}
		else if(lc == 3){
			int pos; cout << "Nhap vi tri can chen :"; cin >> pos;
			insertMiddle(head, pos);
		}
		else if(lc == 4){
			deleteFirst(head);
		}
		else if(lc == 5){
			deleteLast(head);
		}
		else if(lc == 6){
			int pos; cout << "Nhap vi tri can xoa:"; cin >> pos;
			deleteMiddle(head, pos);
		}
		else if(lc == 7){
			inds(head);
		}
		else if(lc == 8){
			sapxep(head);
		}
		else if(lc == 0){
			break;
		}
	}
	return 0;
}*/
/*
#include<iostream>
using namespace std;
// Tao node
struct Node
{
	int data;
	Node* next;
};
Node* createNode(int x)
{
    Node* node = new Node;
    node->data = x;
    node->next = nullptr;
    return node;
}
// Tao danh sach lien ket don
struct LinkedList
{
    Node* Head;
    Node* Tail;
};
void createList(LinkedList& l)
{
    l.Head = nullptr;
    l.Tail = nullptr;
}
// them phan tu vao dau danh sach
void addHead(LinkedList& l , Node* node)
{
    if(l.Head == nullptr)
    {
        l.Head =node;
        l.Tail =node;
    }
    else{
        node->next = l.Head;
        l.Head= node;
    }
}
// them phan tu vao cuoi danh sach
void addTail(LinkedList& l , Node* node)
{
    if(l.Head==nullptr)
    {
        l.Head = node;
        l.Tail = node;
    }
    else{
        l.Tail->next = node;
        l.Tail = node;
    }
}
// them vi tri bat ki
void InsertAfterQ(LinkedList& l , Node* p , Node* q)
{
    if(q!=nullptr)
    {
        p->next = q->next;
        q->next = p ;
        if(l.Tail == q)
            l.Tail=p;
    }
    else
        addHead(l ,p);
}
// Duyet danh sach
void PrintList(LinkedList l)
{
    if(l.Head!=nullptr)
    {
        Node* node = l.Head;
        while(node!=nullptr)
        {
            cout<< node->data << " ";
            node = node->next;
        }
    }
}
int RemoveHead(LinkedList l , int &x)
{
    if(l.Head!=nullptr)
    {
        Node* node = l.Head;
        x = node->next;  // luu gia tri cua node Head
        node->next = l.Head;
        delete node;
        if(l.Head ==nullptr)
        {
            l.Tail ==nullptr
        }
        return 1;

    }
    return 0;
}
int main()
{
    LinkedList list;
    createList(list);

    Node* node;
    for(int i = 0 ; i< 11;i++)
    {
        node = createNode(i);
        addHead(list , node);
    }
    PrintList(list);
    cout<<endl;
    RemoveHead(list);
}
*/
#include <bits/stdc++.h>
using namespace std;

struct Student{
	string name, id;
	double gpa;
};

struct SV{
	Student s;
	SV *next;
};

typedef struct SV* sv;

//Cap phat dong mot node moi voi du lieu la so nguyen x
sv makeNode(){
	Student s;
	cout << "Nhap thong tin sinh vien :\n";
	cout << "Nhap ID :"; cin >> s.id;
	cout << "Nhap ten :"; cin.ignore();
	getline(cin, s.name);
	cout << "Nhap gpa :"; cin >> s.gpa;
	sv tmp = new SV();
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}

//Kiem tra rong
bool empty(sv a){
	return a == NULL;
}

int Size(sv a){
	int cnt = 0;
	while(a != NULL){
		++cnt;
		a = a->next; // gan dia chi cua not tiep theo cho node hien tai
		//cho node hien tai nhay sang not tiep theo
	}
	return cnt;
}

//them 1 phan tu vao dau danh sach lien ket
void insertFirst(sv &a){
	sv tmp = makeNode();
	if(a == NULL){
		a = tmp;
	}
	else{
		tmp->next = a;
		a = tmp;
	}
}

//Them 1 phan tu vao cuoi dslk
void insertLast(sv &a){
	sv tmp = makeNode();
	if(a == NULL){
		a = tmp;
	}
	else{
		sv p = a;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = tmp;
	}
}

//Them 1 phan tu vao giua
void insertMiddle(sv &a,int pos){
	int n = Size(a);
	if(pos <= 0 || pos > n + 1){
		cout << "Vi tri chen khong hop le !\n"; return;
	}
	if(pos == 1){
		insertFirst(a); return;
	}
	else if(pos == n + 1 ){
		insertLast(a); return;
	}
	sv p = a;
	for(int i = 1; i < n - 1; i++){
		p = p->next;
	}
	sv tmp = makeNode();
	tmp->next = p->next;
	p->next = tmp;
}

//xoa phan tu o dau
void deleteFirst(sv &a){
	if(a == NULL) return;
	a = a->next;
}

//xoa phan tu o cuoi
void deleteLast(sv &a){
	if(a == NULL) return;
	sv truoc = NULL, sau = a;
	while(sau->next != NULL){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = NULL;
	}
	else{
		truoc->next = NULL;
	}
}

//Xoa o giua
void deleteMiddle(sv &a, int pos){
	if(pos <=0 || pos > Size(a)) return;
	sv truoc = NULL, sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = a->next;
	}
	else{
		truoc->next = sau->next;
	}
}

void in(Student s){
	cout << "--------------------------------\n";
	cout << "ID : " << s.id << endl;
	cout << "Ho ten :" << s.name << endl;
	cout << "GPA : " << fixed << setprecision(2) << s.gpa << endl;
	cout << "--------------------------------\n";
}

void inds(sv a){
	cout << "Danh sach sinh vien :\n";
	while(a != NULL){
		in(a->s);
		a = a->next;
	}
	cout << endl;
}

void sapxep(sv &a){
	for(sv p = a; p->next != NULL; p = p->next){
		sv min = p;
		for(sv q = p->next; q != NULL; q = q->next){
			if(q->s.name < min->s.name){
				min = q;
			}
		}
		Student tmp = min->s;
		min->s = p->s;
		p->s = tmp;
	}
}
int main(){
	sv head = NULL;
	while(1){
		cout << "-----------------MENU---------------\n";
		cout << "1. Chen sinh vien vao dau danh sach\n";
		cout << "2. Chen sinh vien vao cuoi danh sach\n";
		cout << "3. Chen sinh vien vao giua danh sach\n";
		cout << "4. Xoa phan tu o dau\n";
		cout << "5. Xoa phan tu o cuoi\n";
		cout << "6. Xoa phan tu o giua\n";
		cout << "7. Duyet danh sach lien ket\n";
		cout << "8. Sap xep cac sinh vien trong dslk\n";
		cout << "0. Thoat !\n";
		cout << "-------------------------------------\n";
		cout << "Nhap lua chon :";
		int lc; cin >> lc;
		if(lc == 1){
			insertFirst(head);
		}
		else if(lc == 2){
			insertLast(head);
		}
		else if(lc == 3){
			int pos; cout << "Nhap vi tri can chen :"; cin >> pos;
			insertMiddle(head, pos);
		}
		else if(lc == 4){
			deleteFirst(head);
		}
		else if(lc == 5){
			deleteLast(head);
		}
		else if(lc == 6){
			int pos; cout << "Nhap vi tri can xoa:"; cin >> pos;
			deleteMiddle(head, pos);
		}
		else if(lc == 7){
			inds(head);
		}
		else if(lc == 8){
			sapxep(head);
		}
		else if(lc == 0){
			break;
		}
	}
	return 0;
}
