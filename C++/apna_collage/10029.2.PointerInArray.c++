#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    cout << *arr << endl << endl << endl;

    for(int i = 0; i < 4; i++){
        cout << *(arr + i) << "\t";
    }
    return 0;
}