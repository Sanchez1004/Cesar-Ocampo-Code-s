#include <iostream>

using namespace std;

class Alumno{
	private:
		string nombre;
		string carnet;
	public:
		Alumno(){
			this->nombre = "";
			this->carnet = "";
		}
		
		void Insertar(string n, string c){
			this->nombre = n;
			this->carnet = c;
		}
		
		string Imprimir(){
			return "Nombre: " + this->nombre + " - " + this->carnet;
		}		
};

class Lista : public Alumno{
	public:
		void Listar(){
			cout << this->Imprimir() << endl;
		}
};

int main(){
	Alumno yo = Alumno();
	Lista seccionb;
	seccionb.Insertar("Oliver", "136148663");
	seccionb.Listar();
	
	return 0;
}

