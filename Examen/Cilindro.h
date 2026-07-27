#ifndef CILINDRO_H
#define CILINDRO_H
#include "Contenedor.h"

class Cilindro : public Contenedor {
    private:
        double radio;
        double altura;

    public:
        Cilindro();
        Cilindro(string f, string m, double r, double a);

        //setters
        void setRadio(double r);
        void setAltura(double a);
        //getters
        double getRadio();
        double getAltura();
        
        //Metodos
        void ImprimirCaracteristicas()override;
        double calculaVolumen() override;

        //Destructor 
        virtual ~Cilindro();
};
#endif