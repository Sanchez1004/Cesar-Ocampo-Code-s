//Este es un ejercio que sirve de ejemplo para aprender como funciona la herencia multiple, en el main podría hacerse de manera más completa y pedir los datos e implementar en las clases los métodos Get y Set
#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;

    public:
        Persona(string, int);
        void mostrarPersona();
};

class Empleado : public Persona {
    private:
        string cargo;
        string idTrabajo;

    public:
        Empleado(string, int, string, string);
        void mostrarEmpleado();
};

class Estudiante : public Persona {
    private:
        string idEstudiante;

    public:
        Estudiante(string, int, string);
        void mostrarEstudiante();
};

class Universitario : public Estudiante {
    private:
        string carrera;

    public:
        Universitario(string, int, string, string);
        void mostrarUniversitario();
};

//Constructor clase padre
Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}

//Constructor clase hija
Empleado::Empleado(string _nombre, int _edad, string _cargo, string _idTrabajo) : Persona(_nombre, _edad) {
    cargo = _cargo;
    idTrabajo = _idTrabajo;
}

//Constructor clase hija
Estudiante::Estudiante(string _nombre, int _edad, string _idEstudiante) : Persona(_nombre, _edad) {
    idEstudiante = _idEstudiante;
}

//Constructor clase hija de Estudiante
Universitario::Universitario(string _nombre, int _edad, string _idEstudiante, string _carrera) : Estudiante(_nombre, _edad, _idEstudiante) {
    carrera = _carrera;
}

void Persona::mostrarPersona() {
    cout << "\nNombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Empleado::mostrarEmpleado() {
    mostrarPersona();
    cout << "Cargo:" << cargo << endl;
    cout << "ID: " << idTrabajo << endl;
}

void Estudiante::mostrarEstudiante() {
    mostrarPersona();
    cout << "ID: " << idEstudiante << endl;
}

void Universitario::mostrarUniversitario() {
    mostrarEstudiante();
    cout << "Carrera: " << carrera << endl;
}

int main () {
    Empleado empleado1("Juan", 28, "Supervisor", "14151354624");
    Estudiante estudiante1("Daniel", 19, "1424141415");
    Universitario universitario1("Cesar", 19, "151521241", "Tecnologia en Sis.");

    empleado1.mostrarEmpleado();
    estudiante1.mostrarEstudiante();
    universitario1.mostrarUniversitario();

    return 0;
}