#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Zapato {
	private:
		string color;
		double precio;
	public:
		Zapato() {
			this->color = "";
			this->precio = 0;
		}
		
		void Insertar(string c, float p) {
			this->color = c;
			this->precio = p;
		}
		
		void Mostrar() {
			cout << "Color: " << this->color << " - " << this->precio << endl;
		}
};

int main(){
	vector<Zapato> zapatos;
	int opcion;
	do {
		system("cls");
		cout << "[1] Ingresar \n";
		cout << "[2] Mostrar \n";
		cout << "[3] Eliminar \n";
		cout << "[4] Salir \n";
		cout << "\nOpcion: ";
		cin >> opcion;
		if(opcion == 1) {
			system("cls");
			string c;
			double p;
			Zapato z = Zapato();
			cout << "Color: ";
			cin >> c;
			cout << "Precio: ";
			cin >> p;
			z.Insertar(c, p);
			zapatos.push_back(z);
			system("pause");
		}
		else if(opcion == 2) {
			system("cls");
			cout << " | Objetos |" << endl;
			for(int i = 0; i < zapatos.size(); i++) {
				zapatos[i].Mostrar();
			}
			system("pause");
		}
	}while(opcion != 4);
	
	return 0;
}

