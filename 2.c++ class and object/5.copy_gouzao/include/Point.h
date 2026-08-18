#ifndef POINT_H
#define POINT_H

class Point         //类
{
    private:
        int x=10, y=20;     //直接给初值
        // int &rx=x;           
        // float pi = 3.14;     
    public:
        void setPoint(int x, int y);
        void printPoint();
        Point();                // 不带参数的构造函数
        Point(int x, int y=5);  // 重载带参数的构造函数
        Point(const Point &p);  // 复制构造函数

        ~Point();       // 析构函数
};    

#endif