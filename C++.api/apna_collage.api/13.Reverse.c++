// write a program to revarse a number
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int reverse = 0;

    while(n > 0){
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n = n/10;
    }
    cout << reverse << endl;
    return 0;
}



//Write a program to check if a given number is Armstrong number or not
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int original_n = n;
    while(n > 0){
        int lastDigit = n%10;
        sum = sum + pow(lastDigit, 3);
        n = n/10;
    }
    if(sum == original_n){
        cout << "Armstrong Number";
    }else{
        cout << "Not Armstrong Number";
    }
    return 0;
}
