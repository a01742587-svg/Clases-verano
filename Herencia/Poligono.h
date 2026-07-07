#ifndef POLIGONO_H
#define POLIGONO_H

#include "Figura.h"

class Poligono: public Figura {
    private:
    float lado;
    int numLados;

    public:
        Poligono();
        void setLado(float l);
        void setNumLados(int n);
        float getLado() const;
        int getNumLados() const;
        string Dibuja();
        float calculaArea();
        void imprimeArea();
        virtual ~Poligono();
};

#endif // POLIGONO_H