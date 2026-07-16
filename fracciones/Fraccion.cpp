#include "Fraccion.h"
#include <iostream>

using namespace std;

Fraccion::Fraccion()
{
    // ctor
    num = 0;
    den = 0;
}

Fraccion::Fraccion(int d, int n)
{
    num = n;
    den = d;
}

void Fraccion::setNumerador()
{
    cout << "Captura el numerador" << endl;
    cin >> num;
}

void Fraccion::setDenominador()
{
    cout << "Captura el denominador" << endl;
    cin >> den;
}

void Fraccion::setNumerador(int num)
{
    this->num = num; // sobrecarga de parámetros
}

void Fraccion::setDenominador(int den)
{
    this->den = den;
}

int Fraccion::getNumerador() const
{
    return num;
}

int Fraccion::getDenominado() const
{
    return den;
}

void Fraccion::reduceFraccion()
{

}

Fraccion Fraccion::divideFraccion(const Fraccion &F2)
{
    Fraccion R;

    R.setNumerador(num * F2.getDenominado());
    R.setDenominador(den * F2.getNumerador());

    return R;
}

void Fraccion::imprimeResultado()
{
    cout << "El resultado es: " << num << "/" << den << endl;
}

Fraccion::~Fraccion()
{
    // dtor
}