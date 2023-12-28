/*I have two girlfrieds named Tania & Jemim.
# If my savings are more than 5000 - I will go with Tania. 
#If my savings are more then 2000 - I will go with Jemim. 
#If my savings are less than 2000 - I will go with my friends. 
#If my savings are more then 10000 - I will go on a roadtrip with Tania 
                                    otherWise I will go to shopping with her.*/ 

#include <iostream>
using namespace std;

int main(){
    int savings;
    cout << "Input your savings: ";
    cin >> savings;

    if(savings > 5000){
        cout << "Tania" << endl;
        if(savings > 10000){
            cout << "Roadtrip with Tania" << endl;
        }else {
            cout << "Shopping with Tania" << endl;
        }
    }else if (savings > 2000){
        cout << "Jemim" << endl;
    }else {
        cout << "Friend" << endl;
    }
    return 0;
}