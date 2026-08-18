/*---------------------------------------------------------------------------------*/
//输入输出运算符重载
#include <iostream>
using namespace std;

class Complex
{
    private:
        double real, image;
    public:
        Complex(double real=0, double image=0): real(real), image(image)
        {
            cout << "Complex constructor" << endl;
        }
        ~Complex()
        {
            cout << "Complex destructor" << endl;
        }
        void show()
        {
            if(image > 0)
            {
                if(image == 1)
                {
                    cout << real << "+i" << endl;     
                }
                else
                {
                    cout << real << "+" << image << "i" << endl;
                }
            }
            else if(image < 0)
            {
                if(image == -1)
                {
                    cout << real << "-i" << endl;
                }
                else
                {
                    cout << real << image << "i" << endl;
                }
            }
            else
            {
                cout << real << endl;
            }
        }
        Complex operator+(const Complex & c)
        {
            Complex result; 
            result.real = this->real + c.real;
            result.image = this->image + c.image;
            return result;
        }
        friend ostream & operator<<(ostream & os, const Complex & c);
        friend istream & operator>>(istream & is, Complex & c);
};

ostream & operator<<(ostream & os, const Complex & c)
{
    if(c.image > 0)
    {
        if(c.image == 1)
        {
            os << c.real << "+i" ;     
        }
        else
        {
            os << c.real << "+" << c.image << "i";
        }
    }
    else if(c.image < 0)
    {
        if(c.image == -1)
        {
            os << c.real << "-i";
        }
        else
        {
            os << c.real << c.image << "i";
        }
    }
    else
    {
        os << c.real;
    }
    return os;
}

istream & operator>>(istream & is, Complex & c)
{
    is >> c.real >> c.image;
    return is;
}

int main(){
    Complex c1(3, 4);
    c1.show();              //利用函数的方法实现输出，但这种方法可读性较差
    Complex c2(2, -3);
    c2.show();
    cout << "-----------------------" << endl;

    //注意：与常规运算符重载不同，一般输入输出函数不重载为成员函数，只能重载为普通函数，再作为友元函数调用
    operator<<(cout,c1) << endl;                //显式调用运算符重载函数，普通函数显式调用
    operator<<(cout,c1.operator+(c2)) << endl;  //显式调用运算符重载函数，普通函数显式调用，成员函数显式调用
    
    cout << "-----------------------" << endl;
    cout << c1 << endl;     //利用运算符重载实现输出，这种方法可读性较好
    cout << c2 << endl;

    cout << "-----------------------" << endl;
    cout << c1 << " + " << c2 << " = " << c1 + c2 << endl;

    cout << "****************输入一个复数：";
    Complex c3, c4;
    cin >> c3 >> c4;
    c3.show();
    c4.show();
    cout << "-----------------------" << endl;
    
    return 0;
}
 