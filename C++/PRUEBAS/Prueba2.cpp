#include <iostream>
#include <string>

using namespace std;

class Alumno{
    public:
        string nombre;
        string carnet;

        Alumno(){
            this->nombre = "";
            this->carnet = "";
        }
        void Insertar(string n, string c){
            this->nombre = n;
            this->carnet = c;
        }
        string Imprimir(){
            return "Nombre: " + this->nombre + " - " + this->carnet + "\n";}
        };

int main(){
    string n, c;
    Alumno nuevo = Alumno();

    cout << "Ingrese el nombre del alumno \n";
    cin >> n;
    cout << "Ingrese el numero de carnet \n";
    cin >> c;
    nuevo.Insertar(n, c);
    system("cls");

    cout << nuevo.Imprimir();

    return 0;
}
