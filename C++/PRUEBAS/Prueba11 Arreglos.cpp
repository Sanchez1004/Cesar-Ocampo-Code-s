#include <iostream>
#include <string>

using namespace std;

class Persona {
	private:
		string nombre;
		int telefono;
		
	public:
		Persona() {
			this->nombre = "";
			this->telefono = 0;
		}
		
		void getPersona(string n, int t) {
			this->nombre = n;
			this->telefono = t; 
		}
		
		string setPersona() {
			return "Nombre: " + this->nombre + " - " + to_string(this->telefono);
		}
		
};

int main(){
	Persona personas[5] = Persona();
	int contador = 0;
	do {
		system("cls");
		string n;
		int t;
		cout << "Nombre: ";
		cin >> n;
		cout << "telefono: ";
		cin >> t;
		personas[contador].getPersona(n, t);
		contador++;
	}while (contador < 5);
	
	return 0;
}

