#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo: public Figura {
    private:
    float base;
    float altura;

    public:
        Rectangulo();
        void setBase(float b);
        void setAltura(float a);
        float getBase() const;
        float getAltura() const;
        string Dibuja();
        float calculaArea();
        void imprimeArea();
        virtual ~Rectangulo();
};

#endif // RECTANGULO_H