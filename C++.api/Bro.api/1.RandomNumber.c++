//Random number between 1-100

#include <iostream>
//#include <ctime>
using namespace std;

int main(){

    srand(time(NULL));                           // not truly random, but close
    int num = (rand() % 100) + 1;

    cout << num << endl;

    return 0;
}



// pseudo random number
#include <iostream>
using namespace std;

int main(){

    srand(time(NULL));
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}



// Random event generator
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int randNum = (rand() % 5);

    switch(randNum){
        case 1: cout << "You win an Phone " << endl;
        break;
        case 2: cout << "You win a Laptop " << endl;
        break;
        case 3: cout << "You win a watch " << endl;
        break;
        case 4: cout << "You win a TV " << endl;
        break;
        case 0: cout << "Sorry! " << endl;
        break;
    }
    return 0;
}



// Number guessing game
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int num;
    int guess;
    int tries = 1;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "***** NUMBER GUESSING GAME *****" << endl;

    do{
        cout << "Guess a number between 1 to 100: ";
        cin >> guess;
        tries++;
        if(guess > num){
            cout << "Too high!" << endl;
        }else if(guess < num){
            cout << "Too low!" << endl;
        }else{
            cout << endl <<"CURRECT!" << endl;
            cout << "Tries: " << tries << endl;
        }

    }while(num != guess);
    cout << "**************************************************" << endl;

    return 0;
}



//