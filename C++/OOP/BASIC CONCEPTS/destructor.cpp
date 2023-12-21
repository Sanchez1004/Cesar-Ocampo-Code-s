#include <iostream>
#include <stdlib.h>
using namespace std;

class Perro {
    private:
        string nombre, raza;

    public:
        Perro(string, string); // constructor
        ~Perro(); // destructor 
        void mostrarDatos();
        void play();
};

//Constructor
Perro::Perro(string _nombre, string _raza) {
    nombre = _nombre;
    raza = _raza;
}

//Destructor
Perro::~Perro() {
}

void Perro::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "raza: " <<raza << endl;
}

void Perro::play() {
    cout << "El perro " << nombre << " Esta jugando." << endl;
}

int main() {
    Perro perro1("Pedro", "Chihuahua");

    perro1.mostrarDatos();
    perro1.play();
    perro1.~Perro(); //Destruyendo el objeto

    return 0;
}