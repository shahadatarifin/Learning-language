// Given an array all of size n. For every i from 0 to n-1 output max(a[0], a[1],..., a[i]).
#include <iostream>
#include <climits>
using namespace std;

int maximum(int n, int arr[]){
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        mx = max(mx, arr[i]);

        // if (arr[i] > max){
        //     max = arr[i];
        // }
    }
    return mx;
}

int main(){
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Maximum number of array is: " << maximum(n, arr) << endl;

    return 0;
}