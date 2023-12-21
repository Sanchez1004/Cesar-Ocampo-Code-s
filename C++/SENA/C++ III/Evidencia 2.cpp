#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

void Opciones();

class Entero {
	private:
		int a, b;
	public:
		Entero() { }
		void Datos(int A, int B) {
			a = A;
			b = B;
		}
		int suma() { return a + b; }
		int resta() { return a - b; }
	    int multiplicacion() { return a * b; }
	    int potenciacion() { return pow( a, b ); }
	    int division() {
	    	if(b == 0)
		cout << "\nError, division entre 0\n";
		else
			return a / b;
		}
};

class Double {
	private:
		double a, b;
	public:
		Double() { }
		void Datos(double A, double B) {
			a = A;
			b = B;
		}
		double suma() { return a + b; }
		double resta() { return a - b; }
	    double multiplicacion() { return a * b; }
	    double potenciacion() { return pow( a, b ); }
	    double division() {
	    	if(b == 0)
		cout << "\nError, division entre 0\n";
		else
			return a / b;
		}
};

class Cadena {
	private:
		int a, b;
	public:
		Cadena() { }
		void Datos(string A, string B) {
			a = stoi(A);
			b = stoi(B);
		}
		int  suma() { return a + b; }
		int  resta() { return a - b; }
	    int  multiplicacion() { return a * b; }
	    int  potenciacion() { return pow( a, b ); }
	    int  division() {
	    	if(b == 0)
		cout << "\nError, division entre 0\n";
		else
			return a / b;
		}
};

int main(){
	Opciones();
	system("pause");
	return 0;
}
 
void Opciones() {
	Entero entero;
	Double doble;
	Cadena cadena;	
	int opc = 0;
	
	do {
		system("cls");
		cout << "-----------Seleccione el tipo de operacion que desea hacer-----------\n";
		cout << "\n [1] Suma\n";
		cout << " [2] Resta\n";
		cout << " [3] Multiplicacion\n";
		cout << " [4] Division\n";
		cout << " [5] Potenciacion\n";
		cout << " [6] ---Salir---\n\n";
		cin >> opc;
		system("cls");
		switch(opc) {
			case 1:
				int opc2;
				cout << "------------Que tipo de dato desea sumar------------\n";
				cout << " [1] Entero\n";
				cout << " [2] Double\n";
				cout << " [3] Char\n";
				cin >> opc2;
				system("cls");
				if(opc2 == 1) {
					int a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					entero.Datos(a, b);
					cout << "El resultado es: " << entero.suma() << endl;
				}
				else if(opc2 == 2) {
					double a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					doble.Datos(a, b);
					cout << "El resultado es: " << doble.suma() << endl;
				}
				else if(opc2 == 3) {
					string a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					cadena.Datos(a, b);
					cout << "El resultado es: " << cadena.suma() << endl;	
				}
				system("pause");
				break;	
			case 2:
				cout << "------------Que tipo de dato desea restar------------\n";
				cout << " [1] Entero\n";
				cout << " [2] Double\n";
				cout << " [3] Char\n";
				cin >> opc2;
				system("cls");
				if(opc2 == 1) {
					int a1, b1;
					cout << "Ingrese el primer numero: ";
					cin >> a1;
					cout << "Ingrese el segundo numero: ";
					cin >> b1;
					entero.Datos(a1, b1);
					cout << "El resultado es: " << entero.resta() << endl;
				}
				else if(opc2 == 2) {
					double a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					doble.Datos(a, b);
					cout << "El resultado es: " << doble.resta() << endl;
				}
				else if(opc2 == 3) {
					string a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					cadena.Datos(a, b);
					cout << "El resultado es: " << cadena.resta() << endl;
				}
				system("pause");
				break;
			case 3:
				cout << "------------Que tipo de dato desea multiplicar------------\n";
				cout << " [1] Entero\n";
				cout << " [2] Double\n";
				cout << " [3] Char\n";
				cin >> opc2;
				system("cls");
				if(opc2 == 1) {
					int a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					entero.Datos(a, b);
					cout << "El resultado es: " << entero.multiplicacion() << endl;
				}
				else if(opc2 == 2) {
					double a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					doble.Datos(a, b);
					cout << "El resultado es: " << doble.multiplicacion() << endl;
				}
				else if(opc2 == 3) {
					string a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					cadena.Datos(a, b);
					cout << "El resultado es: " << cadena.multiplicacion() << endl;
				}
				system("pause");
				break;
			case 4:
				cout << "------------Que tipo de dato desea division------------\n";
				cout << " [1] Entero\n";
				cout << " [2] Double\n";
				cout << " [3] Char\n";
				cin >> opc2;
				system("cls");
				if(opc2 == 1) {
					int a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					entero.Datos(a, b);
					cout << "El resultado es: " << entero.division() << endl;
				}
				else if(opc2 == 2) {
					double a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					doble.Datos(a, b);
					cout << "El resultado es: " << doble.division() << endl;
				}
				else if(opc2 == 3) {
					string a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					cadena.Datos(a, b);
					cout << "El resultado es: " << cadena.division() << endl;
				}
				system("pause");
				break;
			case 5:
				cout << "------------Que tipo de dato desea potenciar------------\n";
				cout << " [1] Entero\n";
				cout << " [2] Double\n";
				cout << " [3] Char\n";
				cin >> opc2;
				system("cls");
				if(opc2 == 1) {
					int a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					entero.Datos(a, b);
					cout << "El resultado es: " << entero.potenciacion() << endl;
				}
				else if(opc2 == 2) {
					double a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					doble.Datos(a, b);
					cout << "El resultado es: " << doble.potenciacion() << endl;
				}
				else if(opc2 == 3) {
					string a, b;
					cout << "-Ingrese el primer numero: ";
					cin >> a;
					cout << endl;
					cout << "-Ingrese el segundo numero: ";
					cin >> b;
					cout << endl;
					cadena.Datos(a, b);
					cout << "El resultado es: " << cadena.potenciacion() << endl;
				}
				system("pause");
				break;
		}
	}while(opc != 6);
}
