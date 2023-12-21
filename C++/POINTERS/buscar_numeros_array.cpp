#include <iostream>
#include <stdlib.h>
using namespace std;

void getNumbers();
int searchNumber(int *, int, int);
void printNumbers(int *, int, int);

int sizeArray, *numbers;

int main() {
    int xNum;

    getNumbers();

    cout << "\nWhat number are you looking for: ";
    cin >> xNum;

    printNumbers(numbers, sizeArray, xNum);
    
    delete[] numbers;

    return 0;
}

void getNumbers() {
    cout << "How many numbers do you want to input: ";
    cin >> sizeArray;

    numbers = new int[sizeArray];

    for (int i = 0; i < sizeArray; i++) {
        cout << "Input number[" << i  << "]: ";
        cin >> *(numbers + i);
    }
}

int searchNumber(int *numbers, int xNum, int sizeArray) {
    for (int i = 0; i < sizeArray; i++) {
        if (*(numbers + i) ==  xNum){
            return i;
        }
    }
    return -1;
}

void printNumbers(int *numbers, int sizeArray, int xNum) {
    cout << "\n";
    for(int i = 0; i < sizeArray; i++) {
        cout << "[" << i << "]" << *(numbers + i) << endl;
    }

    cout << "\nThe number " << xNum << " is on [" << searchNumber(numbers, xNum, sizeArray) << "]" << endl;
}