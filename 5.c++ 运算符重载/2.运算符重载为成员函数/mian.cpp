/*---------------------------------------------------------------------------------*/
//运算符重载为成员函数：实现复数加法+、实现复数相等==
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
        Complex operator+(const Complex & c)
        {
            Complex result;
            result.real = this->real + c.real;
            result.image = this->image + c.image;
            return result;
        }

        bool operator==(const Complex & c)
        {
            return this->real == c.real && this->image == c.image;
        }
};

int main(){
    Complex c1(3, 4);
    c1.show();
    Complex c2(2, -3);
    c2.show();

    Complex c3 = c1.add(c2);    //利用函数的方法实现加法，但这种方法可读性较差
    c3.show();

    Complex c4 = c1 + c2;       //利用运算符重载实现复数加法，隐式调用c1.operator+(c2);
    c4.show();

    Complex c5 = c1.operator+(c2); //利用运算符重载实现复数加法，显式调用c1.operator+(c2);
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
