/*---------------------------------------------------------------------------------*/
//程序异常：2数相除
#include <iostream>
using namespace std;

double divide(int a, int b)
{
    if(b==0)
    {
        throw 1;    //抛出异常，异常值为整型的
    }else if(b==1)
    {
        throw "别让分母等于1";    //抛出异常，异常值为字符串的
    }else if(b<0)
    {
        throw 1.0;    //抛出异常，异常值为浮点型的
    }

    return (float)a / b;
}

int main(){
    int a, b;
    cout<<"请输入两个整数："<<endl;
    cin>>a>>b;
    try
    {
        cout<<"a/b = "<<a<<"/"<<b<<" = "<<divide(a, b)<<endl;
    }
    catch(int a)    //捕获异常，异常值为整型的，用变量a接收
    {
        cout<<endl<<"除数不能为0"<<endl;
    }
    catch(const char *b)    //捕获异常，异常值为字符串的，用变量e接收
    {                       //因为字符串长度不定，所以用指针接收异常值
        cout<<endl<<"别让分母等于1"<<endl;
    }
    catch(...)    //捕获其他所有异常
    {
        cout<<endl<<"未知异常"<<endl;
    }
}  
    
