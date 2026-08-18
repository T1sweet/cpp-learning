
/*---------------------------------------------------------------------------------*/
//复制构造函数
#include <iostream>
#include "String.h"
using namespace std;


int main(){
    String s1("hello");
    s1.printString();

    String s2(s1);      //浅复制/深复制
    s2.printString();
    return 0;
}  
