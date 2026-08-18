// /*---------------------------------------------------------------------------------*/
// // 函数默认参数
// #include <iostream>
// using namespace std;


// int add(int a=5,int b=6)     
// {
//     return a+b;
// }

// int main()
// {
//     cout<<"add() = "<<add()<<endl;
//     cout<<"add(10) = "<<add(10)<<endl;
//     cout<<"add(10,20) = "<<add(10,20)<<endl;

//     return 0;
// }


// /*---------------------------------------------------------------------------------*/
// //地址传递
// #include <iostream>
// using namespace std;


// void swap(int *a,int *b)     
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main()
// {
//     int a=10,b=20;
//     cout<<"a = "<<a<<'\t';
//     cout<<"b = "<<b<<endl;
//     swap(&a,&b);
//     cout<<"a = "<<a<<'\t';
//     cout<<"b = "<<b<<endl;

//     return 0;
// }


// /*---------------------------------------------------------------------------------*/
// //引用传递
// #include <iostream>
// using namespace std;


// void swap(int &a,int &b)     
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

// int main()
// {
//     int a=10,b=20;
//     cout<<"a = "<<a<<'\t';
//     cout<<"b = "<<b<<endl;
//     swap(a,b);
//     cout<<"a = "<<a<<'\t';
//     cout<<"b = "<<b<<endl;

//     return 0;
// }


// /*---------------------------------------------------------------------------------*/
// //函数重载：形参数量不同，或形参类型不同
// #include <iostream>
// using namespace std;


// int sum(int a,int b,int c)     
// {
//     return a+b+c;
// }
// int sum(int a,int b)     
// {
//     return a+b;
// }
// float sum(float a,float b)     
// {
//     return a+b;
// }

// int main()
// {
//     int a=10,b=20,c=30;
//     float d=10.5,e=20.1;
//     cout<<"a = "<<a<<'\t';
//     cout<<"b = "<<b<<'\t';
//     cout<<"c = "<<c<<endl;
//     cout<<"d = "<<d<<'\t';
//     cout<<"e = "<<e<<endl;

//     cout<<"sum(a,b,c): = "<<sum(a,b,c)<<endl;
//     cout<<"sum(d,e): = "<<sum(d,e)<<endl;

//     return 0;
// }



// /*---------------------------------------------------------------------------------*/
// //函数模板
// #include <iostream>
// using namespace std;

// //函数模板声明
// template <class T, class U>
// auto sum(T a, U b) -> decltype(a+b);


// int main(){
//     cout << "sum(5,6.2):" << sum(5,6.2) << endl;
//     cout << "sum(5.1,6.6):" << sum(5.1,6.6) << endl;
//     cout << "sum(5,6):" << sum(5,6) << endl;
//     cout << "sum(5.5,6):" << sum(5.5,6) << endl;
//     return 0;
// }  

// //函数模板实例化
// template <class T, class U>
// auto sum(T a, U b) -> decltype(a+b)
// {
//     return a+b;
// }



/*---------------------------------------------------------------------------------*/
//尾置返回类型
#include <iostream>
using namespace std;

// decltype(a+b) add2(int a, int b)        //a、b未定义，报错
// {
//     return a+b;
// }

auto add3(int a, int b)->decltype(a+b)       
{
    return a+b; // 尾置返回类型：auto根据decltype(a+b)来自动推断返回类型
}

int main(){
    cout<<"add3(5,7) = "<<add3(5,7)<<endl;
    return 0;
}  

