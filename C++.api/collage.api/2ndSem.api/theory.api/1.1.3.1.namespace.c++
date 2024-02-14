#include <iostream>
using namespace std;

namespace first_sapce{
    void func(){
        cout << "Inside first space" << endl;
    }
}

namespace second_space{
    void func(){
        cout << "Inside second space" << endl;
    }
}
int main(){
    second_space::func();
    first_sapce::func();
    return 0;
}