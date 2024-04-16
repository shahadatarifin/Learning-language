#include <iostream>
using namespace std;

class student {
public:
    string name;
    int age;
    int uid;
};

int main() {
    student a[3];
    a[0].name = "Shahadat";
    a[0].age = 18;
    a[0].uid = 14288;

    a[1].name = "Arifin";
    a[1].age = 19;
    a[1].uid = 14289;

    a[2].name = "Onim";
    a[2].age = 20;
    a[2].uid = 14290;

    cout << "info of student a[0]: " << endl << "name: " << a[0].name << endl << "age: " << a[0].age << endl << "uid: " << a[0].uid << endl << endl;
    cout << "info of student a[1]: " << endl << "name: " << a[1].name << endl << "age: " << a[1].age << endl << "uid: " << a[1].uid << endl << endl;
    cout << "info of student a[2]: " << endl << "name: " << a[2].name << endl << "age: " << a[2].age << endl << "uid: " << a[2].uid << endl << endl;

    return 0;
}
