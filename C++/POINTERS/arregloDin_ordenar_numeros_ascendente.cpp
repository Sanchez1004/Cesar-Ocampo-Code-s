#include <iostream>
#include <stdlib.h>
using namespace std;

void getNumbers();
void orderNumbers(int *, int);
void showArray(int *, int);

int sizeArray, *numbers;

int main() {
    getNumbers();
    orderNumbers(numbers, sizeArray);
    showArray(numbers, sizeArray);

    delete[] numbers;

    return 0;
}

void getNumbers() {
    cout << "How many numbers do you want to add: ";
    cin >> sizeArray;

    numbers = new int[sizeArray];

    for (int i = 0; i < sizeArray; i++) {
        cout << "Input the #" << i + 1 << ": ";
        cin >>*(numbers + i);
    }
}

//Metodo burbuja 
void orderNumbers(int *numbers, int sizeArray) {
    for (int i = 0; i < sizeArray; i++) {
        for (int j = 0; j < sizeArray; j++) {
            if (*(numbers + j) > *(numbers + j + 1)) {
                int temp = *(numbers + j);
                *(numbers + j) = *(numbers + j + 1);
                *(numbers + j + 1) = temp;
            }
        }
    }
}

void showArray(int *numbers, int sizeArray) {
    for (int i = 0; i < sizeArray; i++) {
        cout << *(numbers + i) << endl;
    }
}