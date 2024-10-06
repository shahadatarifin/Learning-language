#include <iostream>
using namespace std;

int main(){

    int a = 4;                                                          // Basic Example
    int *ptr = &a;
    cout << "The value of a is: " << *ptr << endl << endl;

    int *p = new int(10);                                               // 'new' keyword
    cout << "The value at address p is: " << *p << endl << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;                                                    //
    arr[2] = 30;
    cout << "The value of arr[0] is : " << arr[0] << endl;
    cout << "The value of arr[1] is : " << arr[1] << endl;
    cout << "The value of arr[2] is : " << arr[2] << endl << endl;

    int *ARRAY = new int[3];                                            
    ARRAY[0] = 10;
    ARRAY[1] = 20;
    ARRAY[2] = 30;
    delete [] ARRAY;                                                      //
    cout << "The value of ARRAY[0] is : " << ARRAY[0] << endl;
    cout << "The value of ARRAY[1] is : " << ARRAY[1] << endl;
    cout << "The value of ARRAY[2] is : " << ARRAY[2] << endl;

    return 0;
}