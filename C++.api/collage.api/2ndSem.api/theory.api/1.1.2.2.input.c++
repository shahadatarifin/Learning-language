#include <iostream>
using namespace std;

int main(){
    int age;
    string name;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter you age: ";
    cin >> age;

    cout << "Hi, " << name << endl;
    cout << "You are " << age << " years old" << endl;

    return 0;
}