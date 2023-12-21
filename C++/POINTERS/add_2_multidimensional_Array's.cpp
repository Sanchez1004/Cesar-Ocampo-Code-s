//This time we are going to add to dynamics arrays

#include <iostream>
#include <stdlib.h>
using namespace std;

void askData();
void addArrays(int **, int **, int, int);
void showArrays(int **, int**, int, int);
void showAddArrays(int **, int, int);

int **pointer_array1, **pointer_array2, nRows, nColumns;

int main() {
    askData();
	showArrays(pointer_array1, pointer_array2, nRows, nColumns);
    addArrays(pointer_array1, pointer_array2, nRows, nColumns);
    showAddArrays(pointer_array1, nRows, nColumns);

    for (int i = 0; i < nRows; i++) {
        delete[] pointer_array1[i];
        delete[] pointer_array2[i];
    }
    delete[] pointer_array1;
    delete[] pointer_array2;

    return 0;
}

void askData() {
    cout << "Please enter how many rows you want to add: ";
    cin >> nRows;
    cout << "Please enter how many columns you want to add: ";
    cin >> nColumns;

    //Allocating memory for the first array
    pointer_array1 = new int*[nRows];
    for(int i = 0; i < nRows; i++) {
        pointer_array1[i] = new int[nColumns];
    }

    cout << "\nEnter the elements of the firts array" << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nColumns; j++) {
            cout << "Enter a number [" << i << "][" << j << "]: ";
            cin >> *(*(pointer_array1 + i)+j);
        }

    }

    // Allocating memory for the second array
    pointer_array2 = new int*[nRows];
    for(int i = 0; i < nRows; i++) {
        pointer_array2[i] = new int[nColumns];
    }

    cout << "\nEnter the elements of the second  array" << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nColumns; j++) {
            cout << "Enter a number [" << i << "][" << j << "]: ";
            cin >> *(*(pointer_array2 + i)+j);
        }
        
    }
}

//Function to add the arrays
void addArrays(int **pointer_array1, int **pointer_array2, int nRows, int nColumns) {
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nColumns; j++) {
            *(*(pointer_array1 + i) + j) += *(*(pointer_array2 + i) + j);
        }
    }
}

//Function to show the arrays
void showArrays(int **pointer_array1, int **pointer_array2, int nRows, int nColumns) {
	//Printing the array 
	cout << "\nArray number 1: \n" << endl;
	for(int i = 0; i < nRows; i ++) {
		for (int j = 0; j < nColumns; j++) {
			cout <<*(*(pointer_array1 + i) + j) << " ";
		}
		cout << "\n";
	}
	
	//Printing the array 2
	cout << "\nArray number 2: \n" << endl;
	for(int i = 0; i < nRows; i ++) {
		for (int j = 0; j < nColumns; j++) {
			cout << *(*(pointer_array2 + i) + j) << " ";
		}
			cout << "\n";
		}
}

void showAddArrays(int **pointer_array1, int nRows, int nColumns) {
    cout << "\nThe add of the two arrays is : \n" << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < nColumns; j++) {
            cout << *(*(pointer_array1 + i) + j) << ' ';
        }
        cout << "\n";
    }
}
