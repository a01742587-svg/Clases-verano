#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo:public Figura
{
    private:
        float radio;

    public:
        Circulo();
        void setRadio(float r);
        float getRadio() const;
        string Dibuja();
        float calculaArea();
        void imprimeArea();
        virtual ~Circulo();
};

#endif // CIRCULO_H