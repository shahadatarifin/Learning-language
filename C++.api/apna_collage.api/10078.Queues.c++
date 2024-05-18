#include <iostream>
using namespace std;
#define n 10

class queue{
private:
    int* arr;
    int front;
    int back;

public:
    queue(){
        arr = new int[n];
        front = -1;  // Initialize front and back
        back = -1;
    }

    void enqueue(int x){
        if(back == n - 1){  // Check for queue overflow
            cout << "Queue overflow" << endl;
            return;
        }
        else if(front == -1){
            front = 0;
        }
        back++;
        arr[back] = x;
    }

    void dequeue(){
        if(front == -1 || front > back){
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }

    int peek() {
        if (front == -1 || front > back) {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main(){
    queue a;
    a.enqueue(10);
    a.enqueue(20);

    cout << a.peek() << endl;

    a.dequeue();
    cout << a.peek() << endl;

    a.dequeue();
    cout << a.peek() << endl;

    a.dequeue();  // Trying to dequeue when queue is empty
    cout << a.peek() << endl;

    return 0;
}
