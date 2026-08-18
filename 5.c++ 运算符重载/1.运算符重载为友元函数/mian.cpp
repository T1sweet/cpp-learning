/*---------------------------------------------------------------------------------*/
//运算符重载为友元函数：实现复数加法+、实现复数相等==
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
        Complex add(const Complex & c)
        {
            Complex result;
            result.real = this->real + c.real;
            result.image = this->image + c.image;
            return result;
        }
        friend Complex operator+(const Complex & c1, const Complex & c2);
        friend bool operator==(const Complex & c1, const Complex & c2);
};

Complex operator+(const Complex & c1, const Complex & c2)
{
    Complex result;
    result.real = c1.real + c2.real;
    result.image = c1.image + c2.image;
    return result;
}

bool operator==(const Complex & c1, const Complex & c2)
{
    return c1.real == c2.real && c1.image == c2.image;
}



int main(){
    Complex c1(3, 4);
    c1.show();
    Complex c2(2, -3);
    c2.show();

    Complex c3 = c1.add(c2);    //利用函数的方法实现加法，但这种方法可读性较差
    c3.show();

    Complex c4 = c1 + c2;       //利用运算符重载实现复数加法，隐式调用operator+(c1, c2)
    c4.show();

    Complex c5 = operator+(c1, c2); //利用运算符重载实现复数加法，显式调用operator+(c1, c2)
    c5.show();

    if(c1 == c2)
        cout << "c1 = c2" << endl;
    else
        cout << "c1 != c2" << endl;

    if(c4 == c5)
        cout << "c4 = c5" << endl;
    else
        cout << "c4 != c5" << endl;

    return 0;
}
