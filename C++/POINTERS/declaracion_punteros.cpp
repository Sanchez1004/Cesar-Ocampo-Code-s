#include <iostream>
#include <stdlib.h>
using namespace std;

// int main () {
//     int num, *dir_num;

//     num = 20;
//     dir_num = &num;

//     cout << "Numero: " << *dir_num << endl;
//     cout << "Direccion de memoria: " << dir_num << endl;

//     return 0;
// }

int main() {
    int num, *dir_num;

    cout << "Digite un numero : "; cin >> num;
    dir_num = &num; // Guardando la posicion de memoria

    if (*dir_num % 2 == 0) {
        cout << "El numero "<< *dir_num << " es par." << endl;
        cout << "Posicion: " << dir_num << endl;
    }
    else {
        cout << "El numero " << *dir_num << " Es impar." << endl;
        cout << "Posicion: " << dir_num << endl;
    }

    return 0;
}