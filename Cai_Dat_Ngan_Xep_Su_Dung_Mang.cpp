#include<iostream>
using namespace std;
/* Tạo các biến cơ bản */
// tạo size hiện tại và khởi tạo cho nó bằng -1
int curren_size = -1;
// tạo một hằng số làm size max = 100
const int MAX_SIZE = 100;
// tạo một mảng stack với số phần tử bằng max
int stack[MAX_SIZE];

/* Kiểm tra stack rỗng */

bool isEmpty()
{
    //kiểm tra nếu curren_size == -1 thì return và kết thúc hàm
    return (curren_size == -1);
}

/*Kiểm tra stack đầy*/
bool isFull()
{
    //kiểm tra neeys curren_size == MAX_SIZE thì return và kết thúc hàm
    return (curren_size == MAX_SIZE);
}
/*Ham thêm phần tử vào stack*/
void push(int data)
{
    //việc đầu tiên ta kiểm tra xem stack đã đầy hay chưa, nếu chưa tha thực hiện:
    if(!isFull())
    {
        //tăng curren_size lên để tạo thêm chỗ trống trong stack để thêm ptu mới
        curren_size++;
        // sau đó gán data vào đúng vị trí curren_size trong stack
        stack[curren_size] = data;
    }
    // ngược lại nếu stack đã đầy thì thông báo cho người dùng stack đã đầy
    else {
        cout << "Stack da day !!"<<endl;
    }
}

/* lấy phần tử ở top nhưng không xóa nó khỏi stack */
int top(){
  //kiểm tra xem stack có rỗng hay không, nếu không ta thực hiện:
  if(!isEmpty()){
    //gán giá trị ở vị trí curren_size cho biến data
    int data = stack[curren_size];
    //sau đó return data
    return data;
  }
  //ngược lại nếu stack rỗng thì thông báo cho người dùng biết stack rỗng
  else{
    cout<<"Stack rong !!"<<endl;
  }
}
/*Lấy phần tử ở top và xóa nó khỏi stack*/
int pop()
{
    // Kiểm tra xem stack có rỗng hay không , nếu không ta thực hiện:
    if(!isEmpty())
    {
        // gán gtri ở vị trí curren_size cho biến data
        int data = stack[curren_size];
        // giảm curren_size đi vì pop() sau khi lấy xóa phần tử đó stack
        curren_size--;
        return data;
    }
    // ngược lại nếu stack rỗng thì thông báo cho người dùng biết stack rỗng
    else {
        cout<< "Stack rong!!"<<endl;
    }
}
int main()
{
    int lc;
    //ta thực hiện thêm một vài phần tử vào stack
  //cụ thể ta sẽ thêm những số sau: 10, 11, 12, 13, 14, 15, 16
  cout<<"Danh sach cac so bao gom: 10, 11, 12, 13, 14, 15, 16";
  for(int i=10;i<=16;i++)
  {
      push(i);
  }
  do{
    cout << "\n\n\t\t ============== Menu ==============";
        cout << "\n\t1. Hien thi phan tu dau Stack";
        cout << "\n\t2. Xoa phan tu dau Stack";
        cout << "\n\t0. Ket thuc";
        cout << "\n\n\t\t ============== End ==============";
        cout<<"\nNhap lua chon ban muon chon: ";
        cin>> lc;
        switch(lc){
            case 0: break;
            case 1:
              cout<<"Phan tu dau tien trong Stack: "<<top();
              break;
            case 2:
              pop();
              cout<<"Xoa phan tu top thanh cong !!!";
              break;
            default:
              cout<<"\nNhap sai, vui long nhap lai!";
        }
    } while(lc);
  }
