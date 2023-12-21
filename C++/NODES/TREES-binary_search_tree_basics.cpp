/*
    Order of traverse:
     preOrder = (Root / Left / right)
     inOrder =  (Left / root / right)
     postOrder = (Left / right / root)
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>

struct Node {
    int data;
    Node *right;
    Node *left;
    Node *father;
};

Node *createNode(int, Node *);
Node *minimun(Node *);
void menu();
void insertNode(Node *&, int, Node *);
void showTree(Node *, int);
void preOrder(Node *);
void inOrder(Node *);
void postOrder(Node *);
void deleteSearch(Node *, int);
void deleteNode(Node *);
void replace(Node *, Node *);
void destroyNode(Node *);
bool search(Node *, int);

Node *tree = nullptr;

int main () {
    menu();

    getch();
    return 0;
}

void menu() {
    int data, opc, cont = 0;

    do {
        std::cout << "\tMENU" << std::endl;
        std::cout << "1. Insert a new node" << std::endl;
        std::cout << "2. Show the entire tree" << std::endl;
        std::cout << "3. Search a number" << std::endl;
        std::cout << "4. Traverse the tree in PreOrder" << std::endl;
        std::cout << "5. Traverse the tree in InOrder" << std::endl;
        std::cout << "6. Traverse the tree in PostOrder" << std::endl;
        std::cout << "7. Delete a node from the tree" << std::endl;
        std::cout << "8. Exit" << std::endl;
        std::cout << "Option: ";
        std::cin >> opc;

        switch(opc) {
            case 1:
                std::cout << "\nEnter a new number: ";
                std::cin >> data;
                insertNode(tree, data, nullptr);
                std::cout << "\n";
                system("pause");
                break;
            case 2:
                std::cout << "Showing the entire tree\n\n";
                showTree(tree, cont);
                system("pause");
                break;
            case 3:
                std::cout << "\nEnter the number do u want to search in the tree: ";
                std::cin >> data;
                if(search(tree, data)) {
                    std::cout << "\tElement <"<< data << "> found in the tree." << std::endl;
                }
                else {
                    std::cout << "\tElement <ee" << data << "> wasn't found in the tree." << std::endl;
                }
                system("pause");
                break;
            case 4:
                std::cout << "\nTraversing in PreOrder: ";
                preOrder(tree);
                std::cout << "\n\n";
                system("pause");
                break;
            case 5:
                std::cout << "\nTraversing in InOrder: ";
                inOrder(tree);
                std::cout << "\n\n";
                system("pause");
                break;
            case 6:
                std::cout << "\nTraversing in PostOrder: ";
                postOrder(tree);
                std::cout << "\n\n";
                system("pause");
                break;
            case 7:
                std::cout << "\nEnter the number that you want to delete: ";
                std::cin >> data;
                deleteSearch(tree, data);
                std::cout << "\tElement <" << data << "> deleted succsesfully." << std::endl; 
                system("pause");
                break;
        }
        system("cls");

    } while (opc != 8);
}

//Function to create a new node
Node *createNode(int n, Node *father) {
    Node *newNode = new Node();

    newNode->data = n;
    newNode->right = nullptr;
    newNode->left = nullptr;
    newNode->father = father;

    return newNode;
}

//Function to determine the the more left node
Node *minimun(Node *tree) {
    if(tree == nullptr) {
        return nullptr;
    }
    if(tree->left) { //If has a left child
        return minimun(tree->left);
    }
    else { //If doesn't have a left child
        return tree;
    }
}

//Function to insert nodes in the tree
void insertNode(Node *&tree, int n, Node *father) {
    if (tree == nullptr) {
        Node *newNode = createNode(n, father);
        tree = newNode;
    }
    else { //If tree has already a node or more than one
        int root = tree->data;

        if(n < root){ // If element is minor than root the element will be inserted in the left 
            insertNode(tree->left, n, tree);
        }
        else { //If element is major than root the element will be inserted in the right
            insertNode(tree->right, n, tree);
        }
    }
}

//Function to show the entire tree
void showTree(Node *tree, int cont) {
    if (tree == nullptr) { //If tree is empty
        return;
    }
    else {
        showTree(tree->right, cont+1);
        for (int i = 0; i < cont; i++) {
            std::cout << "   ";
        }
        std::cout << tree->data << std::endl;
        showTree(tree->left, cont+1);
    }
} 

//Function to search a number in the tree
bool search(Node *tree, int n) {
    if(tree == nullptr) {
        return false;
    }
    else if(tree->data == n){ //If node is equal to the element
        return true;
    }
    else if(n < tree->data) { //if element is minor than node search on the left
        return search(tree->left, n);
    }
    else { //if element is major than node search on the right
        return search(tree->right, n);
    }
}

//Function to traverse the tree in preorder
void preOrder(Node *tree) {
    if (tree == nullptr){
        return;
    }
    else {
        std::cout << tree->data << " - ";
        preOrder(tree->left);
        preOrder(tree->right);
    }

}

//Function to traverse the tree in inOrder
void inOrder(Node *tree) {
    if (tree == nullptr) {
        return;
    }
    else {
        inOrder(tree->left);
        std::cout << tree->data << " - ";
        inOrder(tree->right);
    }
}

//Funtion to traverse the tree in postOrder
void postOrder(Node *tree) {
    if (tree == nullptr) {
        return;
    }
    else {
        postOrder(tree->left);
        postOrder(tree->right);
        std::cout << tree->data << " - ";
    }
}

//Function to search the node for delete in the tree
void deleteSearch(Node *tree, int n) {
    if(tree == nullptr) {
        return;
    }
    else if (n < tree->data){ //If the value of n is minor than the actual node of the tree, serch in the left
        deleteSearch(tree->left, n);
    }
    else if(n > tree->data){ //If the value of n is greater than the actual node of the tree, search in the right
        deleteSearch(tree->right, n);
    }
    else {//If the node was found
        deleteNode(tree);
    }
}

//Function to replace two nodes
void replace(Node *tree, Node *newNode) {
    if(tree->father) {
        //Tree->father have to be assigned with his new child
        if(tree->data == tree->father->left->data) {
            tree->father->left = newNode;
        }
        else if(tree->data == tree->father->right->data) {
            tree->father->right = newNode;
        }
    }
    if(newNode) {
        //Assigning the new parent to node
        newNode->father = tree->father;
    }
}

//Function to destroy a node
void destroyNode(Node *node) {
    node->left = nullptr;
    node->right = nullptr;

    delete node;
}

//Function to delete the node from the tree
void deleteNode(Node *nodeDelete) {
    if(nodeDelete-> left && nodeDelete->right) { //If node has 2 children
        Node *minor = minimun(nodeDelete->right);
        nodeDelete->data = minor->data;
        deleteNode(minor);
    }
    else if(nodeDelete->left) { //If node has one left child
        replace(nodeDelete, nodeDelete->left);
        destroyNode(nodeDelete);
    }
    else if(nodeDelete->right) { //If node has one right child
        replace(nodeDelete, nodeDelete->right);
        destroyNode(nodeDelete);
    }
    else { //if node doesn't have childs
        replace(nodeDelete, nullptr);
        destroyNode(nodeDelete);
    }
}