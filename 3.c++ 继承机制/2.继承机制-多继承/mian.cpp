/*---------------------------------------------------------------------------------*/
//继承机制：多继承-public继承
#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        string id;
        char gender;
    public:
        Student(string name, string id, char gender): name(name), id(id), gender(gender)
        {
            cout << "Student constructor" << endl;
        }
        ~Student()
        {
            cout << "Student destructor" << endl;
        }
        void printStudent()
        {
            cout << "name: " << name << endl << "id: " << id << endl << "gender: " << gender << endl;
        }
};

class Employee
{
    private:
        string name;
    protected:
        string job;
    public:
        Employee(string name, string job): name(name), job(job)
        {
            cout << "Employee constructor" << endl;
        }
        ~Employee()
        {
            cout << "Employee destructor" << endl;
        }
        void printEmployee()
        {
            cout << "name: " << name << endl << "job: " << job << endl;
        }
};

class StudentHasJob: public Student, public Employee
{
    private:

    public:
        StudentHasJob(string name, string id, char gender, string job): Student(name, id, gender), Employee(name, job)
        {
            cout << "StudentHasJob constructor" << endl;
        }
        ~StudentHasJob()
        {
            cout << "StudentHasJob destructor" << endl;
        }
        void printStudentHasJob()
        {
            Student::printStudent();
            cout << "job: " << job << endl;
        }
};

int main(){
    StudentHasJob sj1("张三", "1001", 'M', "教师");
    sj1.printStudentHasJob();

    return 0;
}
