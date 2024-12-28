#include <iostream>
using namespace std;

int main(){
    int a = 100, b = 15;
    
    int sum = a + b;
    cout << "Summition is: " << sum << endl;

    int sub = a - b;
    cout << "Subtraction is: " << sub << endl;

    int mul = a * b;
    cout << "Multiplication is: " << mul << endl;

    float div = (float) a / b;
    cout << "Division is: " << div << endl;

    int rem = a % b;
    cout << "Remainder is: " << rem << endl;

    return 0;
}