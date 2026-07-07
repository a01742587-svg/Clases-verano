#include "Figura.h"

Figura::Figura()
{
    x=0;
    y=0;
}

void Figura::setX(int x)
{
    this->x=x;
}

void Figura::setY(int y)
{
    this->y=y;
}

int Figura::getX() const
{
    return x;
}

int Figura::getY() const
{
    return y;
}

string Figura::Dibuja()
{
    return "No se que figura soy";
}

float Figura::calculaArea()
{
    return 0;
}

void Figura::imprimeArea()
{
    cout << "Mis coordenadas son: " << "x: " << x << " y: " << y << endl;
    cout << "No conozco mi area" << endl;
}

Figura::~Figura()
{
    //dtor
}