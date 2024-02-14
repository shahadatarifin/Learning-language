#include <iostream>
using namespace std;
 class A{
    public:
    ~A(){
        // statement
    }
 };

class A{
    A(){
        //constructor
        cout << "Constructor called";
    }
    // destructor
    ~A(){
        cout << "Destructor called";
    }
};

int main(){
    A.boj1;
    int x = 1;
    if(x){
        A.obj2;
    }
}