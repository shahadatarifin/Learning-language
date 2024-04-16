#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if (head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);

    n->next = head;
    head = n;
}

void deletion(node* &head, int val){
    if (head == NULL) {
        return;
    }

    if (head->data == val) {
        node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }

    node* temp = head;
    while(temp->next != NULL && temp->next->data != val){
        temp = temp->next;
    }

    if (temp->next == NULL) {
        return;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}


void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}



int main(){
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    insertAtHead(head, 9);
    insertAtHead(head, 8);

    display(head);

    deletion(head, 1);

    display(head);



    return 0;
}