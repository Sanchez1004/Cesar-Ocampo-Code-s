// This program have a option menu that you can use to enter elements into a stack
// or show all the elements into a stack, depending on what you choose.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Node {
    char data;
    Node *next;
};

void addElementStack(Node *&, char); // Function to add elements into the stack
void showElementStack(Node *&, char); // Fucntion to show all the elements in the stack

int main() {
    Node *stack = NULL;
    char letter;
    int opc = 0;

    while (opc != 3) {
        cout << "\n1. Enter an element to the stack." << endl;
        cout << "2. Show all elements in the stack." << endl;
        cout << "3. Exit.\n\t";
        cin >> opc;
        switch (opc) {
            case 1:
                cout << "\nEnter a character to the stack: ";
                cin >> letter;
                addElementStack(stack, letter); // Function to add elements into the stack
                break;
            case 2:
                cout << "\nShowing all elements in the stack:" << endl;
                showElementStack(stack, letter); // Fucntion to show all the elements in the stack
        }
    }
    return 0;
}

// Function to add elements into the stack
void addElementStack(Node *&stack, char letter) {
    Node *new_node = new Node();
    new_node->data = letter;
    new_node->next = stack;
    stack = new_node;

    cout << "\tCharacter '" << letter << "' was added successfuly." << endl;
}

// Fucntion to show all the elements in the stack
void showElementStack(Node *&stack, char letter) {
    cout << "\tElements in the stack: ";
    Node *current = stack; // Creating a temporal variable of Node()
     while (current != NULL) {
        cout << current->data;

        // Verifying if that the last element, if true, this if print a dot if not a comma
        if (current->next != NULL) {
            cout << ", ";
        }
        else {
            cout << ".";
        }

        current = current->next;
    }
    cout << endl;
    cout << "\nPress any key to go back to the options." << endl;
    getch(); //From the library <conio.h>
}