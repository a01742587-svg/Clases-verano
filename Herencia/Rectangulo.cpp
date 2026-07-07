#include "Rectangulo.h"
#include <math.h>

Rectangulo::Rectangulo():Figura()
{
    base=0;
    altura=0;
}
void Rectangulo::setBase(float b)
{
    base=b;
}
void Rectangulo::setAltura(float a)
{
    altura=a;
}
float Rectangulo::getBase() const
{
    return base;
}
float Rectangulo::getAltura() const
{
    return altura;
}
string Rectangulo::Dibuja()
{
    return "Soy un rectangulo";
}
float Rectangulo::calculaArea()
{
    return base*altura;
}
void Rectangulo::imprimeArea()
{
    cout << "Mis coordenadas son: " << "x: " << x << " y: " << y << endl;
    cout<<"El area es: "<<calculaArea()<<endl;
}
Rectangulo::~Rectangulo()
{
    //dtor
}   