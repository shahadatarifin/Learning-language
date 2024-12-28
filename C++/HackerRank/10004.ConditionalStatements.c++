#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "one" << endl;
    } else if (n == 2) {
        cout << "two" << endl;
    } else if (n == 3) {
        cout << "three" << endl;
    } else if (n == 4) {
        cout << "four" << endl;
    } else if (n == 5) {
        cout << "five" << endl;
    } else if (n == 6) {
        cout << "six" << endl;
    } else if (n == 7) {
        cout << "seven" << endl;
    } else if (n == 8) {
        cout << "eight" << endl;
    } else if (n == 9) {
        cout << "nine" << endl;
    } else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}


// proper code 
#include <iostream>
using namespace std;

int main(){
    int n;

    while (true) {
        cin >> n;

        if (n > 9) {
            cout << "Greater than 9" << endl;
            break; // exit the loop if n is greater than 9
        } else if (n == 1){
            cout << "one" << endl;
        } else if (n == 2){
            cout << "two" << endl;
        } else if (n == 3){
            cout << "three" << endl;
        } else if (n == 4){
            cout << "four" << endl;
        } else if (n == 5){
            cout << "five" << endl;
        } else if (n == 6){
            cout << "six" << endl;
        } else if (n == 7){
            cout << "seven" << endl;
        } else if (n == 8){
            cout << "eight" << endl;
        } else if (n == 9){
            cout << "nine" << endl;
        } else if (n < 1){
            cout << "Less than 1" << endl;
        } else {
            cout << "You put the wrong value" << endl;
        }
    }

    return 0;
}
