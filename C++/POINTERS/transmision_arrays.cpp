//Transmisión de arreglos
#include <iostream>
#include <stdlib.h>
using namespace std;

int foundMax(int *, int);

int main (){
    const int nElements = 5;
    int numbers[nElements] = {13, 5, 6, 7, 8};

    cout << "The max element is: " << foundMax(numbers, nElements);

    return 0;
}

int foundMax(int *dirArr, int nElements) {
    int max = 0;
    
    for (int i = 0; i < nElements; i++) {
        if (*(dirArr + i) > max) {
            max = *(dirArr + i);
        }
    }
    return max;
}