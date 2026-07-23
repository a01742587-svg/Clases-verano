#include "Figura.h"

// Constructor por defecto
Figura::Figura()
{
    x = 0;
    y = 0;
}

// Constructor con parámetros
Figura::Figura(int x, int y)
{
    this->x = x;
    this->y = y;
}

// Setter de x
void Figura::setX(int x)
{
    this->x = x;
}

// Setter de y
void Figura::setY(int y)
{
    this->y = y;
}

// Getter de x
int Figura::getX() const
{
    return x;
}

// Getter de y
int Figura::getY() const
{
    return y;
}

// Método para dibujar
void Figura::Dibuja()
{
    cout << "No se que figura soy" << endl;
}

// Método para calcular el área
float Figura::calculaArea()
{
    return 0;
}

// Método para imprimir
void Figura::imprime()
{
    cout << "Mis coordenadas son: "
         << "x: " << x
         << " y: " << y << endl;

    cout << "No conozco mi area" << endl;
}

// Destructor
Figura::~Figura()
{
    
}