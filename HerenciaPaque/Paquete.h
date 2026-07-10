#ifndef PAQUETE_H
#define PAQUETE_H

#include <iostream>
#include <string>
#include "Envio.h"

class Paquete: public Envio{
    private:
        double peso;
        double profundidad;
        static const double costoKg;
        
    public:
        Paquete();
        Paquete(Persona r, Persona d, double l, double a, double p, double profu);

        double calculaCosto();


};

#endif