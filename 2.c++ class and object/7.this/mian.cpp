/*---------------------------------------------------------------------------------*/
//this指针的使用
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
        Date fun()              //返回当前指针的一个临时的Date对象（副本）
        {
            cout << "fun() 返回副本, this地址: " << this << endl;
            return *this;
        }
        Date &fun1()            //返回当前指针
        {
            cout << "fun1() 返回引用, this地址: " << this << endl;
            return *this;
        }
        void print()
        {
            cout << "当前对象地址: " << this << endl;
        }
};

int main(){
    Date d1(2023, 10, 1);
    
    cout << "d1地址: " << &d1 << endl << endl;
    d1.fun().print();   //返回对象副本的地址
    d1.fun1().print();  //返回对象引用的地址

    return 0;
}  
