#include <iostream>
#include <cmath>
#include <cctype>
 
using namespace std;
 
template <class T>
class Calculadora {
public:
    Calculadora();
    Calculadora( T x, T y );
 
    T suma() { return a + b; }
    T resta() { return a - b; }
    T multiplicacion() { return a * b; }
    T division();
    T potenciacion() { return pow( a, b ); }
 
    T obtenerA() { return a; }
    T obtenerB() { return b; }
 
private:
    T a;
    T b;
};
 
template <class T>
Calculadora<T>::Calculadora()
{
    a = 10;
    b = 10;
}
 
template <class T>
Calculadora<T>::Calculadora( T x, T y )
{
    int ai, bi;
 
    if( isalpha( x ) )
        a = ai = int( x );
    else
        a = x;
 
    if( isalpha( y ) )
        b = bi = int( y );
    else
        b = y;
}
 
template <class T>
T Calculadora<T>::division()
{
    if( b == 0 )
        cout << "\nError, division entre 0\n";
    else
        return a / b;
}
 
int main()
{
    Calculadora<int> A;
    cout << "\nConstructor por defecto:"
         << "\nValor de a = " << A.obtenerA()
         << "\nValor de b = " << A.obtenerB()
         << "\nSuma " << A.obtenerA() << " + " << A.obtenerB() << " = " << A.suma();
 
    cout << "\n\nConstructor parametrico:";
 
    int x, y;
    cout << "\n\nIntroduzca dos numeros Enteros: "; cin >> x >> y;
    Calculadora<int> B( x, y );
    cout << "\nValor de a = " << B.obtenerA()
         << "\nValor de b = " << B.obtenerB()
         << "\nSuma " << B.obtenerA() << " + " << B.obtenerB() << " = " << B.suma();
 
    double w, z;
    cout << "\n\nIntroduzca dos numeros Doble: "; cin >> w >> z;
    Calculadora<int> C( w, z );
    cout << "\nValor de a = " << C.obtenerA()
         << "\nValor de b = " << C.obtenerB()
         << "\nSuma " << C.obtenerA() << " + " << C.obtenerB() << " = " << C.suma();
 
    char q, p;
    cout << "\n\nIntroduzca dos Letras: "; cin >> q >> p;
    Calculadora<int> D( q, p );
    cout << "\nValor de a = " << D.obtenerA()
         << "\nValor de b = " << D.obtenerB()
         << "\nSuma " << D.obtenerA() << " + " << D.obtenerB() << " = " << D.suma();
 
 
    cout << endl;
 
    return 0;
 
}
