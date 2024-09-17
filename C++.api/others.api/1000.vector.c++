#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vect1;
    int element;

    for(int i = 0; i < 4; i++){
        cout << "Enter the element to add in the vector: ";
        cin >> element;
        vect1.push_back(element);
    }

    cout << "Size of vect1: " << vect1.size() << endl;

    cout << "The elements in vect1 is: ";
    for(int i = 0; i < vect1.size(); i++){
        cout << vect1[i] << " ";
    }
    cout << endl;

    return 0;
}