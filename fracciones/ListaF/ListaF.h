#ifndef LISTAF_H
#define LISTAF_H

#include "Fraccion.h"
#include <list>
#include <iostream>

using namespace std;

class ListaF
{
    private:
        list<Fraccion*> Fracciones; // lista de apuntadores a Fraccion

    public:
        ListaF();
        void creaListaF();
        void recorreListaF();
        virtual ~ListaF();
};

#endif