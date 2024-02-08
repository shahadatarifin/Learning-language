//using if else

#include <iostream>
using namespace std;

int main(){
    char button;
    cout << "Enter a character: ";
    cin >> button;

    if (button == 'a'){
        cout << "Assalamu-Aalaikum" << endl;
    } else if (button == 'b'){
       cout << "Hello" << endl;
    } else if(button == 'c'){
       cout << "Hola" << endl;
    } else if(button == 'd'){
       cout << "Namaste" << endl;
    } else if (button == 'e'){
      cout << "Bonjour" << endl;
    } else {
     cout << "I am still learning more" << endl;
    }   
    return 0;
}



//Using switch

#include <iostream>
using namespace std;

int main(){
    char button;
    cout << "Enter a character: ";
    cin >> button;

    switch (button)
    {
    case 'a':
    cout << "Assalamu-Aalaikum" << endl;
    break;

    case 'b':
    cout << "Hello" << endl;
    break;

    case 'c':
    cout << "Hola" << endl;
    break;

    case 'd':
    cout << "Namaste" << endl;
    break;

    case 'e':
    cout << "Bonjour" << endl;
    break;
    
    default:
    cout << "I am still learning more" << endl;
    break;
    }

    return 0;
}



// implement a simple calculator using switch

#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    cout << "Input two numbers: ";
    cin >> num1 >> num2;

    char op;
    cout << "Input operator(+, -, *, /): ";
    cin >> op;

    switch (op){
        case '+':
        cout << num1+num2 << endl;
        break;

        case '-':
        cout << num1-num2 << endl;
        break;

        case '*':
        cout << num1*num2 << endl;
        break;

        case '/':
        cout << num1/num2 << endl;
        break;

        default:
        cout << "Error";
        break;
    }
    return 0;
}


