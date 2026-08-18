// //字符数组的拷贝：strcpy的使用

// #include <iostream>
// #include <cstring>

// using namespace std;


// int main()
// {
//     char str[10];
//     cout<<"请输入一个字符串："<<endl;
//     cin>>str;

//     char str2[10];
//     strcpy(str2,str);       //字符数组不能直接赋值，只能通过拷贝操作
//     cout<<"拷贝后的字符串为："<<str2 <<endl;
    
//     return 0;
// }


// /*---------------------------------------------------------------------------------*/
// //字符串的赋值与连接
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string str;
//     cout<<"请输入一个字符串："<<endl;
//     cin>>str;

//     string str2;
//     str2=str;       //字符数组直接赋值
//     cout<<"赋值后的字符串为："<<str2 <<endl;
    
//     string str3;
//     str3="wcpwcpwcp" + str2;       //字符串连接
//     cout<<"连接后的字符串为："<<str3 <<endl;

//     return 0;
// }


// /*---------------------------------------------------------------------------------*/
// //字符串的比较
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string str;
//     cout<<"请输入字符串1:"<<endl;
//     cin>>str;

//     string str2;
//     cout<<"请输入字符串2:"<<endl;
//     cin>>str2;

//     if(str==str2)
//     {
//         cout<<"两个字符串相等"<<endl;
//     }
//     else
//     {
//         cout<<"两个字符串不相等"<<endl;
//     }

//     return 0;
// }


/*---------------------------------------------------------------------------------*/
//使用字符串的方法：输出字符串的长度
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout<<"请输入字符串:"<<endl;
    cin>>str;

    cout<<"字符串的长度为:"<<str.length()<<endl;
    return 0;
}