// searching number in an array: is our given number is present in array then return the number, other wise return -1
#include <iostream>
using namespace std;

int linearSearch(int n, int array[], int key){
    for(int i = 0; i < n; i++){
        if (key == array[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    int array[n];
    
    cout << "Enter elements of array[" << n << "]";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int key;
    cout << "key: ";
    cin >> key;

    cout << linearSearch(n, array, key) << endl;

    return 0;
}