// pointer in operator and arrow operator
#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The Imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(2, 3);//is exactly same as
    // ptr->setData(2, 3);
    // ptr->getData();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    // (*ptr).setData(2, 3);//is exactly same as
    ptr1->setData(2, 3);
    ptr1->getData();
    return 0;
}