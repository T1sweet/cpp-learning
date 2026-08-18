/*---------------------------------------------------------------------------------*/
//对象成员
#include <iostream>
using namespace std;

class Student
{
    private:
        int id;
        const string name;      //常数据成员，姓名不让改
    public:
        Student(int id, string name): name(name)
        {
            // this->name = "name";      //错误，常数据成员不能赋值修改，只能通过初始化列表初始化
            this->id = id;
            cout << "Student constructor" << endl;
        }
        ~Student()
        {
            cout << "Student destructor" << endl;
        }
        void printStudent()
        {
            cout << "name: " << name << '\t' << "id: " << id << endl;
        }
        void printStudent() const
        {
            cout << "name: " << name << '\t' << "id: " << id << endl;
        }
        void modifyStudent()
        {
            id = 1002;
            // name = "李四";  //错误，常数据成员不能赋值修改，只能通过初始化列表初始化
        }
        void modifyStudent() const
        {
            // id = 1002;       //错误，常数据成员不能赋值修改，只能通过初始化列表初始化
            // name = "李四";   //错误，常数据成员不能赋值修改，只能通过初始化列表初始化
        }
        string getName(){
            return name;
        }
};

int main(){
    Student s1(1001, "张三");
    s1.printStudent();
    s1.modifyStudent();
    s1.printStudent();

    const Student s2(1005, "王五");   
    s2.printStudent();      //const对象只能调用const成员函数（重载）
    s2.modifyStudent();     //const对象只能调用const成员函数（重载）
                            //const对象不能进行修改

    return 0;
}
