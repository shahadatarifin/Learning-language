#include <iostream>
using namespace std;

class student {
public:
    string name;
    int age;
    int uid;

    student (string s, int a, int u){
        name = s;
        age = a;
        uid = u;
    }

    void printinfo(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "uid: " << uid << endl << endl;
    }
};

int main(){
    student a("arifin", 18, 14288);
    a.printinfo();

    student b("shahadat", 19, 14289);
    b.printinfo();

}