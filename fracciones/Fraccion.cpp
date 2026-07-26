#include "Fraccion.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Fraccion::Fraccion()
{
    num = 0;
    den = 1;
}

// Constructor con parámetros
Fraccion::Fraccion(int num, int den)
{
    this->num = num;

    if (den == 0)
    {
        cout << "El denominador NO debe ser 0" << endl;
        cout << "Se guardara como 1" << endl;

        this->den = 1;
    }
    else
    {
        this->den = den;
    }
}

// Setters
void Fraccion::setNumerador()
{
    cout << "Numerador: ";
    cin >> num;
}


void Fraccion::setDenominador()
{
    cout << "Denominador: ";
    cin >> den;

    if (den == 0)
    {
        cout << "El denominador NO debe ser 0" << endl;
        cout << "Se guardara como 1" << endl;

        den = 1;
    }
}

void Fraccion::setNumerador(int num)
{
    this->num = num;
}

void Fraccion::setDenominador(int den)
{
    if (den == 0)
    {
        cout << "El denominador NO debe ser 0" << endl;
        cout << "Se guardara como 1" << endl;

        this->den = 1;
    }
    else
    {
        this->den = den;
    }
}

// Getters
int Fraccion::getNumerador() const
{
    return num;
}

int Fraccion::getDenominador() const
{
    return den;
}

// Métodos
void Fraccion::reduceFraccion()
{
    int numero = num;
    int denominador = den;

    if (numero < 0)
    {
        numero = numero * -1;
    }

    if (denominador < 0)
    {
        denominador = denominador * -1;
    }
    while (denominador != 0)
    {
        int residuo = numero % denominador;
        numero = denominador;
        denominador = residuo;
    }
    int mcd = numero;

    if (mcd != 0)
    {
        num = num / mcd;
        den = den / mcd;
    }

    if (den < 0)
    {
        num = num * -1;
        den = den * -1;
    }
}

// Sobrecargas
Fraccion Fraccion::operator/(const Fraccion &F2) const
{
    Fraccion R;

    R.setNumerador(
        num * F2.getDenominador()
    );

    R.setDenominador(
        den * F2.getNumerador()
    );

    R.reduceFraccion();

    return R;
}


Fraccion Fraccion::operator+(const Fraccion &F2) const
{
    Fraccion R;

    R.setNumerador(
        (num * F2.getDenominador())
        + (F2.getNumerador() * den)
    );

    R.setDenominador(
        den * F2.getDenominador()
    );

    R.reduceFraccion();

    return R;
}

Fraccion Fraccion::operator-(const Fraccion &F2) const
{
    Fraccion R;

    R.setNumerador(
        (num * F2.getDenominador())
        - (F2.getNumerador() * den)
    );

    R.setDenominador(
        den * F2.getDenominador()
    );

    R.reduceFraccion();

    return R;
}

// Imprimir resultado
void Fraccion::imprimeResultado() const
{
    cout << num << "/" << den << endl;
}

// Destructor
Fraccion::~Fraccion()
{

}