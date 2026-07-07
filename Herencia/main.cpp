#include <iostream>
#include "Figura.h"
#include "Circulo.h"
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

int main()
{
    Figura F;
    Circulo C;
    Rectangulo R;
    Triangulo T;
    Poligono P;

    cout << "Fernanda Espinoza Garcia" << endl;

    F.setX(10);
    F.setY(20);
    cout << F.Dibuja() << endl;
    F.imprimeArea();

    C.setX(150);
    C.setY(500);
    C.setRadio(50);
    cout << C.Dibuja() << endl;
    C.imprimeArea();

    P.setX(100);
    P.setY(200);
    P.setLado(10);
    P.setNumLados(5);
    cout << P.Dibuja() << endl;
    P.imprimeArea();
    
    R.setX(300);
    R.setY(400);
    R.setBase(20);
    R.setAltura(10);
    cout << R.Dibuja() << endl;
    R.imprimeArea();

    T.setX(500);
    T.setY(600);
    T.setBase(30);
    T.setAltura(15);
    cout << T.Dibuja() << endl;
    T.imprimeArea();

    return 0;
}