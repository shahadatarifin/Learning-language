#include <iostream>
using namespace std;
#define n 6

int main(){
    int arr[n] = {12, 45, 23, 51, 19, 8};
    
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i-1;
        
        while(arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }

    return 0;
}