#include "ListaCont.h"
#include "PrismaRectangular.h"
#include "Cilindro.h"
#include "Esfera.h"
#include "Cono.h"

ListaContenedores::ListaContenedores()
{
    
}

void ListaContenedores::creaLista()
{
    Contenedor *nuevo;
    nuevo = new PrismaRectangular("Prisma rectangular","Acero",7,6,4);
    contenedores.push_back(nuevo);
    nuevo = new PrismaRectangular("Prisma rectangular","Fibra de vidrio",8,4,5);
    contenedores.push_back(nuevo);
    nuevo = new Cilindro("Cilindro","Acero",3,9);
    contenedores.push_back(nuevo);
    nuevo = new Cilindro("Cilindro","Fibra de vidrio",4,7);
    contenedores.push_back(nuevo);
    nuevo = new Esfera("Esfera","Acero",4);
    contenedores.push_back(nuevo);
    nuevo = new Esfera("Esfera","Fibra de vidrio",7);
    contenedores.push_back(nuevo);
    nuevo = new Cono( "Cono", "Acero",4,9);
    contenedores.push_back(nuevo);
    nuevo = new Cono("Cono","Fibra de vidrio",6,7);
    contenedores.push_back(nuevo);
}

//RECORREMOS LISTA
void ListaContenedores::recorreLista()
{
    list<Contenedor*>::iterator aux;
    aux = contenedores.begin();
    while (aux != contenedores.end())
    {
        cout<< endl;

        (*aux)->ImprimirCaracteristicas();
        cout << endl;
        aux++;
    }
}

double ListaContenedores::calculaVolumenTotal()
{
    double volumenTotal = 0;

    list<Contenedor*>::iterator aux;

    aux = contenedores.begin();

    while (aux != contenedores.end())
    {
        volumenTotal = volumenTotal+(*aux)->calculaVolumen();

        aux++;
    }

    return volumenTotal;
}

int ListaContenedores::cuentaPorMaterial(string materialBuscado)
{
    int contador = 0;

    list<Contenedor*>::iterator aux;

    aux = contenedores.begin();

    while (aux != contenedores.end())
    {
        if ((*aux)->getMaterial() ==materialBuscado)
        {
            contador++;
        }

        aux++;
    }

    return contador;
}
void ListaContenedores::comparaContenedores()
{
    list<Contenedor*>::iterator aux;

    Contenedor *primero;
    Contenedor *segundo;

    aux = contenedores.begin();

    primero = *aux;

    aux++;

    segundo = *aux;

    cout << "COMPARACION DE CONTENEDORES" << endl;

    if (*primero > *segundo)
    {
        cout << primero->getForma()
             << " tiene mayor volumen que "
             << segundo->getForma()
             << endl;
    }
    else
    {
        cout << primero->getForma()
             << " no tiene mayor volumen que "
             << segundo->getForma()
             << endl;
    }
}


ListaContenedores::~ListaContenedores()
{
    list<Contenedor*>::iterator aux;

    aux = contenedores.begin();

    while (aux!=contenedores.end())
    {
        delete *aux;
        aux++;
    }

    contenedores.clear();
}