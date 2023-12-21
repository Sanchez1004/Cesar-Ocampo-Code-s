#include <iostream>

using namespace std;

class Documento{
    private:
        string titulo;
        string contenido;

    public:
        Documento(){
            this->titulo = "Private";
            this->contenido = "Identificador en c++";
        }

        void Imprimir(){
            cout << this->titulo << endl;
            cout << this->contenido << endl;
        }
};

int main(){
    Documento word;
    word.Imprimir();

    return 0;
}
