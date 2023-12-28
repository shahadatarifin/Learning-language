/*
# I can't go out on even days
# If my pocket money is end then I also can't go out
*/

#include <iostream>
using namespace std;

int main(){
    int pocketMoney = 3000;

    for(int date = 1; date <= 30; date++){
        if(date%2 == 0){
            continue;
        }

        cout << date << " You can go out today" << endl;
        pocketMoney = pocketMoney - 300;
        
        if(pocketMoney == 0){
            break;
        }
    }
    
    return 0;
}



//write a program to cheack that the given number is odd or even

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i;
    for(i = 2; i < n; i++){
        if (n % i == 0){
            cout << "Not Prime" << endl;
            break;
        }    
    }
    if (i == n){
        cout << "Prime" << endl;
    }
    return 0;
}



// write a program to find those number which is not divisible by 3, between 1 to 100.

#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 100; i++){
        if(i%3 == 0){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}



// write a program to print all prime number between a and b

#include <iostream>
using namespace std;


int main(){
    int i, j, a, b;
    cin >> a >> b;
    
    for(i = a; i <= b; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0){
                break;
            }
        }
        if ( i == j){
            cout << j << ", ";
        }
    }
    return 0;
}