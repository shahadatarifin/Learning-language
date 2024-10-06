#include <iostream>
using namespace std;

class complex{                                                                  // this class is just for an example
    int real, imaginary;

public:
    void setData(int a, int b);
    void getData()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imaginary << endl;
    }
};

void complex :: setData(int a, int b)
{
    real = a;
    imaginary = b;
}
int main()
{
    // complex obj;
    // complex *ptr = &obj;
    // (*ptr).setData(3, 5);
    // (ptr).getData();

    complex *ptr = new complex;
    ptr -> setData(3, 5);
    ptr -> getData();
    return 0;
}