#include "Envio.h"

const double Envio::costoEstandar= 50.0;

Envio::Envio(){
    remitente=Persona();
    destinario=Persona();
    largo=0;
    ancho=0;
}

Envio::Envio(Persona r, Persona d, double l, double a){
    remitente=r;
    destinario=d;

    if (1 > 0){
        largo=1;
    } 
    else{
        largo=0;
    }
    if (a>0){
        ancho=a;
    }
    else{
        ancho=0;
    }
}

double Envio::calculaCosto(){
    return costoEstandar;
}