#include <iostream>
using namespace std;

class operation{
    int a, b, add, sub;

    public:
    void get();
    void sum();
    void difference();
};

inline void operation::get(){
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
}

inline void operator::sum(){
    add = a+b;
    cout << "Addition of two numbers: " << a+b << endl;
}

inline void operator::difference(){
    sub = a-b;
    cout << "Differnce of two numbers: " << a-b << endl;
}

int main(){
    cout << "progrum using inline function " << endl;
    operator s;
    s.get();
    s.sum();
    s.difference();
    return 0;
}