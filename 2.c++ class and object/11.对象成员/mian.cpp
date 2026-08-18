/*---------------------------------------------------------------------------------*/
//对象成员
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
        ~Date()
        {
            cout << "Date destructor" << endl;
        }
        void printDate()
        {
            cout << year << "-" << month << "-" << day << endl;
        }
};

class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int hour, int minute, int second)
        {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        ~Time()
        {
            cout << "Time destructor" << endl;
        }
        void printTime()
        {
            cout << hour << ":" << minute << ":" << second << endl;
        }
};

class Schedule
{
    private:
        Date date;
        Time time;
        int number;
        string work;
    public:
        //不能对对象成员进行初始化赋值操作，否则会报错
        // Schedule(int year, int month, int day, int hour, int minute, int second, int number, string work)
        // {
        //     this->date = Date(year, month, day);
        //     this->time = Time(hour, minute, second);
        //     this->number = number;
        //     this->work = work;
        //     cout << "Schedule constructor" << endl;
        // }
        //采用初始化列表初始化对象成员
        Schedule(int year, int month, int day, int hour, int minute, int second, int number, string work): date(year, month, day), time(hour, minute, second)
        {
            this->number = number;
            this->work = work;
            cout << "Schedule constructor" << endl;
        }
        ~Schedule()
        {
            cout << "Schedule destructor" << endl;
        }
        void printSchedule()
        {
            date.printDate();
            time.printTime();
            cout << number << endl;
            cout << work << endl;
        }
};

int main(){
    Schedule s1(2023, 10, 1, 9, 0, 0, 1001, "开会");
    s1.printSchedule();
    return 0;
}
