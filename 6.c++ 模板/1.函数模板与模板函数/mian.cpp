/*---------------------------------------------------------------------------------*/
//函数模板与模板函数
#include <iostream>
using namespace std;


//函数模板
template <typename T>
T getmax(T a, T b)
{
    return a > b ? a : b;
}

//函数模板
template <class T>
T getabs(T a)
{
    return a > 0 ? a : -a;
}

int main(){
    int a = 10, b = 20;
    float c = 10.5, d = 20.5;
    char e = 'a', f = 'b';
    string g = "hello", h = "world";
    double i = 10.5, j = 20.5;

    cout << getmax(a, b) << endl;   //实例化为模板函数
    cout << getmax(c, d) << endl;
    cout << getmax(e, f) << endl;
    cout << getmax(g, h) << endl;
    cout << getmax(i, j) << endl;   

    cout << "--------------------------" << endl;
    int k = -10;
    float l = -10.5;
    double m = -10.5;
    cout << getabs(k) << endl;      //实例化为模板函数
    cout << getabs(l) << endl;
    cout << getabs(m) << endl;



    return 0;
}
