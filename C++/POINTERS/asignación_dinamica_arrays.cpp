#include <iostream>
#include <stdlib.h> //Funcion new y delete
using namespace std;

void pedirNotas();
void mostarNotas();

int numCalif, *calif;

int main (){
    pedirNotas();
    mostarNotas();

    delete[] calif; //Liberando el espacio en bytes utilizado anteriormente

    return 0;
}

void pedirNotas() {
    cout << "Digite el numero de calificaciones: ";
    cin >> numCalif;

    calif = new int[numCalif]; // Crear el arreglo

    for(int i = 0; i < numCalif; i++){
        cout << "Ingrese una nota: ";
        cin >> calif[i];
    }
}

void mostarNotas() {
    cout << "\n\nMostrando notas del usuario: \n";
    for (int i = 0; i < numCalif; i++){
        cout << calif[i] << endl;
    }
}