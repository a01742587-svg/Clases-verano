#ifndef SOBRE_H
#define SOBRE_h

#include "Envio.h"

class Sobre: public Envio{

    private:
        static const double cargoAdicional;

    public:
        Sobre();
        Sobre(Persona r, Persona d, double l, double a);

        double calculaCosto();

};

#endif