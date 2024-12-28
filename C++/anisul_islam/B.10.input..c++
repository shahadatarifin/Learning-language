#include <iostream>
using namespace std;

int main(){
    
    char name[20];
    int age;
    float sgpa;

    cout << "Enter you name: ";
    cin >> name;

    cout << "Enter you age: ";
    cin >> age;
    
    cout << "Enter you sgpa: ";
    cin >> sgpa;

    cout << endl << "Hello, " << name << endl;
    cout << "You are " << age << " years old" << endl;
    cout << "Your sgpa is " << sgpa << endl;


    return 0;
}