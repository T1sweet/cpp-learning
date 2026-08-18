/*---------------------------------------------------------------------------------*/
//纯虚函数和抽象类
#include <iostream>
using namespace std;

class Shape     //有纯虚函数的类称为抽象类，抽象类不能创建实例化对象
{
    private:
    public:
        virtual void area() = 0;     //纯虚函数，Shape自身无须调用的成员函数
                                     //但派生类中有用，必须在派生类中实现
};

class Circle: public Shape
{
    private:
        int radius;
    protected:
    public:
        Circle(int radius): radius(radius)
        {
            cout << "Circle constructor" << endl;
        }
        ~Circle()
        {
            cout << "Circle destructor" << endl;
        }
        virtual void area()
        {
            cout << "Area: " << 3.14 * radius * radius << endl;
        }
};

class Rectangle: public Shape
{
    private:
        int width, height;
    protected:
    public:
        Rectangle(int width, int height): width(width), height(height)
        {
            cout << "Rectangle constructor" << endl;
        }
        ~Rectangle()
        {
            cout << "Rectangle destructor" << endl;
        }
        virtual void area()
        {
            cout << "Area: " << width * height << endl;
        }
};

void getArea(Shape *ps)
{
    ps->area();
}
int main(){
    //Shape s1;     //错误：抽象类不能创建实例化对象
    Circle c1(4);   
    Rectangle r1(3, 4);
    getArea(&c1);
    getArea(&r1);

    return 0;
}
