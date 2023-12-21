//This code will contain the basic way to enter and delete elements in an a queue 
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void insertElementsQueue(Node *&, Node *&, int);
bool queue_empty(Node *);
void deleteElementsQueue(Node *&, Node *&, int &);

int main() {
    Node *front = NULL;
    Node *rear = NULL;

    int data;

    cout << "Enter a number: ";
    cin >> data;
    insertElementsQueue(front, rear, data);

    cout << "Enter a number: ";
    cin >> data;
    insertElementsQueue(front, rear, data);

    cout << "Enter a number: ";
    cin >> data;
    insertElementsQueue(front, rear, data);

    //Deleting elements of the queue
    cout << "\nRemoving nodes from the queue: ";
    while (front != NULL) {
        deleteElementsQueue(front, rear, data);
        
        if(front != NULL) {
            cout << data << ", ";
        }
        else {
            cout << data << ":";
        }
    }

    return 0;
}

//function to insert elements into a queue
void insertElementsQueue(Node *&front, Node *&rear, int data_function) {
    Node *new_node = new Node();
    new_node->data = data_function;
    new_node->next = NULL;

    if(queue_empty(front)) {
        front = new_node;
    }
    else {
        rear->next = new_node;
    }

    rear = new_node;

    cout << "\tElement " << data_function << " has been added correctly" << endl;
}

//Function to determine if the function is empty
bool queue_empty(Node *front) {
    return (front == NULL) ? true : false;

        // if(front == NULL) {
        //     return true;
        // }
        // else {
        //     return false;
        // }
}    

void deleteElementsQueue(Node *&front, Node *&rear, int &data_function) {
    data_function = front->data;
    Node *temp = front;

    if(front == rear) {
        front = NULL;
        rear = NULL;
    }
    else {
        front = front->next;
    }

    delete temp;
}