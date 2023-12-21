//Program to search the minor and major number of a list
#include <stdlib.h>
#include <iostream>
#include <conio.h>

struct Node {
    int data;
    Node *next;
};

void enlist(Node *&, int);
void showList(Node *);
void calculateMajorMinor(Node *);

int main () {
    Node *list = nullptr;
    int data;
    char answer;

    do {
        std::cout << "Enter a number: ";
        std::cin >> data;
        enlist(list, data);

        std::cout << "Do you want to add another node(s/n): ";
        std::cin >> answer;
    } while (answer == 's' || answer == 'S');

    std::cout << "\nList elements: \n";
    showList(list);
    calculateMajorMinor(list);

    getch();
    return 0;
}

// Function to push or add elements to the list
void enlist(Node *&list, int n) {
    Node *newNode = new Node();
    Node *temp;

    newNode->data = n;
    newNode->next = nullptr;

    if (list == nullptr) { //Verifying that the list isn't empty
        list = newNode;
    }
    else {
        temp = list; //make temp point the beggining of the list
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode; //Add the element to the list
    }
    std::cout << "\tElement <" << n << "> added to the list succesfully.\n" << std::endl;
} 

// Function to show the entire list
void showList(Node *list) {
    while(list != nullptr) {
        std::cout << list->data << " -> ";
        list = list->next; //advance one position in the list
    }
}

//Calculate the major and minor element in the list
void calculateMajorMinor(Node *list) {
    int major = 0, minor = 99999;

    while(list != nullptr) { //move up the list
        if((list->data) > major) { //calculating major element
            major = list->data;
        }
        if((list->data) < minor) {
            minor = list->data;
        }
        list = list->next;
    }

    std::cout << "\nThe major element is " << major << std::endl;
    std::cout << "\nThe minor element is " << minor << std::endl;
}