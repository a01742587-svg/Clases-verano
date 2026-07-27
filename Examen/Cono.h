#ifndef CONO_H
#define CONO_H
#include "Contenedor.h"

class Cono : public Contenedor
{
    private:
        double radio;
        double altura;

    public:   
        Cono();
        Cono(string f, string m, double r, double a);

        // SETTERS
        void setRadio(double r);
        void setAltura(double a);

        // GETTERS
        double getRadio();
        double getAltura();

        //polimorfismo
        void ImprimirCaracteristicas() override;
        double calculaVolumen() override;

        // Destructor
        virtual ~Cono();
};

#endif

