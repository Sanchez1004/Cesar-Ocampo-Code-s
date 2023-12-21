#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <conio.h>

using namespace std;

class Key {
	private:
		string linea;
		bool proceso;
		ofstream archivo;
	public:
		Key() {
			this->linea = "";
			this->proceso = false;
		}
		
		void pulsaciones() {
			this->archivo.open("bad_file.txt", ios::app);
			if(this->archivo.fail()) {
				cout << "Eres idiota" << endl;
			}
			else {
				do {
					if(kbhit()) {
						char tecla = getch();
						if(tecla == 27) {
							this->proceso = true;
						}
						else {
							this->linea += tecla;
							if(this->linea.length() > 50 || tecla == 32 || tecla == 13) {
								this->archivo << this->linea << endl;
								this->linea = "";
							} 
						}
					}
				}while(!this->proceso);
			}
		}
};

int main(){
	Key objeto;
	objeto.pulsaciones();
}

