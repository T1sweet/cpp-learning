/*---------------------------------------------------------------------------------*/
//实现运行时动态多态：虚函数-虚成员函数
//3个条件：有虚函数、符合赋值兼容规则、用指针或引用调用虚函数
#include <iostream>
using namespace std;

class Base
{
    private:
        int *pBase;
    protected:
    public:
        Base()
        {
            pBase = new int;
            cout << "Base constructor" << endl;
        }
        virtual ~Base()
        {
            delete pBase;
            cout << "Base destructor" << endl;
        }
};

class Derlved: public Base
{
    private:
        char *pDerlved;
    protected:
    public:
        Derlved()
        {
            pDerlved = new char;
            cout << "Derlved constructor" << endl;
        }
        virtual ~Derlved()
        {
            delete pDerlved;
            cout << "Derlved destructor" << endl;
        }
};

int main(){
    Base *pb;
    pb = new Derlved();
    delete pb;

    return 0;
}
