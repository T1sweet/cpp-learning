/*---------------------------------------------------------------------------------*/
//类与对象的多文件实现
#include <iostream>
#include "Point.h"
using namespace std;

int main(){
    Point p1;           //对象变量：类的实例化
    p1.setPoint(3, 4);  
    p1.printPoint();        //原点访问方式，通过对象变量调用成员函数
    (&p1)->printPoint();    //指针访问方式，通过对象变量的地址调用成员函数

    Point *point_p1 = nullptr;  //对象指针变量：类的实例化
    point_p1 = &p1;     
    (*point_p1).printPoint();   //原点访问方式，通过对象指针变量的值调用成员函数
    point_p1->printPoint();     //指针访问方式，通过对象指针变量调用成员函数

    // 修改对象指针变量的值
    point_p1->setPoint(5, 6);
    point_p1->printPoint();     //指针访问方式，通过对象指针变量

    // 定义对象数组：类的实例化，数组元素为对象变量
    Point p2[3];
    cout << "------------------------ " << endl;
    for (int i = 0; i < 3; i++)
    {
        p2[i].setPoint(i, i);
        p2[i].printPoint();
    }
    return 0;
}  
    
