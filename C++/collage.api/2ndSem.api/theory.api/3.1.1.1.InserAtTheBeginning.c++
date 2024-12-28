#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* insertAtBeginning(Node* head, int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = head;
    head = newNode;
    return head;
};

void printList(Node *head){
    while (head != nullptr){
        cout << head -> data << " ";
        head = head -> next;
        cout << endl;
    }
}

int main(){
    Node *head = nullptr;
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 10);
    head = insertAtBeginning(head, 15);

    cout << "Likned List : " << endl;
    printList(head);

    return 0;
}