#include <iostream>
#include <cmath> 
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    int sum = a + b;
    int sub = abs(a - b);
    
    cout << sum << endl << sub << endl;
    
    return 0;
}