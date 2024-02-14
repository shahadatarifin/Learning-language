#include <iostream>
using namespace std;

class parent{
    public:
    int id_p;
};

class child: public parent{
    public:
    int id_c;
};

int main(){
    
    child obj1;

    obj1.id_c = 18;
    obj1.id_p = 40;

    cout << "Child ID is: " << obj1.id_c << endl;
    cout << "Parent ID is: " << obj1.id_p << endl;

    return 0;
}

