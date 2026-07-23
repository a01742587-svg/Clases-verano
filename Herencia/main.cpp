#include <iostream>
#include <list>

#include "Figura.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Poligono.h"

using namespace std;

void creaLista(list<Figura*> &F)
{
    for (int i = 1; i <= 5; i++)
    {
        F.push_front(new Circulo(8, 9, 13));

        F.push_back(new Triangulo(10, 20, 50, 100));

        F.push_back(new Rectangulo(20, 10, 300, 400));

        F.push_back(new Poligono(10, 5, 100, 200));
    }
}



void recorreLista(list<Figura*> F)
{
    list<Figura*>::iterator aux;

    aux = F.begin();

    while (aux != F.end())
    {
        (*aux)->Dibuja();
        (*aux)->calculaArea();
        (*aux)->imprime();

        aux++;
    }
}


int main()
{
    cout << "Fernanda Espinoza Garcia" << endl;

    list<Figura*> F;

    creaLista(F);
    recorreLista(F);

    return 0;
}