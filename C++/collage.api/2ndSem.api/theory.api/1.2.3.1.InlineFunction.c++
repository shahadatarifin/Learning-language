#include <iostream>
using namespace std;

inline int add(int x, int y){
    return x+y;
}

int main(){
    cout << "sum is " << add(10, 20) << endl;
    cout << "sum is " << add(10, 12) << endl;
    cout << "sum is " << add(10, 15) << endl;
    return 0;
}