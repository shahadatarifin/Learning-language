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
#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 99.99;
    int choice = 0;

    do {
        cout << "\n******************" << endl;
        cout << "1. show balance" << endl;
        cout << "2. deposit money" << endl;
        cout << "3. withdraw money" << endl;
        cout << "4. exit" << endl;
        cout << "******************" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice) {
            case 1:
                showBalance(balance);
                break;

            case 2:
                balance += deposit();
                showBalance(balance);
                break;

            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;

            case 4:
                cout << "Thanks for visiting" << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << "Your balance is : $" << setprecision(2) << fixed << balance << endl;
}

double deposit() {
    double amount = 0;

    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount > 0) {
        return amount;
    } else {
        cout << "Invalid amount. Deposit unsuccessful." << endl;
        return 0;
    }
}

double withdraw(double balance) {
    double amount = 0;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance || amount < 0) {
        cout << "Invalid amount. Withdrawal unsuccessful." << endl;
        return 0;
    } else {
        return amount;
    }
}