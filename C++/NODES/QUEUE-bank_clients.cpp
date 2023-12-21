// This code is an example of a queue of a bank, and can be reused in things like
// shift in whatever place you need to implement it, here we are using Nodes and queues
// with OOP (Objects Oriented Programming) that makes ease to work with them.  
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;

// Structure of a queue using OOP, here you can see all the regular things that a queue have
// and a good option to define a NODE
template <typename T>
class Queue {
    private:
        struct Node {
            T data;
            Node* next;

            Node(T data) : data(data), next(nullptr){}
            // Node(T data) {
            //     this->data = data;
            //     this->next = nullptr; // nullptr is better than NULL
            // }
        };
        Node *front, *rear;

    public:
        Queue() : front(nullptr), rear(nullptr) {}

        //This can also be called push
        void enqueue(T data) {
            Node* newNode = new Node(data);

            if (rear == nullptr) {
                front = rear = newNode; //Equalizing front and rear to the new node
            }
            else {
                rear->next = newNode;
                rear = newNode;
            }
        }

        //This can also be called pop
        void dequeue() {
            //Checking if front is equal to NULL before dequeueing an element
            if (front == nullptr) {
                return; //Exit the function without return any value
            }
            Node* temp = front;
            front = front->next;
            delete temp;
            
            if (front == nullptr) {
                rear = nullptr; //
            }
        }

        bool empty() {
            return front == nullptr;
        }

        // Methods getter for both sides of the queue
        T& get_front() { return front->data; }
        T& get_rear() { return rear->data; }

        //Here is missing the setters methodt, but this code actually dont need it to work
};

void addNewClient(Queue<int> &, Queue<string> &);
void removeClientsInOrder(Queue<int> &, Queue<string> &, int);

int main () {
    Queue<int> intQueue;
    Queue<string> stringQueue;

    int totalClients = 0, opc = 0;

    do {
        cout << "---------MENU-BANK--------\n" << endl;
        cout << "\t1. Add a new client in the queue" << endl;
        cout << "\t2. Remove all clients from the queue" << endl;
        cout << "\t3. Exit " << endl;
        cin >> opc;
        cin.ignore();

        switch (opc) {
            case 1:
                addNewClient(intQueue, stringQueue);
                totalClients++;
                break;
            case 2:
                removeClientsInOrder(intQueue, stringQueue, totalClients);
                cout << "\nPRESS ANY KEY TO GO BACK TO THE MENU!" << endl;
                getch();
                break;
            case 3:
                break;
            default:
                cout << "Unknown option. Please enter an available option.\nPress enter to try again.21" << endl;
                getch();
                break;
        }
        system("cls");
    } while (opc != 3);

    return 0;
}

//Function to add elemtents in order to the queue
void addNewClient(Queue<int> &intObj, Queue<string> &stringObj) {
    string name;
    int data;

    cout << "\n---------FORM TO ENTER THE QUEUE---------\n" << endl;
    cout << "ENTER YOUR NAME: "; getline(cin, name);
    stringObj.enqueue(name);
    cout << "ENTER YOUR ID NUMBER: "; cin >> data;
    intObj.enqueue(data);
    cout << "ENTER YOUR PHONE NUMBER: "; cin >> data;
    intObj.enqueue(data);
}

//Function to print elements in order of the queue 
void removeClientsInOrder(Queue<int> &intObj, Queue<string> &stringObj, int count) {
    cout << "\n----------LIST OF PEOPLE THAT WAS IN QUEUE----------" << endl;
    for (int i = 0; i < count; i++) {
        cout << "\nNAME: " << stringObj.get_front() << endl;
        cout << "ID: " << intObj.get_front() << endl;
        intObj.dequeue(); // Dequeuing the "ID" to print the "PHONE"
        cout << "PHONE: " << intObj.get_front() << endl;
        //Dequeuing data in order 
        stringObj.dequeue();
        intObj.dequeue();
    }
}
