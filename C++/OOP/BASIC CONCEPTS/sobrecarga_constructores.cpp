//Sobrecarga de constructores

#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha {
    private: //Atributos
        int day, month, year;
    
    public: //Métodos
        Fecha(int, int, int); //Constructor 1
        Fecha(long); // Constructor 2
        void mostrarFecha();
};

//Constructor 1
Fecha::Fecha(int _day, int _month, int _year) {
    day = _day;
    month = _month;
    year = _year;
};

//Constructor 2
Fecha::Fecha(long fecha){
    year = int(fecha / 10000); //get the year
    month = int((fecha - year * 10000) / 100); //get the month
    day = int(fecha - year * 10000 - month * 100); //get the day
};

void Fecha::mostrarFecha() {
    cout << "La fecha es: " << day << "/" << month << "/" << year << endl;
}

int main() {
    Fecha hoy(17, 6, 2023);
    Fecha ayer(20230616);

    hoy.mostrarFecha();
    ayer.mostrarFecha();

    return 0;
}
