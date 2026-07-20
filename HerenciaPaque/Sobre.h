#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.h"

class Sobre: public Envio{ // clase sobre hereda clase envio

    private:
        static const double cargoAdicional; // es el cargo extra q se cobra, si el sobre sobrepasa las medidas permitidas

    public:
        Sobre(); //constructor por default
        Sobre(Persona r, Persona d, double l, double a); //constructor con parametros

        //SETTERS
        //void setLargo(double l);
        //void setAncho(double a);

        //GETTERS;
        //double getLargo();
        //double getAncho();

        //calcula el costo del sobre
        double calculaCosto();

};

#endif