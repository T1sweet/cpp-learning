#include "String.h"
#include <cstring>
#include <iostream>
using namespace std;

String::String()
{
    sbuf = new char;
    sbuf[0] = '\0';
    length = 0;
}
String::String(const char *s)
{
    length = strlen(s);
    sbuf = new char[length + 1];
    strcpy(sbuf, s);
}

// String::String(const String &s)     //默认的构造函数：存在指针，需要自己写
// {
//     length = s.length;
//     sbuf = s.sbuf;
//     cout << "默认的拷贝构造函数：" << endl;
// }
String::String(const String &s)     //拷贝构造函数：存在指针，需要自己写
{
    length = s.length;
    sbuf = new char[length + 1];
    strcpy(sbuf, s.sbuf);
    cout << "自主设置的拷贝构造函数：" << endl;
}

String::~String()
{
    delete[] sbuf;
    length = 0;
}

void String::printString()
{
    cout << sbuf << endl;
}
