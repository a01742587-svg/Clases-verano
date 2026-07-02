#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>

using namespace std;

class Figura
{
      private:
          int x;
          int y;
    public:
        Figura();
        void setX(int x);
        void setY(int y);
        int getX() const;
        int getY() const;
        string Dibuja();
        float calculaArea();
        void imprimeArea();
        virtual ~Figura();

    protected:


};

#endif // FIGURA_H