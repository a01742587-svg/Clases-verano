#include "Triangulo.h"
#include <math.h>

Triangulo::Triangulo():Figura()
{
    base=0;
    altura=0;
}
void Triangulo::setBase(float b)
{
    base=b;
}
void Triangulo::setAltura(float a)
{
    altura=a;
}
float Triangulo::getBase() const
{
    return base;
}
float Triangulo::getAltura() const
{
    return altura;
}
string Triangulo::Dibuja()
{
    return "Soy un triangulo";
}
float Triangulo::calculaArea()
{
    return (base*altura)/2;
}
void Triangulo::imprimeArea()
{           
    cout << "Mis coordenadas son: " << "x: " << x << " y: " << y << endl;
    cout<<"El area es: "<<calculaArea()<<endl;
}
Triangulo::~Triangulo()
{
    //dtor
}  