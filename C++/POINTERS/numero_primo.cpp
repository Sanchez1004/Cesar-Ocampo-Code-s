#include <iostream>
#include <stdlib.h>
using namespace std;

bool esPrimo(int n) {
    if(n<=1) // 0 y 1 no son primos
        return false;
    for(int i=2; i*i<=n; i++) { // Comprobar si tiene algún divisor
        if(n%i==0)
            return false;
    }
    return true;
}

int main () {
    int num, *dir_num;

    cout << "Ingrese un numero: "; 
	cin >> num;
    dir_num = &num;

    if(esPrimo(*dir_num)) {
        cout << *dir_num << " es primo." << endl;
        cout << "Direccion: " << dir_num << endl;
    }
    else {
        cout << *dir_num << " no es primo." << endl;
        cout << "Direccion: " << dir_num << endl;
    }

    return 0;
}
