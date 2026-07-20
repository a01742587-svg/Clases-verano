#include "Sobre.h"
#include <iostream>

const double Sobre::cargoAdicional=15; //valor de cargo adicional

Sobre::Sobre() : Envio(){ // llama a constructor por default de envio

}

Sobre::Sobre(Persona r, Persona d, double l, double a) //constructor con parametros que envia los datos al constructor envio

    : Envio(r,d,l,a){

 }

 //calcula costo del sobre
 double Sobre::calculaCosto(){
    double costo;
    costo=costoEstandar; //inicia con el costo estandar

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