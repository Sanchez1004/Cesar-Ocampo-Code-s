#include <iostream>
#include <string>

using namespace std;

class Documento{
	private:
		string titulo;
		string contenido;
		int numero_documento;
	public:
		Documento(string t, string c, int n){
			this->titulo = t;
			this->contenido = c;
			this->numero_documento = n;
		}	
		
		friend class Impresora;
};

class Impresora{
	public:
		void Imprimir(){
			Documento word = Documento("Clase friend", "Permite acceder a lo privado", 24);
			cout << word.titulo << endl;
			cout << word.contenido << endl;
			cout << word.numero_documento << endl;
		}
};

int main(){
	Impresora epson;
	epson.Imprimir();
	
	return 0;
}

