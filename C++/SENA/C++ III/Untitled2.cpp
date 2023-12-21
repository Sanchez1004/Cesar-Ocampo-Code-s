#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Ventas {
    private:
        string nombre;
        int venta[4];
        int total = 0;
    public:
        Ventas();

        void set_Ventas(int v[4]){
            this->venta[4] = v[4];
        }

        void get_Ventas() {
            for(int i = 0; i < 4; i++) {
                cout << venta[i];
            }
        }

        int get_Total() {
            for(int i = 0; i < 4; i++) {
                total += venta[i];
            }
            return total;
        }

        void set_Nombre(string n){
            this->nombre = n;
        }

        string get_Nombre() {
            return this->nombre;
        }

};

int main(){
    int l;

    cout << "CUANTOS VENDEDORES DESEA INGRESAR: ";
    cin >> l;

    int v[4];
    string n[l];
    int total; 

    Ventas datos[l];

    for(int i = 0; i < l; i++) {
        string n;
        cout << "Escriba el nombre del vendedor numero " << i+1 << ": ";
        cin >> n;
        datos[i].set_Nombre(n);

        for(int j = 0; j < 4; j++) {
            cout << "Ingrese la venta del mes " << j+1 << ": ";
            int v[4];
            cin >> v[j];
            datos[i].set_Ventas(v);
        }
    }

    for(int i = 0; i < l; i++){
        cout << datos[i].get_Nombre();
    }
    return 0;
}
