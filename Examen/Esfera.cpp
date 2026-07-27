#include "Esfera.h"

Esfera::Esfera()
{
    forma = "Esfera";
    material = "No se le asigno un material";
    radio = 0;
}
Esfera::Esfera(string f, string m, double r)
{
    forma = f;
    material = m;
    radio = r;
}
// SETTER
void Esfera::setRadio(double r)
{
    radio = r;
}
// GETTER
double Esfera::getRadio()
{
    return radio;
}
void Esfera::ImprimirCaracteristicas()
{
    cout << "Forma: " << getForma() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Radio: " << getRadio() << endl;
    cout << "Volumen: " << calculaVolumen() << endl;
}
double Esfera::calculaVolumen()
{
    return (4.0/3.0)*3.1416*radio*radio*radio;
}

// Destructor
Esfera::~Esfera()
{

}