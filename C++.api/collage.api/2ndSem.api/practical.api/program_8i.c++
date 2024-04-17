#include <iostream>
using namespace std;
#define n 5

class stack{
    private:
    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top == -1){
            cout << "No element in the stack" << endl;
            return -1;
        }
        return arr[top];
    }

    void displayStatus(){
        if(top == -1){
            cout << "Stack is empty" << endl;
        }else if(top == n-1){
            cout << "Stack is full" << endl;
        }else{
            cout << "Stack is not either empty or full" << endl;
        }
    }
};

int main(){
    stack st;

    char choise;

    do{
        cout << "Stack operation manue: " << endl;
        cout << "a) push an element" << endl;
        cout << "b) pop an element" << endl;
        cout << "c) Display top value" << endl;
        cout << "d) Display stack status" << endl;
        cout << "e) Quit" << endl << endl;
        cout << "enter your choise: ";
        cin >> choise;

        switch (choise)
        {
        case 'a':
            cout << "Enter element you want to push: ";
            int e;
            cin >> e;
            st.push(e);
            break;
        
        case 'b':
            st.pop();
            break;

        case 'c':
            cout << "Top value of the stack: " << st.Top() << endl; 

        case 'd':
            st.displayStatus();
            break;

        case 'e':
            cout << "exiting the program..." << endl;
            break;
        
        default:
            cout << "Invalid choise, please enter a valid option" << endl;
            break;
        }
    } while( choise != 'e');
    

    return 0;
}