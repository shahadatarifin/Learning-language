// sum of n natural number;
#include <iostream>
using namespace std;

int sum(int n){
    int a = 0;
    for(int i = 1; i <= n; i++){
        a = a+i;
    }
    return a;
}

int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}


// Check pythagorian triplet
#include <iostream>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x, max(y, z));
    int b, c;

    if (a == x){
        b = y;
        c = z;
    }else if( a == y){
        b = x;
        c = z;
    }else{
        b = x;
        c = y;
    }

    if(a*a == b*b + c*c){
        return true;
    }else{
        return false;
    }
}

int main(){
    int x, y, z;
    cout << "Enter the value of x, y, z: ";
    cin >> x >> y >> z;

    if (check(x,y,z) == true){
        cout << "Pythagorian Triplet" << endl;
    } else{
        cout << "Not a pythagorian triplet" << endl;
    }

    return 0;
}