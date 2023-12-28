// find sum of given number using for loop

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}



// continuous input unless user put a negative number using while loop;

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n > 0)
    {
        cout << n << endl;
        cin >> n;
    }
    
    return 0;
}



// do while loop

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    do{
        cout << n << endl;
        cin >> n;
    }while(n > 0);
    
    return 0;
}