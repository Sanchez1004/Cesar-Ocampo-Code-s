//Code to add elements to the stack since the user wants to
#include <iostream>
#include <stdlib.h> //Libray to use de new and delete functions
using namespace std;

struct Node {
    int data;
    Node *next;
};

void addElementStack(Node *&, int); //Function to add elements to the stack
void removeElementStack(Node *&, int &); //Function to remove elements from the stack

int main () {
    Node *stack = NULL;
    int data;
    char answer;

    do {
        cout << "Enter a number: ";
        cin >> data;
        addElementStack(stack, data); //Function to add elements to the stack

        cout << "\nDo you want to add another element to the stack(S/N): ";
        cin >> answer;
    } while((answer == 'S') || (answer == 's'));

    cout << "\nPopping all elements off the stack: ";
    while(stack != NULL) { //While isn't the end of the stack
        removeElementStack(stack, data); //Function to remover a element from the stack 
        if(stack != NULL){
            cout << data << ", ";
        }
        else {
            cout << data << ".";
        }
    }

    return 0;
}

//Function to add elements to the stack
void addElementStack(Node *&stack, int n) {
    Node *new_node = new Node(); //Reserving memory for the new node
    new_node->data = n;
    new_node->next = stack;
    stack = new_node;

    cout << "\tElement " << n << " has been added to stack correctly." << endl;
}

//Function to remove element from the stack
void removeElementStack(Node *&stack, int &n) {
    Node *temp = stack;
    n = temp->data;
    stack = temp->next;
    delete temp;
}