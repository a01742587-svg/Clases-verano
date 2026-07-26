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

void ListaF::realizaOperaciones()
{
    if (Fracciones.size() < 2)
    {
        cout << "Se necesitan al menos dos fracciones" << endl;
        return;
    }

    list<Fraccion*>::iterator aux;
    aux = Fracciones.begin();

    Fraccion *F1 = *aux;

    aux++;

    Fraccion *F2 = *aux;

    Fraccion suma = (*F1) + (*F2);
    Fraccion resta = (*F1) - (*F2);

    cout << "\nOperaciones con las primeras dos fracciones" << endl;

    cout << "Suma: ";
    suma.imprimeResultado();

    cout << "Resta: ";
    resta.imprimeResultado();

    if (F2->getNumerador() != 0)
    {
        Fraccion division = (*F1) / (*F2);

        cout << "Division: ";
        division.imprimeResultado();
    }
    else
    {
        cout << "No se puede dividir entre una fraccion que valga cero"
             << endl;
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