// show point, no show point
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a = 100, b = 15;
    
    cout << showpoint;
    float sum = a + b;
    cout << "Summition is: " << sum << endl;

    float sub = a - b;
    cout << "Subtraction is: " << sub << endl;

    cout << noshowpoint;                              
    float mul = a * b;
    cout << "Multiplication is: " << mul << endl;
    
    cout << noshowpoint;
    float div = a / b;
    cout << "Division is: " << div << endl;

    return 0;
}



// setpreseision & fixed
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a = 100.0, b = 15.0;
    
    cout << showpoint;
    cout << fixed;                                  // fixed
    cout << setprecision(2);                        // setprecision
    float sum = a + b;
    cout << "Summition is: " << sum << endl;

    float sub = a - b;
    cout << "Subtraction is: " << sub << endl;

    float mul = a * b;
    cout << "Multiplication is: " << mul << endl;
    
    cout << setprecision(20);                       // setprecision
    float div = a / b;
    cout << "Division is: " << div << endl;

    return 0;
}



// setw();
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a = 100, b = 15;
    
    int sum = a + b;
    cout << setw(20) << "Summition is: " << sum << endl;              // setw

    int sub = a - b;
    cout << setw(20) << "Subtraction is: " << sub << endl;            // setw

    int mul = a * b;
    cout << setw(20) << "Multiplication is: " << mul << endl;         // setw

    float div = (float) a / b;
    cout << setw(20) << "Division is: " << div << endl;               // setw

    int rem = a % b;
    cout << setw(20) << "Remainder is: " << rem << endl;              // setw

    return 0;
}