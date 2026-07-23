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

        virtual void Dibuja(); 
        virtual float calculaArea();
        virtual void imprime();

        virtual ~Figura();

};

#endif // FIGURA_H