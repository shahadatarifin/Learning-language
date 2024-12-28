// a) Insert a new element at end as well as at a given position
#include <iostream>
using namespace std;

int main(){
    int n, a[50], e, p, end;

    cout << "How may elements you want to enter: " << endl;
    cin >> n;

    cout << "enter the elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << "enter the element you want to enter: " << endl;
    cin >> e;

    cout << "enter the position where the element is to be inserted: " << endl;
    cin >> p;

    for(int k = n; k >= p; k--){
        a[k+1] = a[k];
    }


    a[p] = e;

    cout << "the elements are as: " << endl;
    for(int i = 0; i <= n; i++){
        cout << a[i] << "\t";
    }

    cout << endl;

    cout << "enter the element you want to insert at the end: ";
    cin >> end;

    a[n+1] = end;

    cout << "after adding new elements in array: " << endl;
    for(int i = 0; i <= n+1; i++){
        cout << a[i] << "\t";
    }

    return 0;
}