// /*---------------------------------------------------------------------------------*/
// //赋值运算符重载为成员函数：实现赋值操作（不带指针，系统默认产生的赋值函数也能用）
// #include <iostream>
// using namespace std;

// class Complex
// {
//     private:
//         double real, image;
//     public:
//         Complex(double real=0, double image=0): real(real), image(image)
//         {
//             cout << "Complex constructor" << endl;
//         }
//         ~Complex()
//         {
//             cout << "Complex destructor" << endl;
//         }
//         void show()
//         {
//             if(image > 0)
//             {
//                 if(image == 1)
//                 {
//                     cout << real << "+i" << endl;     
//                 }
//                 else
//                 {
//                     cout << real << "+" << image << "i" << endl;
//                 }
//             }
//             else if(image < 0)
//             {
//                 if(image == -1)
//                 {
//                     cout << real << "-i" << endl;
//                 }
//                 else
//                 {
//                     cout << real << image << "i" << endl;
//                 }
//             }
//             else
//             {
//                 cout << real << endl;
//             }
//         }

//         Complex &operator=(const Complex & c)
//         {
//             this->real = c.real;
//             this->image = c.image;
//             return *this;
//         }
// };

// int main(){
//     Complex c1(3, 4);
//     c1.show();
//     Complex c2;
//     c2 = c1;        // 赋值运算符重载，但是这种复数赋值操作不重载也行，系统默认产生的也能用
//     c2.show();

//     return 0;
// }



/*---------------------------------------------------------------------------------*/
//赋值运算符重载为成员函数：实现赋值操作（带指针，需要自己重载赋值函数）
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    private:
        char * sbuf;
        int length;
    public:
        String()
        {
            length = 0;
            sbuf = new char;
            sbuf[0] = '\0';
            cout << "String constructor" << endl;
        }
        String(const char * str)        //字符串初始化
        {
            length = strlen(str);
            sbuf = new char[length+1];
            strcpy(sbuf, str);
            cout << "String constructor" << endl;
        }
        ~String()
        {
            delete[] sbuf;
            cout << "String destructor" << endl;
        }
        void show()
        {
            cout << sbuf << endl;
        }
        String(const String & s)        //深拷贝
        {
            length = s.length;
            sbuf = new char[length+1];
            strcpy(sbuf, s.sbuf);
            cout << "String constructor" << endl;
        }
        String &operator=(const String & s)        //赋值运算符重载
        {
            if(this != &s)
            {
                delete[] this->sbuf;
                this->length = s.length;
                this->sbuf = new char[s.length+1];
                strcpy(this->sbuf, s.sbuf);
            }
            return *this;
        }
};

int main(){
    String s1("hello");     //调用带参构造函数
    String s2(s1);          //调用深拷贝构造函数
    String s3;              //调用默认构造函数
    s3 = s1;        //这种写法如果在初始化的时候使用，会调用构造函数，通过赋初值的方式进行赋值。
                    //但如果不是初始化，而需要在任意时刻进行赋值，就需要对赋值运算符进行重载
    s3.show();

    return 0;
}
