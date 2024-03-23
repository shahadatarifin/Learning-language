#include<iostream>
using namespace std;

int main() {
    int a[10], n, temp;

    cout << "Enter the size of an array: ";
    cin >> n;

    cout << "Enter the elements in array a[" << n << "]:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++) {
        temp = a[i];
        int j = i - 1;
        while(j >= 0 && temp < a[j]) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }

    cout << "The elements after sorting: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << "\t";
    
    return 0;
}
