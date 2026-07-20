#ifndef PAQUETE_H
#define PAQUETE_H

#include <iostream>
#include <string>
#include "Envio.h"

class Paquete: public Envio{ // la clase paquete hereda : la clase envio
    private:
    //Atributos priv
        double peso;
        double profundidad;
        static const double costoKg;
        
    public:
        Paquete(); //constructor por default
        Paquete(Persona r, Persona d, double l, double a, double p, double profu); //constructor con parametros

        //SETTERS
        void setPeso(double p);
        void setProfundidad(double profu);

        //GETTERS
        double getPeso();
        double getProfundidad();

        // calcula el costo del paquete 
        double calculaCosto();


};

#endif