#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

class Ventas {
	private:
		string nombre;
		int venta[4];
		int total = 0;
	public:
		Ventas() {	
		};
		void set_Ventas(int v[4]) {
			for(int i = 0; i < 4; i++) {
				venta[i] = v[i];
			}
		}
		void set_Nombre(string n) {
			nombre = n;
		}
		void get_Ventas() {
			for(int i = 0; i < 4; i++) {
				cout << setw(15) << venta[i];
			}
		}
		void get_Total() {
			for(int i = 0; i < 4; i++) {
				total += venta[i];
			}
			cout << setw(15) << total << endl;
		}
		void get_Nombre() {
			cout << setw(10) << nombre;	
		}
};

void Menu();

int main(){
	Menu();
	getch();
}

void Menu() {
	int l;
	Ventas datos[l];

	cout << "CUANTOS VENDEDORES DESEA INGRESAR: ";
	cin >> l;
	system("cls");
	
	for(int i = 0; i < l; i++) {
		string n;
		cout << "ESCRIBA EL NOMBRE DEL VENDEDOR NUMERO " << i+1 << ": ";
		cin >> n;
		cout << "\n";
		datos[i].set_Nombre(n);
		for(int j = 0; j < 4; j++) {
			int v[4];
			cout << " Ingrese la venta del mes " << j+1 << ": ";
			cin >> v[j];
			datos[i].set_Ventas(v);
		}
		system("cls");
	}
	system("cls"); 
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << "-------------------------VENTAS TOTALES VENDEDORES DE CADA MES----------------------------"<< endl;
	cout << "------------------------------------------------------------------------------------------" << endl;
	cout << endl << setw(10) << "VENDEDOR"  << setw(15) << "MES 1" << setw(15) << "MES 2" << setw(15) << "MES 3" << setw(15) << "MES 4" << setw(15) << "TOTAL" << endl;
	for(int i = 0; i < l; i++) {
		datos[i].get_Nombre();
		datos[i].get_Ventas();
		datos[i].get_Total();
	}
	system("pause");
}
