#include <iostream>
using namespace std;

class cube{
    public:
    int side;
    int getVolume();
};
    int cube::getVolume(){
        return side * side * side;
    }

int main(){
    cube ob1;
    cout << "enter the side of ob1: ";
    cin >> ob1.side;
    cout << "the volume of ob1 " << ob1.getVolume() << endl;
    return 0;
}