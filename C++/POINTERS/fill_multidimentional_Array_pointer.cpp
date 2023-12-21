//Dynamics arrays
//The next example will be fill an array with n x m and show his content

#include <iostream>
#include <stdlib.h>
using namespace std;

void askData();
void showArray(int **, int, int);

int **pointer_array, nRows, nColumns;

int main () {
    askData();
    showArray(pointer_array, nRows, nColumns);

    //This is how you delete the memory reserved for this kind of 
    //array, first you delete the memory allocated on the second 
    //dimension, in this case "ROWS" and then you delete the entire array
    for (int i = 0; i < nRows; i++) {
        delete[] pointer_array[i];
    }
    delete[] pointer_array;

    return 0;
}

void askData() {
    cout << "Please enter the number of rows: ";
    cin >> nRows;
    cout << "Please enter the number of columns: ";
    cin >> nColumns;

    //first you reserved memory for the "ROWS" of the array, the first
    //dimenson, and then you reserved memory for the "COLUMNS" of the,
    //array, the second dimension
    pointer_array = new int*[nRows];
    for(int i = 0; i < nRows; i++) {
        pointer_array[i] = new int[nColumns];
    }

    cout << "\nEnter the elements of the array" << endl;
    for (int i = 0; i < nRows; i++) {
        for(int j = 0; j < nColumns; j++) {
            cout << "Enter a number[" << i << "][" << j << "]: ";
            cin >>*(*(pointer_array + i)+j);
        }
    }
}

void showArray(int **pointer_array, int Nrows, int nColumns) {
    cout << "\n\nPrinting array\n";
    for(int i = 0; i < Nrows; i++) {
        for (int j = 0; j < nColumns; j++) {
            cout << *(*(pointer_array + i) + j) << " ";
        }
        cout << "\n";
    }
}