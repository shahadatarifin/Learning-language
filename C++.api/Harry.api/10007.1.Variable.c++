#include <iostream>
using namespace std;

int c = 69;                 // Global variable

int main(){
    
    int a = 5, b = 4;
    int c = a + b;

    cout << "Sum of a and b is: " << c << endl;
    cout << "Global variable c is: " << ::c << endl;

    return 0;
}