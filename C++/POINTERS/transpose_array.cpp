#include <iostream>
#include <stdlib.h>
using namespace std;

void askData(); //Function to ask data of the arrays
void convertArray(int **, int **, int, int); //Function to transpose the array
void printArrays(int **, int **, int, int); //Function to print arrays

int **pointer_array, **transpose_array, nRows, nColumns; 

int main(){
	askData();
	convertArray(pointer_array, transpose_array, nRows, nColumns);
	printArrays(pointer_array, transpose_array, nRows, nColumns);
	
	for (int i = 0; i < nRows; i++) {
	    delete[] pointer_array[i];
	}
	delete[] pointer_array;
	
	for (int i = 0; i < nColumns; i++) {
	    delete[] transpose_array[i];
	}
	delete[] transpose_array;
 
	return 0;
}

void askData() {
	cout << "How many rows do you want to add: ";
	cin >> nRows;
	cout << "How many columns do you want to add: ";
	cin >> nColumns;
	
	//Allocating memory to both of arrays
	//A transpose array is the reverse of the array you wanto to transpose
	
	//Allocating memory pointer_array
	pointer_array = new int*[nRows]; 
	for(int i = 0; i < nRows; i++) {
		pointer_array[i] = new int[nColumns];
	}
	
	//Allocating memory transpose_array
	transpose_array = new int*[nColumns];
	for(int i = 0; i < nColumns; i++) {
	    transpose_array[i] = new int[nRows];
	}

	
	cout << "\nEnter the numbers of the array you want to transpose:" << endl;
	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nColumns; j++) {
			cout << "Enter the number to [" << i << "][" << j << "]: ";
			cin >> *(*(pointer_array + i) + j);
		}
	}
}

void convertArray(int **pointer_array, int **transpose_array, int nRows, int nColumns) {
	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nColumns; j++) {
			*(*(transpose_array + j) + i) = *(*(pointer_array + i) + j);
		}
	}
}

void printArrays(int **pointer_array, int **transpose_array, int nRows, int nColumns) {
	cout << "\nThis is the normal array: \n" << endl;
	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nColumns; j++) {
			cout << *(*(pointer_array + i) + j) << " ";
		}
		cout << "\n";
	}
	cout << "\nThis is the Transpose Array: \n" << endl;
	for (int i = 0; i < nColumns; i++) {
		for (int j = 0; j < nRows; j++) {
			cout << *(*(transpose_array + i) + j) << " ";
		}
		cout << "\n";
	}
}
