
/*---------------------------------------------------------------------------------*/
//复制构造函数
#include <iostream>
#include "Point.h"
using namespace std;

Point fun(Point p){
    Point p2(p);
    return p2;
}

int main(){
    Point p1(3, 4);
    p1.printPoint();

    Point p2(p1);   // 复制构造函数：带入法
    p2.printPoint();
    Point p3=p1;    // 复制构造函数：赋值法
    p3.printPoint();

    Point p4=fun(p1);
    p4.printPoint();

    return 0;
}  
