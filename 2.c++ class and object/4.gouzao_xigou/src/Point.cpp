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

// Point::Point(int a)      // 重载带参数的构造函数
// {
//     x = a;
//     cout << "重载带参数的构造函数调用" << endl;
// }

// Point::Point(int a, int b)      // 重载带参数的构造函数
// {
//     x = a;
//     y = b;
//     cout << "重载带参数的构造函数调用" << endl;
// }

// Point::Point(int a):x(a)                // 成员初始化列表
// {
//     cout << "重载带参数的构造函数调用" << endl;
// }

Point::Point(int a, int b):x(a), y(b)    // 成员初始化列表
{
    cout << "重载带参数的构造函数调用" << endl;
}


Point::~Point()     // 析构函数
{
    cout << "析构函数调用" << endl;
}