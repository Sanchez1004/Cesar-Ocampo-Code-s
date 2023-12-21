#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona {
    private: //Atributos
        int age;
        string name;

    public: //Métodos
        Persona(int, string); //Constructor
        void read();
        void run();
};

// Constructor nos sirve para inicilizar los atributos
Persona::Persona(int _age, string _name) {
    age = _age;
    name = _name;
}

void Persona::read() {
    cout << "I'm " << name << " and i'm reading a book, " << endl;
}

void Persona::run() {
    cout << "I'm " << name << " and i'm running a race and i'm " << age << " years old" << endl;
}

int main() {
    Persona p1 = Persona(20, "Cesar"); // Forma larga de definir una clase
    Persona p2(19, "Daniel"); // Defirnir el constructor de manera directa
    Persona p3(21, "Ocampo");

    p1.read();
    p2.run();

    p3.read();
    p3.run();

    system("pause");
    return 0;
}
