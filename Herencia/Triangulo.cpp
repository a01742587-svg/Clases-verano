#include "Triangulo.h"

// Constructor por defecto
Triangulo::Triangulo() : Figura()
{
    base = 0;
    altura = 0;
}

// Constructor con parámetros
Triangulo::Triangulo(float base, float altura, int x, int y)
    : Figura(x, y)
{
    this->base = base;
    this->altura = altura;
}

// Setter de base
void Triangulo::setBase(float b)
{
    base = b;
}

// Setter de altura
void Triangulo::setAltura(float a)
{
    altura = a;
}

// Getter de base
float Triangulo::getBase() const
{
    return base;
}

// Getter de altura
float Triangulo::getAltura() const
{
    return altura;
}

// Método polimórfico
void Triangulo::Dibuja()
{
    cout << "Soy un triangulo" << endl;
}

// Calcular el área
float Triangulo::calculaArea()
{
    return (base * altura) / 2;
}

// Imprimir información
void Triangulo::imprime()
{
    cout << "Mis coordenadas son: "
         << "x: " << x
         << " y: " << y << endl;

    cout << "Mi base es: " << base << endl;
    cout << "Mi altura es: " << altura << endl;
    cout << "El area es: " << calculaArea() << endl;
}

// Destructor
Triangulo::~Triangulo()
{
    // Destructor
}