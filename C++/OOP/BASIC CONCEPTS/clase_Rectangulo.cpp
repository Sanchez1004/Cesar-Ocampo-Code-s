#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo {
    private: // Atributos
        float large, width;

    public: // Métodos
        Rectangulo(float, float); // Constructor
        void perimeter();
        void area();
};

Rectangulo::Rectangulo(float _large, float _width){
    large = _large;
    width = _width;
};

void Rectangulo::perimeter() {
    float _perimeter;

    _perimeter = (2 * large) + (2 * width);
    
    cout << "El perimetro es: " << _perimeter << endl;
}

void Rectangulo::area() {
    float _area;

    _area = large * width;

    cout << "El area es: " << _area << endl;
}

int main() {
    Rectangulo r1(11, 7);

    r1.perimeter();
    r1.area();

    system("pause");
    return 0;
}