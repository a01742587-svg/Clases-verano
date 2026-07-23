#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo:public Figura
{
    private:
        float r;

    public:
        Circulo();
        Circulo(float r, int x, int y);

        void setRadio(float r);
        float getRadio() const;

        float calculaArea() override;
        void imprime() override;

        void Dibuja() override;
        virtual ~Circulo();
};

#endif // CIRCULO_H