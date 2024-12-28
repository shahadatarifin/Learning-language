// 1. Default constructor
// 2. Parameterized constructor
// 3. Copy constructor


// default constructor
#include <iostream>
using namespace std;

class construct{
    public:
    int a, b;
    construct(){
        a = 10;
        b = 20;
    }
};

int main(){
    construct c;

    cout << "a: " << c.a << endl;
    cout << "b: " << c.b << endl;

    return 0;
}


// Paremeterized constructor
#include <iostream>
using namespace std;

class point{
    private:
    int a, b;

    public:
    point(int x, int y){
        a = x;
        b = y;
    }

    int getA(){
        return a;
    }

    int getB(){
        return b;
    }
};

int main(){
    point p(10, 20);

    cout << "p1: " << p.getA() << endl;
    cout << "p2: " << p.getB() << endl;

    return 0;
}