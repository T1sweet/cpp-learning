#include "Point.h"
#include <iostream>
using namespace std;

void Point::setPoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::printPoint()
{
    cout << "x: " << x << ", y: " << y << endl;
}

Point::Point()      // 不带参数的构造函数
{
    cout << "不带参数的构造函数调用" << endl;
}

Point::Point(int a, int b)  // 带参数的构造函数
{
    x = a;
    y = b;
    cout << "重载带参数的构造函数调用" << endl;
}

Point::Point(const Point &p)        //拷贝构造函数 
{
    x = p.x;
    y = p.y;
    cout << "复制构造函数调用" << endl;
}             

Point::~Point()     // 析构函数
{
    cout << "析构函数调用" << endl;
}