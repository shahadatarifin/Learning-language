#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout << "Displaying base class variable vab_base: " << var_base << endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout << "Displaying base class variable var_base: " << var_base << endl;
            cout << "Displaying derived class variable var_derived " << var_derived << endl;
        }
};

int main(){
    
    BaseClass *base_class_pointer;
    BaseClass base_obj;
    DerivedClass derived_obj;
    base_class_pointer = &derived_obj;                          // Pointing base class pointer to derived class
    
    base_class_pointer->var_base = 20;
 // base_class_pointer->var_derived = 200;                      // will throw an error
    base_class_pointer->display();                              // This will print only var_base


    DerivedClass *derived_class_pointer;
    derived_class_pointer = &derived_obj;                       // Pointing derived class pointer to derived class
    derived_class_pointer->var_derived = 40;
    derived_class_pointer->var_base = 400;
    derived_class_pointer->display();


    return 0;
}