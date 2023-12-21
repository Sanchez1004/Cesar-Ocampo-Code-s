#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    int numeros[5], *dir_num, menor;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el numero [" << i << "]: ";
        cin >> numeros[i];
    }

    dir_num = numeros;
    menor = *dir_num;

    for (int i = 0; i < 5; i++) {
        dir_num++;
        if (*dir_num < menor) {
            menor = *dir_num;
        }
    }
        cout << "El numero menor es: "<< menor << endl;
    
        return 0;
}