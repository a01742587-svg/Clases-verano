#include "Cono.h"

Cono::Cono()
{
    forma = "Cono";
    material = "No se le asigno un material";
    radio = 0;
    altura = 0;
}
Cono::Cono(string f, string m, double r, double a)
{
    forma = f;
    material = m;
    radio = r;
    altura = a;
}
//SETTERS
void Cono::setRadio(double r)
{
    radio = r;
}
void Cono::setAltura(double a)
{
    altura = a;
}
//GETTERS
double Cono::getRadio()
{
    return radio;
}

double Cono::getAltura()
{
    return altura;
}
//POLIMORFISMO
void Cono::ImprimirCaracteristicas()
{
    cout << "Forma: " << getForma() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Radio: " << getRadio() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Volumen: " << calculaVolumen() << endl;
}

double Cono::calculaVolumen()
{
    return (1.0/3.0)*3.1416*radio*radio*altura;
}

//Destructor
Cono::~Cono()
{

}