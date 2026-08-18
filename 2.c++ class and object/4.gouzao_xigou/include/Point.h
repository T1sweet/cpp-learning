#ifndef POINT_H
#define POINT_H

// #pragma once        // 防止重复包含

class Point         //类
{
    private:
        int x=10, y=20;     //直接给初值
        // int &rx=x;           
        // float pi = 3.14;     
    public:
        void setPoint(int x, int y);
        void printPoint();
        Point();            // 构造函数，与类名保持一致，没有返回值，可重载
                            // 构造函数必须放在public中
        // Point(int x);       // 重载带参数的构造函数
        Point(int x, int y=5);// 重载带参数的构造函数

        ~Point();       // 析构函数
};    

#endif