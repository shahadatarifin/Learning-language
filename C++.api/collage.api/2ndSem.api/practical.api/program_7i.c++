// a) Create a linked list

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

void insert(node* &head, int val){
    node* n = new node(val);
    node* temp = head;

    if(head == NULL){
        head = n;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp->next != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    node* head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);

    display(head);
    return 0;
}


// b) Search an element
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

void insert(node* &head, int val){
    node* n = new node(val);
    node* temp = head;

    if(head == NULL){
        head = n;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

int search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
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

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    
    display(head);

    cout << search(head, 2) << endl;
    return 0;
}

