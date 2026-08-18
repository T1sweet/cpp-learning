/*---------------------------------------------------------------------------------*/
//向函数传递对象
#include <iostream>
using namespace std;

class Date
{
    private:
        int year;
        int month;
        int day;
    public:
        Date(int year, int month, int day)
        {
            this->year = year;
            this->month = month;
            this->day = day;
        }
        Date(const Date &d)     //拷贝构造函数
        {
            this->year = d.year;
            this->month = d.month;
            this->day = d.day;
        }
        void setDate(int year, int month, int day)
        {
            this->year = year;
            this->month = month;
            this->day = day;
        }
        void print()
        {
            cout << year << "-" << month << "-" << day << endl;
        }
};

void fun(Date date)     //接收的时候创建了副本，已经不是原来的对象了
{
    (&date)->setDate(2024, 10, 1);  //两种写法都可以
    // date.setDate(2024, 10, 1);
}
void fun(Date *date)
{
    date->setDate(2024, 10, 1);
}

void fun1(Date &date)
{
    // date.setDate(2025, 10, 1);   //两种写法都可以
    (&date)->setDate(2025, 10, 1);
}
int main(){
    Date d1(2023, 10, 1);
    cout << "原始日期：";
    d1.print();

    cout << "传递对象后：";
    fun(d1);        //传递对象
    d1.print();

    cout << "传递对象指针后：";
    fun(&d1);       //传递对象指针
    d1.print();

    cout << "传递对象引用后：";
    fun1(d1);       //传递对象引用
    d1.print();
    return 0;
}  
