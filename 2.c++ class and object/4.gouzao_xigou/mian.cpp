// /*---------------------------------------------------------------------------------*/
// //类与对象的多文件实现
// #include <iostream>
// #include "Point.h"
// using namespace std;

// int main(){
//     Point p1;           //对象变量：类的实例化
//     Point p2(3);  
//     Point p3(4, 5);     //对象变量：类的实例化，重载带参数的构造函数
//     p1.printPoint();
//     p2.printPoint();
//     p3.printPoint();
//     return 0;
// }  
    

/*---------------------------------------------------------------------------------*/
//主动析构
#include <iostream>
#include "Point.h"
using namespace std;
int main(){
    // 方法1
    Point *p1=nullptr;  
    p1 = new Point(3, 4);     
    p1->printPoint();
    delete p1;

    cout << "-------------------------" << endl;
    //方法2
    Point *p2 = new Point(3, 4);
    p2->printPoint();
    delete p2;

    cout << "程序结束" << endl;
    return 0;
}  
