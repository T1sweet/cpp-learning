// /*---------------------------------------------------------------------------------*/
// //定义类，及其私有成员变量和共有成员函数
// #include <iostream>
// using namespace std;

// class Point
// {
//     private:
//         int x, y;
//     public:
//         void setPoint(int x, int y)
//         {
//             this->x = x;
//             this->y = y;
//         }
//         void printPoint()
//         {
//             cout << "x: " << x << ", y: " << y << endl;
//         }
// };

// int main(){

//     Point p1;

//     p1.printPoint();
//     // p1.x = 3;        // 错误，x是私有成员，不能在类外部直接访问
//     p1.setPoint(3, 4);  // 通过共有成员函数设置私有成员变量的值
//     p1.printPoint();

//     return 0;
// }  
    

/*---------------------------------------------------------------------------------*/
//类外实现成员函数
#include <iostream>
using namespace std;

class Point
{
    private:
        int x, y;
    public:
        void setPoint(int x, int y);
        void printPoint();
};

void inline Point::setPoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::printPoint()
{
    cout << "x: " << x << ", y: " << y << endl;
}

int main(){

    Point p1;

    p1.printPoint();
    // p1.x = 3;        // 错误，x是私有成员，不能在类外部直接访问
    p1.setPoint(3, 4);  // 通过共有成员函数设置私有成员变量的值
    p1.printPoint();

    return 0;
}  
    
