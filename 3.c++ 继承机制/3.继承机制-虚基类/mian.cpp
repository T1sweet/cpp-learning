// /*---------------------------------------------------------------------------------*/
// //继承机制：未使用虚基类
// #include <iostream>
// using namespace std;

// class Person
// {
//     private:
//         int age;
//         string name;
//     public:
//         Person(int age, string name): age(age), name(name)
//         {
//             cout << "Person constructor" << endl;
//         }
//         ~Person()
//         {
//             cout << "Person destructor" << endl;
//         }
//         void printPerson()
//         {
//             cout << "name: " << name << endl << "age: " << age << endl;
//         }
// };
// class Student: public Person
// {
//     private:
//     protected:
//         int grade;
//     public:
//         Student(int age, string name, int grade): Person(age, name), grade(grade)
//         {
//             cout << "Student constructor" << endl;
//         }
//         ~Student()
//         {
//             cout << "Student destructor" << endl;
//         }
//         void printStudent()
//         {
//             Person::printPerson();
//             cout << "grade: " << grade << endl;
//         }
// };

// class Employee: public Person
// {
//     private:
//     protected:
//         string job;
//     public:
//         Employee(int age, string name, string job): Person(age, name), job(job)
//         {
//             cout << "Employee constructor" << endl;
//         }
//         ~Employee()
//         {
//             cout << "Employee destructor" << endl;
//         }
//         void printEmployee()
//         {
//             Person::printPerson();
//             cout << "job: " << job << endl;
//         }
// };

// class StudentHasjob: public Student, public Employee
// {
//     private:
//     public:
//         StudentHasjob(int age, string name, int grade, string job): Student(age, name, grade), Employee(age, name, job)
//         {
//             cout << "StudentHasjob constructor" << endl;
//         }
//         ~StudentHasjob()
//         {
//             cout << "StudentHasjob destructor" << endl;
//         }
//         void printStudentHasjob()
//         {
//             Student::printStudent();
//             cout << "job: " << job << endl;
//         }
// };

// int main(){
//     StudentHasjob s1(18, "张三", 100, "学生");
//     s1.printStudentHasjob();

//     return 0;
// }




/*---------------------------------------------------------------------------------*/
//继承机制：使用了虚基类
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
        void printPerson()
        {
            cout << "name: " << name << endl << "age: " << age << endl;
        }
};
class Student: virtual public Person
{
    private:
    protected:
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
        void printStudent()
        {
            Person::printPerson();
            cout << "grade: " << grade << endl;
        }
};

class Employee: virtual public Person
{
    private:
    protected:
        string job;
    public:
        Employee(int age, string name, string job): Person(age, name), job(job)
        {
            cout << "Employee constructor" << endl;
        }
        ~Employee()
        {
            cout << "Employee destructor" << endl;
        }
        void printEmployee()
        {
            Person::printPerson();
            cout << "job: " << job << endl;
        }
};

class StudentHasjob: public Student, public Employee
{
    private:
    public:
        StudentHasjob(int age, string name, int grade, string job): Person(age, name), Student(age, name, grade), Employee(age, name, job)
        {
            cout << "StudentHasjob constructor" << endl;
        }
        ~StudentHasjob()
        {
            cout << "StudentHasjob destructor" << endl;
        }
        void printStudentHasjob()
        {
            Student::printStudent();
            cout << "job: " << job << endl;
        }
};

int main(){
    StudentHasjob s1(18, "张三", 100, "学生");
    s1.printStudentHasjob();

    return 0;
}
