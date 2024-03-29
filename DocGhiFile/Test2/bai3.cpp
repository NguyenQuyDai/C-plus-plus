// Nguyen Thi Thuy Dung 715105053
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:

    Employee() {

    }


    Employee(string empName, double empSalary) {
        name = empName;
        salary = empSalary;
    }


    string getName() {
        return name;
    }

    double getSalary() {
        return salary;
    }


    void setName(string empName) {
        name = empName;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    void nhapThongTin(){
    	cout<<"Nhap ho ten : "<<endl;
    getline(cin, name);
    	cout<<"Nhap luong :"<<endl;
    	cin>>salary;
	}
	void xuat(){
		cout<<"Name :" <<name<<endl;
		cout<<"Luong :" <<salary;
	}
};

class Manager : public Employee {
private:
    float bonus;
    int yearsOfExperience;

public:
   Manager(){

   }

    Manager(string name, float baseSalary, float bonus, int yearsOfExperience) : Employee(name, baseSalary) {
        this->bonus = bonus;
        this->yearsOfExperience = yearsOfExperience;
    }

    void inputInfo() {
        Employee::nhapThongTin();
        cout << "Tien thuong : "<<endl;
        cin >> bonus;
        cout << "Tham nien: "<<endl;
        cin >> yearsOfExperience;
    }

    float getSalary() {
        return salary + bonus;
    }

    void xuat(){
    	Employee::xuat();
    	cout<<" tien bonus :"<<bonus<<endl;
    	cout<<"Thâm nien :"<<yearsOfExperience;
	}




};

int main() {
	Manager a[100];

   int n;
   cout<<"Nhap so quan ly :";
   cin>>n;



   for(int i=0;i<n;i++){
   	cout<<"Nhap thong tin quan ly thu "<<i+1;
   	a[i].inputInfo();

   }

   Manager temp;
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
    	temp=a[i];
    	a[i]=a[j];
    	a[j]=temp;
	}
      a[i].xuat();
   }
}
