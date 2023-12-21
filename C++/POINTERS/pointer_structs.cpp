//Pointers to structures
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Person {
    char name[30]; //You could use STRING but you got to print the name with a for loop
    int age;
}person, *pointer_person = &person;

void askData();
void showData(Person *);

int main() {
    askData();
    showData(pointer_person);

    return 0;
}

void askData() {
    //Using the '->' points the space you wanna use in the stucture
    cout << "Please enter your name: ";
    cin.getline(pointer_person->name, 30, '\n');
    cout << "Please enter your age: ";
    cin >> pointer_person->age;
}

void showData(Person *pointer_person) {
    cout << "\nYour name is: " << pointer_person->name << endl;
    cout << "Your age is: " << pointer_person->age << endl;
}