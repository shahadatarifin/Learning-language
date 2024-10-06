#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int *ptr = &a;
    cout << ptr << endl;
    cout << &a << endl;
    cout << *ptr << endl;
    return 0;
}