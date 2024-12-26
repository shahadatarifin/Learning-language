#include <iostream>
using namespace std;

class Complex{
    int r, c;


    public:
    void setData(int n1, int n2){
        r = n1;
        c = n2;
    }

    void getData(){
        cout << "Your number is : " << r << " + " << c << "i" << endl;
    }

    friend Complex sumComplex(Complex obj1, Complex obj2);
};

Complex sumComplex (Complex obj1, Complex obj2){
    Complex obj3;
    obj3.setData((obj1.r + obj2.r), (obj1.c + obj2.c));
    return obj3;
}

int main(){
    
    Complex c1, c2;
    c1.setData(1, 4);
    c1.getData();
    c2.setData(3, 5);
    c2.getData();

    Complex sum = sumComplex(c1, c2);
    sum.getData();
    
    return 0;
}