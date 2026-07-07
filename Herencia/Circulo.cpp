#include "Circulo.h"
#include <math.h>

Circulo::Circulo():Figura()
{
    radio=0;
}

void Circulo::setRadio(float r)
{
    radio=r;
}

float Circulo::getRadio() const
{
    return radio;
}

string Circulo::Dibuja()
{
    return "Soy un circulo";
}

float Circulo::calculaArea()
{
    return M_PI*pow(radio,2);
}

void Circulo::imprimeArea()
{
    cout << "Mis coordenadas son: " << "x: " << x << " y: " << y << endl;
    cout<<"El area es: "<<calculaArea()<<endl;
}


Circulo::~Circulo()
{
    //dtor
}