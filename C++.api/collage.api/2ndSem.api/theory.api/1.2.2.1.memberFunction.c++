// Defining a Member function inside the class

#include <iostream>
using namespace std;

class room{
    public:
    int volume(int a, int b, int c){
        return a*b*c;
    }

    int area(int a, int b){
        return a*b;
    }
};

int main(){
    int length, breadth, height;
    
    cout << "Enter length of your room: ";
    cin >> length;
    cout << "Enter breadth of your room: ";
    cin >> breadth;
    cout << "Enter height of your room: ";
    cin >> height;

    room obj1;
    int volume = obj1.volume(length, breadth, height);

    cout << "volume of the room is : " << volume << endl;

    room obj2;
    int area = obj2.area(length, breadth);

    cout << "are of the room is : " << area << endl;

    return 0;
}