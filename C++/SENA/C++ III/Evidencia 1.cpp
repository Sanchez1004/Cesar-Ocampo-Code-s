#include <iostream>
#include <string>
using namespace std;

class Mamifero {
	private:
		string especie;
		string color;
		int edad;
	public:
		Mamifero() {}
		void get_Caracteristicas(string p, string c, int e) {
			this->especie = p;
			this->color = c;
			this->edad = e;
		}
		
		void set_Caracteristicas() {
			cout << "Especie :" << this->especie << endl;
			cout << "Color: " << this->color << endl;
			cout << "Edad: " << to_string(this->edad);
		}
};

class Ave {
	private:
		string especie;
		string color;
		int edad;
	public:
		Ave() {}
		void get_Caracteristicas(string p, string c, int e) {
			this->especie = p;
			this->color = c;
			this->edad = e;
		}
		
		void set_Caracteristicas() {
			cout << "Especie :" << this->especie << endl;
			cout << "Color: " << this->color << endl;
			cout << "Edad: " << to_string(this->edad);
		}
};

class Reptil {
	private:
		string especie;
		string color;
		int edad;
	public:
		Reptil() {}
		void get_Caracteristicas(string p, string c, int e) {
			this->especie = p;
			this->color = c;
			this->edad = e;
		}
		
		void set_Caracteristicas() {
			cout << "Especie :" << this->especie << endl;
			cout << "Color: " << this->color << endl;
			cout << "Edad: " << to_string(this->edad); 
		}
};

void opciones();

int main(){
	opciones();
	
	system("pause");
    return 0;
}

void opciones() {
	int opc = 1;
	Mamifero mamifero[3];
	Ave ave[3];
	Reptil reptil[3];
	do {
		system("cls");
		cout << "QUE TIPO DE ANIMAL DESEA INGRESAR\n\n";
		cout << " [1] Mamifero.\n";
		cout << " [2] Ave.\n";
		cout << " [3] Reptil.\n";
		cout << " [4] Ver animales.\n";
		cout << " [5] Salir.\n\n";
		cin >> opc;
		
		system("cls");
		if(opc == 1) {
			int contador = 0;
			do {
				string p;
				string c;
				int e;
				
				cout << "Especie: ";
				cin >> p;
				cout << "Color: ";
				cin >> c;
				cout << "Edad: ";
				cin >> e; cout << endl;
				mamifero[contador].get_Caracteristicas(p, c, e);
				contador++;
			}while(contador < 3);
		}
		else if(opc == 2) {
			int contador = 0;
			do {
				string p;
				string c;
				int e;
				
				cout << "Especie: ";
				cin >> p;
				cout << "Color: ";
				cin >> c;
				cout << "Edad: ";
				cin >> e; cout << endl;
				ave[contador].get_Caracteristicas(p, c, e);
				contador++;
			}while(contador < 3);
		}
		else if(opc == 3) {
			int contador = 0;
			do {
				string p;
				string c;
				int e;
				
				cout << "Especie: ";
				cin >> p;
				cout << "Color: ";
				cin >> c;
				cout << "Edad: ";
				cin >> e; cout << endl;
				reptil[contador].get_Caracteristicas(p, c, e);
				contador++;
			}while(contador < 3);
		}
		else if(opc == 4) {
			cout << "--------------------------Mamiferos--------------------------" << "\n" << endl;
			for(int i = 0; i < 3; i++) {
				mamifero[i].set_Caracteristicas();
				cout << "\n\n";
			}
			
			cout << "\n-----------------------------Aves-----------------------------" << "\n" << endl;
			for(int i = 0; i < 3; i++) {
				ave[i].set_Caracteristicas();
				cout << "\n\n";
			}
			
			cout << "\n---------------------------Reptiles---------------------------" << "\n" << endl;
			for(int i = 0; i < 3; i++) {
				reptil[i].set_Caracteristicas();
				cout << "\n\n";
			}		
			system("pause");
		}
	}while (opc != 5);
}
