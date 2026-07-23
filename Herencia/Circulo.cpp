#include "Circulo.h"
#include <cmath>

// Constructor por defecto
Circulo::Circulo() : Figura()
{
    r = 0;
}

// Constructor con parámetros
Circulo::Circulo(float r, int x, int y) : Figura(x, y)
{
    this->r = r;
}

// Setters
void Circulo::setRadio(float r)
{
    this->r = r;
}

// Getters
float Circulo::getRadio() const
{
    return r;
}

//Metodos

// Dibujar
void Circulo::Dibuja()
{
    cout << "Soy un circulo" << endl;
}

// Calcular el área
float Circulo::calculaArea()
{
    return 3.1416 * pow(r, 2);
}

// Calcular perímetro
float Circulo::calculaPerimetro()
{
    return 2 * 3.1416 * r;
}

// Imprimir información
void Circulo::imprime()
{
    cout << "Mis coordenadas son: "
         << "x: " << x
         << " y: " << y << endl;

    cout << "Mi radio es: " << r << endl;
    cout << "El area es: " << calculaArea() << endl;
    cout << "El perimetro es: " << calculaPerimetro() << endl;
}

// Destructor
Circulo::~Circulo()
{
    // Destructor
}