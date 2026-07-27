#ifndef LISTACONT_H
#define LISTACONT_H
#include <iostream>
#include <list>
#include <string>
#include "Contenedor.h"

using namespace std;

class ListaContenedores
{
    private:
        //Lista
        list<Contenedor*> contenedores;

    public:
        //Constructor por defecto
        ListaContenedores();

        void creaLista();
        void recorreLista();
        double calculaVolumenTotal();
        int cuentaPorMaterial(string materialBuscado);
        void comparaContenedores();

        //Destructor
        ~ListaContenedores();
};

#endif