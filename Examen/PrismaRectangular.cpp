#include "PrismaRectangular.h"

//Constructor por defecto 
PrismaRectangular::PrismaRectangular()
{
    forma="Prisma Rectangular";
    material="No se asigno un material";
    largo=0;
    ancho=0;
    altura=0;
}
//Constructor con parametros 
PrismaRectangular::PrismaRectangular(string f, string m, double l, double an, double al)
{
    forma = f;
    material = m;
    largo = l;
    ancho = an;
    altura = al;
}
//SETTERS
void PrismaRectangular::setLargo(double l)
{
    largo=l;
}
void PrismaRectangular::setAncho(double an)
{
    ancho=an;
}
void PrismaRectangular::setAltura(double al)
{
    altura=al;
}
//Getters
double PrismaRectangular::getLargo()
{
    return largo;
}
double PrismaRectangular::getAncho()
{
    return ancho;
}
double PrismaRectangular::getAltura()
{
    return altura;
}
//POLIMORFISMO
void PrismaRectangular::ImprimirCaracteristicas()
{
    cout << "Forma: " << getForma() << endl;
    cout << "Material: " << getMaterial() << endl;
    cout << "Largo: " << getLargo() << endl;
    cout << "Ancho: " << getAncho() << endl;
    cout << "Altura: " << getAltura() << endl;
}
//METODO
double PrismaRectangular::calculaVolumen()
{
    return largo*ancho*altura;
}
//Destructor 
PrismaRectangular::~PrismaRectangular()
{

}