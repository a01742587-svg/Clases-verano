#include "ListaF.h"

using namespace std;

ListaF::ListaF()
{
    // La lista se crea vacía automáticamente
}

void ListaF::creaListaF()
{
    Fraccion *nuevo;
    char opc;

    do{
        nuevo = new Fraccion();

        nuevo->setNumerador();
        nuevo->setDenominador();

        Fracciones.push_back(nuevo);

        cout << "Capturar otra fraccion? s/n";
        cin >> opc;

    }while(opc != 'n');
}

void ListaF::recorreListaF()
{
    list<Fraccion*>::iterator aux;

    aux = Fracciones.begin();

    while(aux != Fracciones.end()){
        cout << (*aux)->getNumerador() << " / " << (*aux)->getDenominado() << endl;
        aux++;
    }
}

ListaF::~ListaF()
{
    // destructor
}