#include <iostream>

//manera de crear distinos constructor

using namespace std;

class Saludo{
    public:
        string nombre;
        string saludo;

        Saludo(string n){
            this->nombre = n;
            this->saludo = "Hola " + this->nombre;
            cout << this->saludo << endl;
        }
        Saludo(){
            this->saludo = "HOLA!";
            cout << this->saludo << endl;
        }
};

int main(){
    string name;

    cout << "Digite su nombre: ";
    cin >> name;

    Saludo uno = Saludo(name);
    Saludo dos = Saludo();

    return 0;
}
