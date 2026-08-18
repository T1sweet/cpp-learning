/*---------------------------------------------------------------------------------*/
//继承机制：单继承-public继承
#include <iostream>
using namespace std;

class Person
{
    private:
        int age;
        string name;
    public:
        Person(int age, string name): age(age), name(name)
        {
            cout << "Person constructor" << endl;
        }
        ~Person()
        {
            cout << "Person destructor" << endl;
        }
        void setPerson(int age, string name)
        {
            this->age = age;
            this->name = name;
        }
        void printPerson()
        {
            cout << "name: " << name << '\t' << "age: " << age << endl;
        }
};

class Student: public Person
{
    private:
        int grade;
    public:
        Student(int age, string name, int grade): Person(age, name), grade(grade)
        {
            cout << "Student constructor" << endl;
        }
        ~Student()
        {
            cout << "Student destructor" << endl;
        }
        void setStudent(int age, string name, int grade)
        {
            // Person::setPerson(age, name);    //这三种写法作用是一样的。方法1     
            // setPerson(age, name);            //方法2
            this->setPerson(age, name);         //方法3
            this->grade = grade;
        }
        void printStudent()
        {
            Person::printPerson();
            cout << "grade: " << grade << endl;
        }
};

int main(){
    Person p1(18, "张三");
    p1.printPerson();
    p1.setPerson(20, "李四");
    p1.printPerson();

    Student s1(18, "张三", 90);
    s1.printStudent();
    s1.setStudent(25, "王五", 95);
    s1.printStudent();

    return 0;
}
