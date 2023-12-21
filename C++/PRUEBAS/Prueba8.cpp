#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Archivo{
	public:
		ofstream archivo;
		
		void Agregar(){
			char cadena[50];
			cout << "Ingresa una frase: \n";
			cin.getline(cadena, 50);
			this->archivo.open("Prueba.txt", ios::app);
			if(this->archivo.fail()){
				cout << "Error! \n";
			}
			else{
				cout << "Texto añadido \n";
				this->archivo << cadena << endl;
				this->archivo.close();
			}
		}
};

int main(){
	Archivo uno;

	uno.Agregar(); 
	
	return 0;
}

