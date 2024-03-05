// print maximum and minimul elements of an array
#include <iostream>
#include <climits>
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

    int maximum = INT_MAX;
    int minimum = INT_MIN;

    for(int i = 0; i < n; i++){
        if (array[i] < maximum){
            maximum = array[i];
        }else if(array[i] > minimum){
            minimum = array[i];
        }
    }

    cout << "Maximum number of array is: " << maximum << endl;
    cout << "Minimum number of array is: " << minimum << endl;

    return 0;
}