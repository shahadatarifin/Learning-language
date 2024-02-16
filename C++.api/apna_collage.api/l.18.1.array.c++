#include <iostream>
using namespace std;

int main(){
    int array1[4];
    array1[0] = 10;
    array1[1] = 20;
    array1[2] = 30;
    array1[3] = 40;

    int array2[4] = {10, 20, 30, 40};

    cout << array1[2] << endl;
    cout << array2[3] << endl;

    return 0;
}