#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int uid;
};

int main(){
    student A;
    student B;

    A.name = "Shahadat";
    A.uid = 14288;

    B.name = "Washy";
    B.uid = 14300;

    cout << "Student name: " << A.name << " uid: " << A.uid << endl;
    cout << "Student name: " << B.name << " uid: " << B.uid << endl;
}