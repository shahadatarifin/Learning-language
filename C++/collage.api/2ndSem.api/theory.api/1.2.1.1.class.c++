#include <iostream>
using namespace std;

class person{
    public:
    string name;
    int number;
};

int main(){
    person obj;

    cout << "Enter your name: ";
    cin >> obj.name;
    cout << "Enter your UID: ";
    cin >> obj.number;
    
    cout << "Name: " << obj.name << endl;
    cout << "UID: " << obj.number << endl;

    return 0;
}



/*
    A class is user defined data type defined in C++ using keyword class followed by the name of class.
    The body of class is defined inside the curly brackets and terminated by a semicolon at the end.

*/