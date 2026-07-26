#include "ListaF.h"

using namespace std;

// Constructor
ListaF::ListaF()
{

}

void ListaF::creaListaF()
{
    Fraccion *nuevo;
    char opc;

    do
    {
        // Crear una nueva fracción
        nuevo = new Fraccion();

        // Pedir los datos
        nuevo->setNumerador();
        nuevo->setDenominador();

       
        Fracciones.push_back(nuevo);

        cout << "Capturar otra fraccion? s/n: ";
        cin >> opc;

    } while (opc != 'n' && opc != 'N');
}

// Recorrer e imprimir la lista
void ListaF::recorreListaF()
{
    list<Fraccion*>::iterator aux;

    aux = Fracciones.begin();

    while (aux != Fracciones.end())
    {
        cout << (*aux)->getNumerador()
             << "/"
             << (*aux)->getDenominador()
             << endl;

        aux++;
    }
}

// Destructor
ListaF::~ListaF()
{
    list<Fraccion*>::iterator aux;

    aux = Fracciones.begin();

    while (aux != Fracciones.end())
    {
        delete *aux;
        aux++;
    }

    Fracciones.clear();
}