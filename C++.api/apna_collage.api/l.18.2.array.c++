#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++){
        cout << "array[" << i << "] : ";
        cin >> array[i];
    }

    cout << "array[" << n << "] = {";
    for (int i = 0; i < n; i++){
        if (i < n-1){
            cout << array[i] << ", ";
        }else{
            cout << array[i];
        }
    }

    cout << "}" << endl;
    return 0;
}