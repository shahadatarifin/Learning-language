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

    Complex(){                                                                  // Constructor
        r = 0;
        c = 0;
    }    
};

int main(){
    
    Complex c;
    c.getData();
    
    return 0;
}

// Constructor is a special member function with same name as of the class which is used to initializ the objects of its class
// It is automatically invoked whenever an object is created