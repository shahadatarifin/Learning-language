#include <iostream>
using namespace std;

class Base{
    public:
    void displayBase(){
        cout << "Base class" << endl;
    }
};

class Derived : public Base{
    public:
    void displayDerived(){
        cout << "Derived class";
    }
};

int main(){
    Derived derivedObj;
    derivedObj.displayBase();
    derivedObj.displayDerived();

    return 0;
}