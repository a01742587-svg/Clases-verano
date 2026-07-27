#ifndef ESFERA_H
#define ESFERA_H
#include "Contenedor.h"

class Esfera : public Contenedor
{
    private:
        double radio;

    public:
        //Constructor por defecto
        Esfera();
        //Constructor con parametros
        Esfera(string f, string m, double r);

        //SETTER
        void setRadio(double r);
        //GETTER
        double getRadio();

        //Polimorfismo
        void ImprimirCaracteristicas() override;
        double calculaVolumen() override;

        //Destructor
        virtual ~Esfera();
};

#endif