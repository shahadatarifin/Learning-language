// searching number in an array: is our given number is present in array then return the number, other wise return -1



// liner search
#include <iostream>
using namespace std;

int linearSearch(int n, int array[], int e){
    for(int i = 0; i < n; i++){
        if (e == array[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    int array[n];
    
    cout << "Enter the elements of array: " << endl;;
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int e;
    cout << "Enter the element you want to search: " << endl;
    cin >> e;

    cout << "number found at position: " << linearSearch(n, array, e) << endl;

    return 0;
}



// binary search
#include <iostream>
using namespace std;

int binarySearch(int n, int arr[], int e){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start + end)/2;

        if (arr[mid] == e){
            return mid;
        }else if(arr[mid] > e){
            end = mid - 1;
        }else if(arr[mid] < e){
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n, e;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of arary: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element you want to search: " << endl;
    cin >> e;

    cout << "number found at position: " << binarySearch(n, arr, e) << endl;

    return 0;
}


