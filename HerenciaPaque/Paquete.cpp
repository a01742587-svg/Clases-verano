#include "Paquete.h"
#include <iostream>

const double Paquete::costoKg=10.0;

Paquete::Paquete(): Envio(){
    peso=0;
    profundidad=0;
}

Paquete::Paquete(Persona r, Persona d, double l, double a, double p, double profu)
    : Envio(r,d,l,a){

    if (p >0){
        peso=p;
    }
    else{
        peso=0;
    }
    if (profu >0) {
        profundidad=profu;
    } 
    else{
        profundidad=0;
    }
}

double Paquete::calculaCosto(){
    return costoEstandar+peso*costoKg;
}