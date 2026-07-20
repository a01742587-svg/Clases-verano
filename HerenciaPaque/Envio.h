#ifndef ENVIO_H
#define ENVIO_H

#include <iostream>
#include <string>
#include "Persona.h"

class Envio{ //creamos nuestra clase envio
    protected:
        Persona remitente; // es una persona que envia paquete o sobre
        Persona destinatario; // persona recibe paquete/sobre

        static const double costoEstandar; // costo de cualquier envio
        
        //medidad de nuestro envio
        double largo;
        double ancho;

    public:
        Envio(); //constructor por default
        Envio( Persona r, Persona d, double l, double a); //constructor con parametros,recibe datos de envio

        //SETTERS, permite modificar atributos
        void setRemitente(Persona r);
        void setDestinatario(Persona d);
        void setLargo(double l);
        void setAncho(double a);

        //GETTERS, nos permite recibir los atributos
        Persona getRemitente();
        Persona getDestinatario();
        double getLargo();
        double getAncho();

        // Calcula el costo del envio
        virtual double calculaCosto();

    
};
#endif
