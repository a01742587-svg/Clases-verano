#include <iostream>

#include "listaE.h"

using namespace std;

Lista::Lista()
{
	cab=NULL;
}

void Lista::insertaInicio(int d){
	Nodo *nuevo;
	nuevo = new(Nodo);
	nuevo -> setDato(d);
	nuevo -> setSiguiente(cab);
	cab = nuevo;
}

void Lista::Recorre(){
	Nodo *aux;
	aux = cab;
	while(aux != NULL){
		cout << aux->getDato() << " "<< endl;
		aux = aux->getSiguiente();
	}

}

Lista::~Lista(){
	Nodo *aux;
	while(cab!=NULL){
		aux=cab;
		cab=cab->getSiguiente();
		delete(aux);
	}
}