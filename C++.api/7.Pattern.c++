// Write a program to print a Rectangle pattern using stars '*' where, Columns are fixed & Rows should be given by user

#include <iostream>
using namespace std;

int main(){
    int row;
    cout << "Input rows: ";
    cin >> row;

    for(int i = 1; i <= row; i++){
        cout << "*" << "*" << "*" << "*" << endl;
    }

    return 0;
}



// Write a program to print a Rectangle pattern using stars '*' where, Rows & columns should be given by user

#include <iostream>
using namespace std;

int main(){
    int row, column;
    cout << "Input rows & columns: ";
    cin >> row >> column;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}



/* Hollow Rectangle Pattern

* * * * * * * * * * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
*                 * 
* * * * * * * * * * 

*/
#include <iostream>
using namespace std;

int main(){
    int row, column;
    cout << "Input rows & columns: ";
    cin >> row >> column;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if (i == 1 || i == row || j == 1 || j == column){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}



/*  Inverted half pyramid

    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}



/*  Half Pyramid After 180° Rotation
        *
       **
      ***
     ****
    *****
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n-i){
                cout << " ";
            }else{
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}

// Or

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n; j++){
            if (j < i){
                cout << " ";
            }else{
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}



/* Half Pyramid Using Numbers
    1 
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5 
*/
#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    for(int i = 1; i <= number; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}



/*  Floyd's Triangle

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
*/
#include <iostream>
using namespace std;

int main(){
    int count = 1;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}



// Butterfly Pattern
















/* Inverted pattern

    1 2 3 4 5 
    1 2 3 4 
    1 2 3 
    1 2 
    1 
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 1;
    cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << count << " ";
            count++;
        }
        count = 1;
        cout << endl;
    }
    return 0;
}



/*  0-1 pattern
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if((i+j)%2 == 0){
                cout << "1 ";
            }else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}



/* Rhombus pattern

        * * * * * 
       * * * * * 
      * * * * * 
     * * * * * 
    * * * * * 
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for(int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}



/* Number Pyramid
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 

*/
#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n-i){
                cout << " ";
            }else{
                cout << count << " ";
                count++;
            }
        }
        cout << endl;
        count = 1;
    }
    return 0;
}