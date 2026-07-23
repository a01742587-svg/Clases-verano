#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura
{
    private:
        float base;
        float altura;

    public:
        // Constructores
        Rectangulo();
        Rectangulo(float base, float altura, int x, int y);

        // Setters
        void setBase(float b);
        void setAltura(float a);

        // Getters
        float getBase() const;
        float getAltura() const;

        // Métodos polimórficos
        void Dibuja() override;
        float calculaArea() override;
        float calculaPerimetro() override;
        void imprime() override;

        // Destructor
        ~Rectangulo() override;
};

#endif // RECTANGULO_H