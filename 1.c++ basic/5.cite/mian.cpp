// /*---------------------------------------------------------------------------------*/
// // 引用
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int &b = a;     // 引用的初始化必须在定义时进行
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
 
//     b = 20;
//     cout<<"a = "<<a<<endl;
//     a = 30;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;

//     return 0;
// }


/*---------------------------------------------------------------------------------*/
// 返回两个数较大值的引用
#include <iostream>
using namespace std;

int max_val=0;

int & max(int &a,int &b)      //返回类型是引用
{
    return a>b ? max_val=a:max_val=b;
}

int main()
{
    int a, b;

    cout<<"请输入整数a:"<<endl;
    cin>>a;
    cout<<"请输入整数b:"<<endl;
    cin>>b;

    cout<<"max(a,b) = "<<max(a,b)<<endl;

    return 0;
}