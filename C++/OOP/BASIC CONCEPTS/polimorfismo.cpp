#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;

    public:
        Persona(string, int);
        virtual void mostrar();
};

class Alumno :public Persona {
    private:
        float notaFinal;
    
    public:
        Alumno(string, int, float);
        void mostrar();
};

class Profesor : public Persona {
    private:
        string materia;

    public:
        Profesor(string, int, string);
        void mostrar();
};

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;   
}

Alumno::Alumno(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad) {
    notaFinal = _notaFinal;
}

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad) {
    materia = _materia;
}

void Persona::mostrar() {
    cout << "\nNombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Alumno::mostrar() {
    Persona::mostrar();
    cout << "Nota final: " << notaFinal << endl;
}

void Profesor::mostrar() {
    Persona::mostrar();
    cout << "Materia: " << materia << endl;
}

int main() {
    Persona *vector[3];

    vector[0] = new Alumno("Daniel", 17, 10.5);
    vector[1] = new Alumno("Cesar", 12, 12.2);
    vector[2] = new Profesor("John", 25, "Algoritmos");

    vector[0]->mostrar();
    vector[1]->mostrar();
    vector[2]->mostrar();

    return 0;
}