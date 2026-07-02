#include <iostream>
#include "Circulo.h"

using namespace std;

int main() {
    Circulo c;

    c.setX(3);
    c.setY(5);
    c.setRadio(4);

    cout << c.Dibuja() << endl;
    cout << "Posicion: (" << c.getX() << ", " << c.getY() << ")" << endl;
    c.imprimeArea();
    cout << endl;

    return 0;
}