#include <iostream>
#include <stdlib.h>
#include <conio.h>

class List {
    private:
        struct Node {
            float data;
            Node *next;

            Node(float num) {
                data = num;
                next = nullptr;
            }
        };

        Node *first;
        Node *last;

        float addNums = 0;
        float average = 0;
        int cont = 0;
    
    public:
        List() {
            first = nullptr;
            last = nullptr;
        }

        float getAverage() { return average; };
        float getAddNums() { return addNums; };

        void enlist(float num); // Function to add numbers to the list
        void showList(); // Function to show all elements in the list
        void listAddAverage(); // Function to add and get the average of the numbers in the list
};

// Function to add numbers to the list
void List::enlist(float num) {
    Node* newNode = new Node(num);

    if(first == nullptr) {
        first = newNode;
        last = newNode;
    }
    else {
        last->next = newNode;
        last = newNode;
    }

    std::cout << "Number <" << num << "> was added to the list." << std::endl;
}

// Function to show all elements in the list
void List::showList() {
    Node* current = first;

    std::cout << "Numbers in list :";
    while(current != nullptr) {
        std::cout << " " << current->data << " ";
        current = current->next; // Advance a position in the lists
    }
}

// Function to add and get the average of the numbers in the list
void List::listAddAverage() {
    Node* current = first;

    while(current != nullptr) {
        addNums += current->data;
        cont++;
        current = current->next; // Advance a position in the list
    }

    average = addNums / cont;
}

int main() {
    List list;

    float data;
    char car;

    do {
        std::cout << "\nEnter a number to the list: ";
        std::cin >> data;
        list.enlist(data);
        std::cout << "\tWanna enter another number to the list?(S/N): ";
        std::cin >> car;
    } while (car == 's' || car == 'S');

    list.showList();
    list.listAddAverage();
    std::cout << "\nThe add of all numbers in the list is: " << list.getAddNums() << std::endl;
    std::cout << "The average of all numbers in the list is: " << list.getAverage() << std::endl;

    return 0;
}