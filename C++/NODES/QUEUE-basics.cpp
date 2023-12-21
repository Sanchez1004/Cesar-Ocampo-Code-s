// Insert and delete elements into the stack
// You have to follow the 4 steps to insert and delete elements to the stack
// "insertStackElement" is the most basic structure to Insert elements into the stack 
// "deleteStackElement" is the most basic structure to Delete elements from the stack
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void insertStackElement(Node *&, int);
void deleteStackElement(Node *&, int &);


int main() {
    Node *stack = NULL;
    int data;

    cout << "Enter number 1: ";
    cin >> data;
    insertStackElement(stack, data); //Add 'number1' to stack

    cout << "Enter number 2: ";
    cin >> data;
    insertStackElement(stack, data); //Add 'number2' to stack

    cout << "\nDeleting elements of the stack: "; 
    while(stack != NULL) { //while isn't the end of the stack
        deleteStackElement(stack, data);
        if (stack != NULL) {
            cout << data << ", ";
        }
        else {
            cout << data << ".";
        }
    } 

    return 0;
}

void insertStackElement(Node *&stack, int n) {
    Node *new_node = new Node(); // Reserve memory for the new node
    new_node->data = n; // Assigning 'n' to data
    new_node->next = stack; // Assigning the memory position of stack to *next
    stack = new_node; // //Equalize stack to new_node

    cout << "Element '" << n << "' added correctly to the stack.\n" << endl;
}

void deleteStackElement(Node *&stack, int &n) {
    Node *aux = stack; // Create a auxiliar varible type node and equlize to stack
    n = aux->data; // We need that n = aux
    stack = aux->next; // We need that stack point to the next node
    delete aux; // Delete the auxiliar, it means delete the element of the stack
}