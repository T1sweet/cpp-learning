/*---------------------------------------------------------------------------------*/
//实现运行时动态多态：虚函数-虚成员函数
//3个条件：有虚函数、符合赋值兼容规则、用指针或引用调用虚函数
#include <iostream>
using namespace std;

class Shape
{
    private:
        int x, y;
    protected:
    public:
        Shape(int x=0, int y=0): x(x), y(y)
        {
            cout << "Shape constructor" << endl;
        }
        ~Shape()
        {
            cout << "Shape destructor" << endl;
        }
        virtual void show()
        {
            cout << "图形的中心是： " << x << ',' << y << '\t' << endl;
        }
        virtual void Area()
        {
            cout << "不知道什么图形，不知道面积 " << endl;
        }
};

class Circle: public Shape
{
    private:
        int radius;
    protected:
    public:
        Circle(int x, int y, int radius): Shape(x, y), radius(radius)
        {
            cout << "Circle constructor" << endl;
        }
        ~Circle()
        {
            cout << "Circle destructor" << endl;
        }
        virtual void show()     //这个和基类的show()重名了，相当于重载
        {               
            cout << "该图形是圆" << endl;
            Shape::show();   //此时要调用基类的show()需要采用成员名限定的方式
        }
        virtual void Area()
        {
            cout << "Area: " << 3.14 * radius * radius << endl;
        }
};

int main(){
    Shape s1, s2(1, 2);
    s1.show();
    s2.show();

    s1 = s2;     //赋值兼容规则：基类对象可以赋值给基类对象
    s1.show();

    cout << "1-----------------" << endl;
    Circle c1(4, 5, 6);
    c1.show();
    s1 = c1;     //赋值兼容规则：派生类对象可以赋值给基类对象
    s1.show();

    cout << "2-----------------" << endl;
    Shape *s3 = &s2; //基类指针可以指向基类对象
    s3->show();
    Shape *s4 = &c1; //基类指针可以指向派生类对象
    s4->show();

    cout << "3-----------------" << endl;
    Shape &s5 = s2; //基类的引用可以指向基类对象
    s5.show();
    Shape &s6 = c1; //基类的引用可以指向派生类对象
    s6.show();
    s6.Area();

    return 0;
}
