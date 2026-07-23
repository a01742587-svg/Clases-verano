#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Figura.h"

class Triangulo : public Figura
{
    private:
        float base;
        float altura;

    public:
        Triangulo();
        Triangulo(float base, float altura, int x, int y);

        void setBase(float base);
        void setAltura(float altura);

        float getBase() const;
        float getAltura() const;

        float calculaArea() override;
        float calculaPerimetro() override;

        void imprime() override;
        void Dibuja() override;

        ~Triangulo() override;
};

#endif // TRIANGULO_H