#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int uid;
};

int main(){
    student i;

    cout << "Enter your name: ";
    cin >> i.name;
    cout << "Enter your UID: ";
    cin >> i.uid;

    cout << "Name: " << i.name << endl;
    cout << "UID: " << i.uid << endl;

    return 0;
}