#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    char data;
    Node *next;
};

//Function prototypes
void menu();
void pushQueue(Node *&, Node *&, char);
bool queueEmpty(Node *);
void popQueue(Node*&, Node *&, char &);

int main () {
    menu();
    return 0;
}

void menu() {
    int opc;
    char data;

    Node *front = NULL;
    Node *rear = NULL;

    do {
        cout << "\t.MENU.\n";
        cout << "1. Insert a caracter in the queue." << endl;
        cout << "2. Show all the elements in the queue." << endl;
        cout << "3. Exit." << endl;
        cout << "Choose an option: ";
        cin >> opc;

        switch(opc) {
            case 1:
                cout << "\n Enter the caracter you want to add to the queue: " << endl;
                cin >> data;
                pushQueue(front, rear, data);
                break;
            case 2:
                cout << "\nShowing all elements in the queue: " << endl;
                while(front != NULL) {
                    popQueue(front, rear, data);
                    if (front != NULL) {
                        cout << data << ", ";
                    }
                    else {
                        cout << data << ".";
                    }
                }
                cout << "\n";
                system("pause");
                break;
            case 3:
                break;
        }
        system("cls");
    } while (opc != 3);
}

//Function to add elements in the queue
// n is equivalent to data, i just use n for ease the work
void pushQueue(Node *&front, Node *&rear, char n) {
    Node *new_node = new Node();
    new_node->data = n;
    new_node->next = NULL;

    if (queueEmpty(front)) {
        front = new_node;
    }
    else {
        rear->next = new_node;
    }
    rear = new_node;
}

bool queueEmpty(Node *front) {
    return (front == NULL) ? true : false;
}

//Function to delete elements from the queue in this we are going to use it to
//print all the elements in the queue on the main
// n is equivalent to data, i just use n for ease the work
void popQueue(Node *&front, Node *&rear, char &n) {
    n = front->data;
    Node *aux = front;
    
    if(front == rear) {
        front = NULL;
        rear = NULL;
    }
    else {  
        front = front->next;
    }

    delete aux;
}