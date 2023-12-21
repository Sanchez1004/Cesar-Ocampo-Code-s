#include <iostream>
#include <string>

using namespace std;

class Nodo {
	public:
		int dato;
		Nodo *siguiente;
		
		Nodo(){
			this->dato = 0;
			this->siguiente = NULL;
		}
};

class Pila {
	public:
		Nodo *tope;
		int tamano;
		Pila() {
			this->tamano = 0;
			this->tope = NULL;
		}
		
		void Insertar(int n) {
			Nodo *nuevo = new Nodo();
			nuevo->dato = n;
			nuevo->siguiente = this->tope;
			this->tope = nuevo;
			cout << "\n Nodo " << n << " Nodo insertado correctamente. \n" << endl;
			this->tamano++;
		}
		
		void Imprimir() {
			Nodo *aux = this->tope;
			while(aux != NULL) {
				cout << "Dato - " << aux->dato << endl;
				aux = aux->siguiente;
			}
		}
		
		int Obtener(int referencia) {
			Nodo *aux2 = this->tope;
			while(aux2 != NULL) {
				if(aux2->dato == referencia) {
					return aux2->dato;
					break;
				}
				else {
					aux2 = aux2->siguiente;
				}
			}
		}
};

int main(){
	int opcion;
	Pila a = Pila();
	
	do {
		system("cls");
		cout << " \n [1] Insertar \n";
		cout << " [2] Imprimir \n";
		cout << " [3] Buscar \n";
		cout << " [4] Salir \n";
		cout << "\nIngrese una opcion: ";
		cin >> opcion;
		if(opcion == 1) {
			int n;
			system("cls");
			cout << "Ingrese un numero: ";
			cin >> n;
			a.Insertar(n);
			system("pause");
		}
		else if(opcion == 2) {
			system("cls");
			cout << "Pila: " << endl;
			a.Imprimir();
			system("pause");
		}
		else if(opcion == 3) {
			int n;
			system("cls");
			cout << "Ingrese el valor a buscar: ";
			cin >> n;
			cout << a.Obtener(n) << endl;
			system("pause");
		}
	}while(opcion != 4);
	
	return 0;
}

