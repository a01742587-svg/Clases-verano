#include "Poligono.h"
#include <math.h>

Poligono::Poligono():Figura()
{
    lado=0;
    numLados=0;
}

void Poligono::setLado(float l)
{
    lado=l;
}
void Poligono::setNumLados(int n)
{
    numLados=n;
}
float Poligono::getLado() const
{
    return lado;
}
int Poligono::getNumLados() const
{
    return numLados;
}
string Poligono::Dibuja()
{
    return "Soy un poligono";
}
float Poligono::calculaArea()
{
    return (numLados*pow(lado,2))/(4*tan(M_PI/numLados));
}
void Poligono::imprimeArea()
{
    cout << "Mis coordenadas son: " << "x: " << x << " y: " << y << endl;
    cout<<"El area es: "<<calculaArea()<<endl;
}
Poligono::~Poligono()
{
    //dtor
}