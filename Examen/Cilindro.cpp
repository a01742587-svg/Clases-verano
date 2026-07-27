#include "Cilindro.h"

Cilindro::Cilindro()
{
    forma="Cilindro";
    material="No se le asigno un material";
    radio=0;
    altura=0;
}
Cilindro::Cilindro(string f, string m, double r, double a)
{
    forma= f;
    material=m;
    radio=r;
    altura=a;
}
void Cilindro::setRadio(double r)
{
    radio=r;
}
void Cilindro::setAltura(double a)
{
    altura = a;
}
double Cilindro::getRadio()
{
    return radio;
}

double Cilindro::getAltura()
{
    return altura;
}

//Polimorfismo
void Cilindro::ImprimirCaracteristicas()
{
    cout << "Forma: " << getForma() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Radio: " << getRadio() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Volumen: " << calculaVolumen() << endl;
}

double Cilindro::calculaVolumen()
{
    return 3.1416*radio*radio*altura;
}

//Destructor
Cilindro::~Cilindro()
{

}