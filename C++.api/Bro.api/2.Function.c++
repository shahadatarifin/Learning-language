// Happy birthday song
#include <iostream>
using namespace std;

void HappyBirthday();

int main(){

    HappyBirthday();
    HappyBirthday();
    HappyBirthday();

    return 0;
}

void HappyBirthday(){
    cout << "Happy birthday to you" << endl;
    cout << "Happy birthday to you" << endl;
    cout << "Happy birthday to dear Onim" << endl;
    cout << "Happy birthday to you \n" << endl;
}



//
#include <iostream>
using namespace std;

void HappyBirthday(string a, int b);

int main(){
    string name = "Arifn";
    int age = 20;

    HappyBirthday(name, age);

    return 0;
}

void HappyBirthday(string a, int b){
    cout << "Happy birthday " << a << endl;
    cout << "You are " << b << " years old" << endl;
}


// RETURN
#include <iostream>
using namespace std;

double square(double a);
double cube(double a);

int main(){
    double length = 10.00;

    double area = square(length);
    double volume = cube(length);
    
    cout << "Area: " << area << " cm^2" << endl;
    cout << "Volume: " << volume << " cm^3" << endl;
    return 0;
}

double square(double a){
    return a * a;
}

double cube(double a){
    return a * a * a;
}



// String
#include <iostream>
using namespace std;

string fullName(string a, string b);

int main(){
    string firstName = "Shahadat";
    string lastName  = "Arifin";

    string name = fullName (firstName, lastName);

    cout << "Hello " << name << endl;
    return 0;
}

string fullName(string a, string b){
    return a + " " + b;
}



// Overloaded Function
#include <iostream>
using namespace std;

void pizza();
void pizza (string topping1);
void pizza (string topping1, string topping2);

int main(){
    pizza();
    pizza("pepperoni");
    pizza("pepperoni", "mashroom");

    return 0;
}

void pizza(){
    cout << "Here is you pizza" << endl;
}
void pizza(string topping1){
    cout << "Here is your " << topping1 << " pizza" << endl;
}
void pizza(string topping1, string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza" << endl;
}


/*
Variable Scope
    - Local Variables = declared inside a function or block {}
    - Global Variables = declared outside of all functions
*/



// Banking Practice Program