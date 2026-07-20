#include "Envio.h"

const double Envio::costoEstandar= 50.0; // asignamos un valor para el costo estandar para todos los envios

Envio::Envio(){ //constructor por default, se crea envio sin ponerle algun dato
    remitente=Persona();
    destinatario=Persona();
    largo=0;
    ancho=0;
}

Envio::Envio(Persona r, Persona d, double l, double a){ //constructor con parametros, recibe los datos 
    remitente=r; 
    destinatario=d;

    // validamos si el largo es positivo
    if (l > 0){
        largo=l;
    } 
    else{
        largo=0;
    }
    // validamos si el ancho es positivo
    if (a>0){
        ancho=a;
    }
    else{
        ancho=0;
    }
}

//SETTERS, permite modificar atributos

void Envio::setRemitente(Persona r){
    remitente=r;
}

void Envio::setDestinatario(Persona d){
    destinatario=d;
}

void Envio::setLargo(double l){
    if (l > 0){
        largo=l;
    } 
    else{
        largo=0;
    }
}

void Envio::setAncho(double a){
    if (a>0){
        ancho=a;
    }
    else{
        ancho=0;
    }
}

//GETTERS

Persona Envio::getRemitente(){
    return remitente;
}

Persona Envio::getDestinatario(){
    return destinatario;
}

double Envio::getLargo(){
    return largo;
}

double Envio::getAncho(){
    return ancho;
}

// Devuleve el costo estandar del envio
double Envio::calculaCosto(){
    return costoEstandar;
}