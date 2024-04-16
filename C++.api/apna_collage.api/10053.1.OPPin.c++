#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int uid;
};

int main(){
    student a;
    a.name = "Shahadat";
    a.age = 18;
    a.uid = 14288;

    student b;
    b.name = "Arifin";
    b.age = 19;
    b.uid = 14289;

    student c;
    c.name = "Onim";
    c.age = 20;
    c.uid = 14290;

    cout << "info of student a: " << endl << "name: " << a.name << endl << "age: " << a.age << endl << "uid: " << a.uid << endl << endl;
    cout << "info of student b: " << endl << "name: " << b.name << endl << "age: " << b.age << endl << "uid: " << b.uid << endl << endl;
    cout << "info of student c: " << endl << "name: " << c.name << endl << "age: " << c.age << endl << "uid: " << c.uid << endl << endl;
    
    return 0;
}