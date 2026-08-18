/*---------------------------------------------------------------------------------*/
//运算符重载为成员函数：实现自加运算，a++、++a
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
        friend ostream & operator<<(ostream & os, const Complex & c);

        Complex &operator++()     //++运算是单目运算符,++前置，如++a
        {
            this->real++;
            this->image++;
            return *this;
        }
        Complex operator++(int)     //++运算是双目运算符,++后置，如a++
        {
            Complex temp = *this;
            this->real++;
            this->image++;
            return temp;
        }
        
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

int main(){
    Complex c1(3, 4);
    Complex c2(2, -3);
    cout << c1 << endl;
    cout << c2 << endl;

    cout << "---------------------- " << endl;
    cout << "c1=" << c1 <<",++c1 = " << ++c1 << endl;
    cout << "c2=" << c2 <<",c2++ = " << c2++ << endl;
    cout << "---------------------- " << endl;
    cout << "c1=" << c1 <<",c1.operator++() = " << c1.operator++() << endl;
    cout << "c2=" << c2 <<",c2.operator++(int) = " << c2.operator++(1) << endl;


    return 0;
}
