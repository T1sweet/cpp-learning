/*---------------------------------------------------------------------------------*/
//函数模板与模板函数：与类结合，需要根据需求重载运算符
#include <iostream>
using namespace std;

class Student
{
    private:
        int id;
        int score1, score2, score3;
    public:
        Student(int id, int score1, int score2, int score3)
        {
            this->id = id;
            this->score1 = score1;
            this->score2 = score2;
            this->score3 = score3;
        }
        bool operator>(const Student& s)    //按总分比较大小
        {
            if(this->score1 + this->score2 + this->score3 > s.score1 + s.score2 + s.score3)
                return true;
            else
                return false;
        }
        friend ostream & operator<<(ostream& os, const Student& s);
};

ostream & operator<<(ostream& os, const Student& s)
{
    os << "id: " << s.id << ", score1: " << s.score1 << ", score2: " << s.score2 << ", score3: " << s.score3 << endl;
    return os;
}

template <class T>
T getmax(T a, T b)
{
    return a > b ? a : b;       //>运算符 需要运算符重载
}

int main(){
    Student s1(1001, 95, 90, 85);
    Student s2(1002, 90, 85, 90);
    cout << getmax(s1, s2) << endl;     //输出运算符 需要运算符重载

    return 0;
}
