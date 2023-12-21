//Basic syntax for list, here is the structure, this code may help you to understant how it wotks

#include <iostream>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    Node *next;
};

void menu();
void enlist(Node *&, int); // Function to push or add elements to the list
void showList(Node *); // Function to show the entire list
void searchList(Node *, int); // Function to search an element in the list
void deleteNode(Node *&, int); // Function to delete a exact node from the list
void deleteList(Node *&, int &); // Function to delete a node from the list

Node *list = nullptr;

int main() {
    menu();
    getch();
}

void menu() {
    int opc, data;

    do {
        std::cout << "\t MENU\n";
        std::cout << "1. Insert elements in the list\n";
        std::cout << "2. Show elements in the list in order\n";
        std::cout << "3. Search an element in the list\n";
        std::cout << "4. Delete a node from the list\n";
        std::cout << "5. Delete all elements from the list\n";
        std::cout << "6. Exit the program\n";
        std::cout << "\tOption: ";
        std::cin >> opc;

        switch(opc) {
            case 1:
                std::cout << "\nInsert a number: ";
                std::cin >> data;
                enlist(list, data);
                std::cout << "\n";
                system("pause");
                break;
            case 2:
                showList(list);
                std::cout << "\n";
                system("pause");
                break;
            case 3:
                std::cout << "\nEnter the element you want to search for: " << std::endl;
                std::cin >> data;
                searchList(list, data);
                std::cout << "\n";
                getch();
                break;
            case 4:
                std::cout << "\nEnter the element you want to delete: ";
                std::cin >> data;
                deleteNode(list, data);
                std::cout << "\n";
                system("pause");
                break;
            case 5:
                std::cout << "\nDeleting all nodes in the list...\n";
                system("pause");
                while (list != nullptr) {
                    deleteList(list, data);
                    std::cout << "Deleting node of '" << data << "' in list. " << std::endl;
                }
                system("pause");
                break;
            case 6:
                break;
            default:
                std::cout << "\nUnsupported option." << std::endl;
                system("pause");
                break;
        }
        system("cls");
    } while (opc != 6);
}

// Function to push or add elements to the list
void enlist(Node *&list, int n) {
    Node *newNode = new Node();
    newNode->data = n;

    Node *temp1 = list;
    Node *temp2;

    while(temp1 != nullptr && temp1->data < n) {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    if(list == temp1) {
        list = newNode;
    }else {
        temp2->next = newNode;
    }

    newNode->next = temp1;
    
    std::cout << "\tElement " << n << " added successfully to the list." << std::endl;
} 

// Function to show the entire list
void showList(Node *list) {
    Node *current = new Node();
    current = list;

    while(current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
}

// Function to search an element in the list
void searchList(Node *list, int n) {
    bool flag = false;

    Node *current = new Node();
    current = list;

    while((current != nullptr) && (current->data <= n)) {
        if (current-> data == n) {
                flag = true;
        }
        current = current->next;
    }

    if (flag == true) {
        std::cout << "Element " << n << " was found on the list." << std::endl; 
    }
    else {
        std::cout << "Element " << n << " wasn't found on the list." << std::endl;
    }
}

// // Function to delete a exact node from the list
void deleteNode(Node *&list, int n) {
    //Verify that the list isn't empty
    if (list != nullptr) {
        Node *temp_delete;
        Node *previous = nullptr;

        temp_delete = list;

        //Traverse the list
        while((temp_delete != nullptr) && (temp_delete->data != n)) {
            previous = temp_delete;
            temp_delete = temp_delete->next;
        }

        //Case element isn't in the list
        if (temp_delete == nullptr) {
            std::cout << "Element wasn't found.";
        }
        //Case element we are looking for is the first on the list
        else if (previous == nullptr) {
            list = list->next;
            delete temp_delete;
        }
        //Case element is in the list but isn't the first on the list
        else {
            previous->next = temp_delete-> next;
            delete temp_delete;
        }
    }
}

// Function to delete a node from the list
void deleteList(Node *&list, int &n) {
    Node *temp = list;
    n = temp->data;
    list = temp->next;
    delete temp;
}