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
    
    // Complext c1;
    // c1.setData(1, 5);
    // c1.getData();

    // Complext c1;
    // Complext *ptr = &c1;
    // (*ptr).setData(1, 5);
    // (*ptr).getData();

    // Complext *ptr = new Complext;
    // (*ptr).setData(1, 5);
    // (*ptr).getData();

    // Complext *ptr = new Complext;
    // ptr->setData(1, 5);
    // ptr->getData();


    
    
    return 0;
}