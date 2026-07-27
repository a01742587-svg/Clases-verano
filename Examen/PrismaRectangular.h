#ifndef PRISMARECTANGULAR_H
#define PRISMARECTANGULAR_H
#include "Contenedor.h"

class PrismaRectangular : public Contenedor
{
    private:
        double largo;
        double ancho;
        double altura;
    public:
        PrismaRectangular();
        PrismaRectangular(string f, string m, double l, double an, double al);

        //SETTERS
        void setLargo(double l);
        void setAncho(double an);
        void setAltura(double al);

        //GETTERS
        double getLargo();
        double getAncho();
        double getAltura();

        //Metdos 
        void ImprimirCaracteristicas() override;
        double calculaVolumen() override;

        //Destructor
        virtual ~PrismaRectangular();
};
#endif