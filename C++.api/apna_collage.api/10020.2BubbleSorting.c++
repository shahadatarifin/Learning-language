#include <iostream>
using namespace std;
 int main(){
    int n;
    cout << "Enter elements number of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "sorting using bubble sort...." << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    return 0;
 }