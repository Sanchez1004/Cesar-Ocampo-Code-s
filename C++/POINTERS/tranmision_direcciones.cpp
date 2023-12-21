//Transmisión de derecciones
// Ejemplo: Intercambiar el valor de 2 variables

#include <iostream>
#include <stdlib.h>
using namespace std;

void exchange(float *, float *);

int main() {
    float num1 = 10.2, num2 = 12.14;
    cout << "First number:" << num1 << endl;
    cout << "Second number:" << num2 << endl;

    exchange(&num1, &num2); // Se pasa la dirección de memoria como parametro

    cout << "\nnew First number: " << num1 << endl;
    cout << "new Second number: " << num2 << endl;
    return 0;
}

void exchange(float *dirNum1, float *dirNum2) {
    float aux;

    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux; 
}