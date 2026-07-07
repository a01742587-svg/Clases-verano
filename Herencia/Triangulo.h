#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura.h"

class Triangulo: public Figura {
    private:
    float base;
    float altura;

    public:
        Triangulo();
        void setBase(float b);
        void setAltura(float a);
        float getBase() const;
        float getAltura() const;
        string Dibuja();
        float calculaArea();
        void imprimeArea();
        virtual ~Triangulo();
};

#endif // TRIANGULO_H