#include <iostream>
#include <string>

using namespace std;

class Cuadrado{
    public:
        float base;
        float altura;

        Cuadrado(float b, float a){
            this->altura = a;
            this->base = b;
        }
        float calcularArea(){
            return this->base*this->altura;
        }
};

int main(){
    float b, a;

    cout << "Ingrese la base del cuadrado: ";
    cin >> b;
    cout << "Ingrese la altura del cuadrado: ";
    cin >> a;

    Cuadrado cuadrado1 = Cuadrado(b, a);
    cout << "La base del cuadrado es: " << cuadrado1.calcularArea() << endl;

    return 0;
}
