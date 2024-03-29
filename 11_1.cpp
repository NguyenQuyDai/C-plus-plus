#include<iostream>
using namespace std;
class TDate{
private:
    short day,month,year;
public:
    TDate(){}
    TDate(short day,short month,short year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void setTDate(short day,short month,short year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    short getDay(){
        return day;
    }
    void setDay(short){
        this->day=day;
    }
    short getMonth(){
        return month;
    }
    void setMonth(short){
        this->month=month;
    }
    short getYear(){
        return year;
    }
    void setYear(short){
        this->year=year;
    }
    void nhap(){
        cout<<"Nhap vao ngay:";
        cin>>this->day;
        cin>>this->month;
        cin>>this->year;
    }
    void display(){
        string day= to_string(this->day);
        string month= to_string(this->month);
        string year=to_string(this->year);
        if(day.length()==1){
            day="0"+day;
        }
        if(month.length()==1){
            month="0"+month;
        }
        cout<<day<<"/"<<month<<"/"<<year;
    }
};
int main(){
    TDate A;
    A.nhap();
    A.display();
}
