#include <iostream>

using namespace std;

class Numero{
    public:
        int numero;
        Numero(int n){
            this->numero = n;
        }

        int Factorial(){
            int resultado = 1;
            for(int i = 1; i <= this->numero; i++){
                resultado = resultado * i;
            }
            return resultado;
        }

        string Imprimir(){
            string cadena = "";
            cadena = to_string(this->numero);
            return "El numero es : " + cadena;
        }

        void Secuencia(){
            for(int i = 0; i <= this->numero; i++){
                cout << i;
            }
        }
};

int main(){
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    Numero numero = Numero(n);
    cout << "Factorial: " << numero.Factorial() << endl;
    cout << numero.Imprimir() << endl;
    numero.Secuencia();

    return 0;
}
