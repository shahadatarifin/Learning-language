#include <iostream>
using namespace std;

void print(int n){
    cout << n << endl;
}

int add (int a, int b){
    print(a);
    print(b);
    return a+b;
}

int main(){
    int num1 = 3;
    int num2 = 2;
    cout << add(num1, num2) << endl;
    return 0;
}