/*---------------------------------------------------------------------------------*/
//类的静态成员
#include <iostream>
using namespace std;

class Student
{
    private:
        double score;
    public:
        static int count;   //静态变量不能直接在类中赋初值
        static double total;
        Student(double score)
        {
            this->score = score;
            count++;
            total += score;
        }
        static double getAverage()
        {
            return total / count;
        }
        static int getSum()
        {
            return total;
        }
};
//给静态变量设置初值
int Student::count = 0;
double Student::total = 0;
 
int main(){
    Student s1(80);
    Student s2(90);
    Student s3(70);
    Student stu[3] = {Student(80), Student(90), Student(70)};     //定义对象数组
    cout << "总成绩：" << Student::getSum() << endl;
    cout << "人数：" << Student::count << endl;
    cout << "平均成绩：" << Student::getAverage() << endl;

    return 0;
}  
