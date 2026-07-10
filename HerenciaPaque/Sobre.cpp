#include "Sobre.h"
#include <iostream>

const double Sobre::cargoAdicional=15;

Sobre::Sobre() : Envio(){

}

Sobre::Sobre(Persona r, Persona d, double l, double a)

    : Envio(r,d,l,a){

 }

 double Sobre::calculaCosto(){
    double costo;
    costo=costoEstandar;

    if(largo >25){
        costo=costo+cargoAdicional;
    }

    else{
        if (ancho >30){
            costo=costo+cargoAdicional;
        }
    
    }
    return costo;
 }