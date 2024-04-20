#include <iostream>
using namespace std;

int main(){
    int n, arr[50], p;

    cout << "Enter the size of array: " << endl;
    cin >> n;

    cout << "Enter the elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Array: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;

    cout << "Enter the possition you want to delete: " << endl;
    cin >> p;

    for(int i=p; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    cout << "New array: " << endl;
    for(int i=0; i<n-1; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}