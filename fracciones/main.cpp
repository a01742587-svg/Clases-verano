#include <iostream>
#include "Fraccion.h"
#include "ListaF.h"

using namespace std;

int main()
{
    ListaF F;

    cout << "Fernanda Espinoza García" << endl;
    cout << "A01742587" << endl;
    cout << "Lista de fracciones" << endl;

    F.creaListaF();
    F.recorreListaF();

    return 0;
}

/*
MAIN ANTERIOR: DIVISION DE FRACCIONES

#include <iostream>
#include "Fraccion.h"

using namespace std;

int main()
{
    Fraccion F1, F2, R;

    cout << "Fernanda Espinoza García" << endl;
    cout << "A01742587" << endl;
    cout << "Division de fracciones 29 de jun" << endl;
    
    F1.setNumerador();
    F1.setDenominador();

    F2.setNumerador();
    F2.setDenominador();

    R = F1.divideFraccion(F2);
    R.imprimeResultado();

    return 0;
}
*/