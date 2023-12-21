#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    int numeros[10], *dir_num;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero [" << i << "]: ";
        cin >> numeros[i];
    }

    dir_num = numeros; // Direccion de memoria donde comienza numeros

    for (int i = 0; i < 10; i++) {
        if(*dir_num %2 == 0) {
            cout << "\nEl numero " << *dir_num << " Es par." << endl;
            cout << "Posicion: " << dir_num << endl;
        }
        dir_num++;
    }

        return 0;
}