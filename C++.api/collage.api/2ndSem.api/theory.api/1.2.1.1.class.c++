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