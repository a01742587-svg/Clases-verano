#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura
{
    private:
        float base;
        float altura;

    public:
        Rectangulo();
        Rectangulo(float base, float altura, int x, int y);


        void setBase(float b);
        void setAltura(float a);


        float getBase() const;
        float getAltura() const;


        void Dibuja() override;
        float calculaArea() override;
        void imprime() override;


        ~Rectangulo() override;
};

#endif // RECTANGULO_H