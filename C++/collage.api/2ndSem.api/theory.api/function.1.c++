#include <iostream>
using namespace std;

class square{
    public:
    int side;
    int getArea(){
        return  side * side;
    }
};

int main(){
    square ob1;
    cout << "enter the side of ob1: ";
    cin >> ob1.side;
    cout << "the area of ob1 " << ob1.getArea() << endl;
    return 0;
}