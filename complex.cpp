#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex(int a = 0, int b = 0)
    {
        real = a;
        img = b;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    friend Complex subtract(Complex a, Complex b);
    // Another way of Operator Overloading
    friend ostream &o operator<<(ostream &o, Complex c);
    //friend is a third party function
    //Can not be defined in a class
    void display()
    {
        cout << "Complex Number: " << real << " + " << img << "i " << endl;
    }
};

int main()
{
    Complex c1(3, 5), c2(4, 7), c3;
    c1.display();
    c2.display();
    c3 = c1 + c2;
    c3.display();
    return 0;
}