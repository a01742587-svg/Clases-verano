#ifndef LISTAF_H
#define LISTAF_H

#include "Fraccion.h"
#include <list>
#include <iostream>

using namespace std;

class ListaF
{
    private:
        // Lista de apuntadores a objetos Fraccion
        list<Fraccion*> Fracciones;

    public:
        // Constructor
        ListaF();

        // Crear la lista
        void creaListaF();

        // Recorrer e imprimir la lista
        void recorreListaF();

        // Destructor
        virtual ~ListaF();
};

#endif // LISTAF_H