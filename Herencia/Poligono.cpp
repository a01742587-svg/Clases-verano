#include "Poligono.h"
#include <cmath>

// Constructor por defecto
Poligono::Poligono() : Figura()
{
    lado = 0;
    numLados = 0;
}

// Constructor con parámetros
Poligono::Poligono(float lado, int numLados, int x, int y)
    : Figura(x, y)
{
    this->lado = lado;
    this->numLados = numLados;
}

// Setter de lado
void Poligono::setLado(float l)
{
    lado = l;
}

// Setter del números de lados
void Poligono::setNumLados(int n)
{
    numLados = n;
}

// Getter de lado
float Poligono::getLado() const
{
    return lado;
}

// Getter del números de lados
int Poligono::getNumLados() const
{
    return numLados;
}

// Método polimórfico para dibujar
void Poligono::Dibuja()
{
    cout << "Soy un poligono" << endl;
}

// Calcular el área de un polígono regular
float Poligono::calculaArea()
{
    return (numLados * pow(lado, 2))
           / (4 * tan(3.1416 / numLados));
}
//calcula perimetro
float Poligono::calculaPerimetro()
{
    return numLados * lado;
}

// Imprimir información del polígono
void Poligono::imprime()
{
    cout << "Mis coordenadas son: "
         << "x: " << x
         << " y: " << y << endl;

    cout << "Mi numero de lados es: " << numLados << endl;

    cout << "La medida de cada lado es: " << lado << endl;

    cout << "El area es: " << calculaArea() << endl;

    cout << "El perimetro es: " << calculaPerimetro() << endl;
}

// Destructor
Poligono::~Poligono()
{
    // Destructor
}