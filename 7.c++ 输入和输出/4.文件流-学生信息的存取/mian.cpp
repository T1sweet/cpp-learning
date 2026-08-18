/*---------------------------------------------------------------------------------*/
//文件流：学生信息的存取
#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    int id;
    string number;
    string name;
public:
    Student(int id=0, string number="", string name="")
    {
        this->id = id;
        this->number = number;
        this->name = name;
        // cout<<"构造函数"<<endl;
    }
    ~Student()
    {
        // cout<<"析构函数"<<endl;
    }
    void setStudent(int id, string number, string name)
    {
        this->id = id;
        this->number = number;
        this->name = name;
    }
    void show()
    {
        cout<<"序号："<<id<<'\t';
        cout<<"学号："<<number<<'\t';
        cout<<"姓名："<<name<<endl;
    }
    int getID()
    {
        return this->id;
    }
    string getNumber()
    {
        return this->number;
    }
    string getName()
    {
        return this->name;
    }
};

int main(){
    int num = 0;
    cout<<"请输入学生人数："<<endl;
    cin>>num;
    cout<<"请输入学生信息：学号、姓名"<<endl;

    Student* students = new Student[num];
    for(int i = 0; i < num; i++)
    {
        string number;
        string name;
        cin>>number>>name;
        number = "f" + number;
        students[i].setStudent(i+1, number, name);
    }
    cout<<"学生信息如下："<<endl;
    for(int i = 0; i < num; i++)
    {
        students[i].show();
    }

    //将学生信息写入文件
    cout<<"------------------------------------"<<endl;
    ofstream myout;
    myout.open("../students.txt",ios::out);
    if (!myout) // myout为false，文件打开失败
    {
        cout<<"文件打开失败"<<endl;
        return 0;
    }
    cout<<"文件打开成功"<<endl;
    cout<<"将学生信息写入文件"<<endl;
    for(int i = 0; i < num; i++)
    {
        myout<<students[i].getID()<<' '<<students[i].getNumber()<<' '<<students[i].getName()<<endl;
    }
    myout.close();
    cout<<"信息写入成功，文件关闭"<<endl;
    delete[] students;

    //将学生信息从文件读取
    cout<<"------------------------------------"<<endl;
    ifstream myin;
    myin.open("../students.txt",ios::in);
    if (!myin)  // myin为false，文件打开失败
    {
        cout<<"文件打开失败"<<endl;
        return 0;
    }
    cout<<"文件打开成功"<<endl;
    cout<<"将学生信息从文件读取"<<endl;
    char sbuf[30];
    int num1=0;
    while(!myin.eof())
    {
        myin.getline(sbuf, sizeof(sbuf));    //读取文件中的每一行,包含换行符
        cout<<sbuf<<endl;
        num1++;
    }
    myin.close();

    return 0;
}
