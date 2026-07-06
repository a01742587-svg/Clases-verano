#include "complejo.h"

int main() {
    Complejo c1(3, 2);
    Complejo c2(4, 3);

    cout << "c1: ";
    c1.imprime();

    cout << "c2: ";
    c2.imprime();

    Complejo suma = c1.suma(c2);
    cout << "Suma: ";
    suma.imprime();

    Complejo producto = c1.multiplicacion(c2);
    cout << "Producto: ";
    producto.imprime();

    Complejo conjugado = c1.conjugado();
    cout << "Conjugado de c1: ";
    conjugado.imprime();

    Complejo multiescalar = c1.multiEscalar(2.0);
    cout << "Multiplicación por escalar (2.0): ";
    multiescalar.imprime();

    return 0;

}