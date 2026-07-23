#ifndef POLIGONO_H
#define POLIGONO_H

#include "Figura.h"

class Poligono : public Figura
{
    private:
        float lado;
        int numLados;

    public:
        
        Poligono();
        Poligono(float lado, int numLados, int x, int y);

        
        void setLado(float l);
        void setNumLados(int n);

        
        float getLado() const;
        int getNumLados() const;

        
        void Dibuja() override;
        float calculaPerimetro() override;
        float calculaArea() override;
        void imprime() override;

        
        ~Poligono() override;
};

#endif // POLIGONO_H