#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include <string>

using namespace std;

class Figura
{
    protected:
        int x;
        int y;
    public:
        Figura();
        Figura(int x, int y);
        void setX(int x);
        void setY(int y);
        int getX() const;
        int getY() const;

        virtual void Dibuja()=0;  //metodo virtual puro
        virtual float calculaArea()=0;
        virtual float calculaPerimetro()=0;
        virtual void imprime()=0;

        virtual ~Figura();

};

#endif // FIGURA_H