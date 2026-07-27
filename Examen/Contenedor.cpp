#include "Contenedor.h"

//Creamos nuestro constructor por defecto
Contenedor::Contenedor()
{
    forma= "No hay una forma asignada";
    material= "No hay material asignado";
}
//Constructor con parametros
Contenedor::Contenedor(string f, string m)
{
    forma=f; // forma la definimos como una variable f
    material=m; // material lo definimos como variable m
}
//SETTERS
void Contenedor::setForma(string f)
{
    forma=f;
}
void Contenedor::setMaterial(string m)
{
    material=m;
}
//GETTERS
string Contenedor::getForma()
{
    return forma;
}
string Contenedor::getMaterial()
{
    return material;
}
//SOBRECARGA
bool Contenedor::operator>(Contenedor &otro)
{
    if  (calculaVolumen() > otro.calculaVolumen())
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Destructor 
Contenedor::~Contenedor()
{

}