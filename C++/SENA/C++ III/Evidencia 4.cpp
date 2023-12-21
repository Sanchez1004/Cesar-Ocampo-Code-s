#include <iostream>
#include <fstream>
#include <conio.h>
#include <math.h>
#include <string>

using namespace std;

class NumeroImaginario {
	private:
		double ent; 
		double im;
	public:
		NumeroImaginario() {
			ent = 0.0;
			im = 0.0;
		}
		NumeroImaginario(double r, double i) : ent(r), im(i) {}
		
		NumeroImaginario operator+( NumeroImaginario& other ) {
			return NumeroImaginario(ent + other.ent, im + other.im);
		}
		NumeroImaginario operator-( NumeroImaginario& other ) {
			return NumeroImaginario(ent - other.ent, im - other.im);
		}
		NumeroImaginario operator*( NumeroImaginario& other ) {
			return NumeroImaginario(ent * other.ent, im * other.im);
		}
		NumeroImaginario operator/( NumeroImaginario& other ) {
			if(other.ent == 0 || other.im == 0) {
				cout << "No se permite dividir por una expresion (denominador) con valor de 0" << endl;
				return NumeroImaginario(0, 0 );
			}
				else
			return NumeroImaginario	( (ent*other.ent + im*other.im)/(pow(other.ent, 2)+ pow(other.im, 2)) ,
				(other.ent*im - ent*other.im) / (pow(other.ent, 2) + pow(other.im, 2));
		}
		void Imprimir() {
			cout << ent << (im >=0 ? "+" : " ") << im << "i" << endl;
		}
		double get_ent() {
			return ent;
		}
		double get_im() {
			return im;
		}
};

class Op {
	private:
		char oprt;
		NumeroImaginario a;
		NumeroImaginario b;
		NumeroImaginario c;
	public:
		Op(NumeroImginario ax, NumeroImaginario bx, char opt) {
			a= ax;
			b= bx;
			oprt=opt;
		}
		
		void Log() {
			ofstream myfile("archivo.txt" , ios::out | ios::app);
			if(myfile.is_open()) {
				myfile<< c.get_ent();
				myfile<<(c.get_im()>=0 ? "+" : " ");
				myfile<<c.get_im();
				myfile<<"i";
				myfyle<<endl;
				myfile.close();
				cout << "Guardado!";
			}
		}
		
		int main() {
			switch(oprt) {
				case "+":
					c = a + b;
					break:
				case "-":
					c = a - b;
					break;
				case "*": 
					c = a * b;
				case"/":
					c = a / b;
				default:
					cout << "operador no valido" << endl;
					break;
			}
		cout << endl << "Resultado: ";
		c.Imprimir();
		Log();
		}
};

int main() {
	double ent1, im1, ent2, im2;
	char oprt;
	
	cout << "----------------------------------------------------" << endl;
	cout << "--- Calculadora de suma, resta, multiplicacion y ---" << endl;
	cout << "---------- divison de numero complejos -------------" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << endl << "Escriba cada numero en este formato: " << endl;
	cout << "Ej: 3+2i se escribe:    3 2     " << endl;
	cout << "   5-12i se escribe:    3 -12   " << endl;
	cout << "   -3-8i se escribe:    -3 -8   " << endl;
	
	cout << endl << "Introduzca el primer numero complejo" << endl;
	cin >> ent1 >> im1;
	cout << "Ingrese el segundo numero complejo" << endl;
	cin >> ent2 >> im2;
	
	cout << "Ingresa el signo de la operacion a realizar: " << endl;
	cout << "sumas: + | resta: - | multiplicacion_ * | division: / " << endl;
	
	cin >> oprt;
	
	system("cls");
	
	NumeroImaginario a= NumeroImaginario(ent1, im1);
	NumeroImaginario b= NumeroImaginario(ent2, im2);
	Op op(a, b, oprt);
	
	op.main();
	getch();
	return 0;
}
