#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int uid;  

    void printinfo(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "uid: " << uid << endl << endl;
    }
};

int main(){
    student a[2];

    for(int i=0; i<=2; i++){
        cout << "Info of student " << i+1 << ": " << endl;
        cout << "Name: ";
        cin >> a[i].name;

        cout << "Age: ";
        cin >> a[i].age;

        cout << "UID: ";
        cin >> a[i].uid;
        
        cout << endl;
    }

    cout << endl << endl << endl;
    for(int i=0; i<=2; i++){
        a[i].printinfo();
    }

    return 0;
}