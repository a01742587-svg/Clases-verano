#include "Rectangulo.h"

// Constructor por defecto
Rectangulo::Rectangulo() : Figura()
{
    base = 0;
    altura = 0;
}

// Constructor con parámetros
Rectangulo::Rectangulo(float base, float altura, int x, int y)
    : Figura(x, y)
{
    this->base = base;
    this->altura = altura;
}

// Setter de base
void Rectangulo::setBase(float b)
{
    base = b;
}

// Setter de altura
void Rectangulo::setAltura(float a)
{
    altura = a;
}

// Getter de base
float Rectangulo::getBase() const
{
    return base;
}

// Getter de altura
float Rectangulo::getAltura() const
{
    return altura;
}

// Método polimórfico
void Rectangulo::Dibuja()
{
    cout << "Soy un rectangulo" << endl;
}

// Calcular el área
float Rectangulo::calculaArea()
{
    return base * altura;
}

// Imprimir información
void Rectangulo::imprime()
{
    cout << "Mis coordenadas son: "
         << "x: " << x
         << " y: " << y << endl;

    cout << "Mi base es: " << base << endl;
    cout << "Mi altura es: " << altura << endl;
    cout << "El area es: " << calculaArea() << endl;
}

// Destructor
Rectangulo::~Rectangulo()
{
    // Destructor
}