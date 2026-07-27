#include "Programa.h"

Programa::Programa()
{

}
void Programa::ejecutar()
{
    ListaContenedores lista;
    lista.creaLista();

    cout << "LISTA DE LOS CONTENEDORES" << endl;
    cout << endl;

    lista.recorreLista();
    lista.comparaContenedores();
    
    cout << "RESULTADO" << endl;
    cout << "Volumen total: "<< lista.calculaVolumenTotal() <<endl;
    cout << "Cantidad de contenedores de Acero: " << lista.cuentaPorMaterial("Acero") << endl;
    cout << "Cantidad de contenedores de Fibra de vidrio: " << lista.cuentaPorMaterial("Fibra de vidrio") << endl;
}

//Destructor
Programa::~Programa()
{

}