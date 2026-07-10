#ifndef ENVIO_H
#define ENVIO_H

#include <iostream>
#include <string>
#include "Persona.h"

class Envio{
    protected:
        Persona remitente;
        Persona destinario;
        static const double costoEstandar;
        double largo;
        double ancho;

    public:
        Envio();
        Envio( Persona r, Persona d, double l, double a);

        virtual double calculaCosto();

    
};
#endif
