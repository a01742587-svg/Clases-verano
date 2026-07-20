#include "Paquete.h"
#include <iostream>

// asignamos un valor de costo por cada kg
const double Paquete::costoKg=10.0;

Paquete::Paquete(): Envio(){ //Constructor por default, que inicia con los atributos de paquete 0
    peso=0;
    profundidad=0;
}

Paquete::Paquete(Persona r, Persona d, double l, double a, double p, double profu) // constructor con parametros, envia remi, desti, largo y ancho al constructor envio
    : Envio(r,d,l,a){

    // si peso es positivo
    if (p >0){
        peso=p;
    }

    else{
        peso=0;
    }

    // si profundidad es positiva
    if (profu >0) {
        profundidad=profu;
    } 
    else{
        profundidad=0;
    }
}

//SETTERS
void Paquete::setPeso(double p){
    if(p>0){
        peso=p;
    }
    else{
        peso=0;
    }
}

void Paquete::setProfundidad(double profu){
    if(profu >0){
        profundidad=profu;
    }
    else{
        profundidad=0;
    }
}

//GETTERS

double Paquete::getPeso(){
    return peso;
}

double Paquete::getProfundidad(){
    return profundidad;
}

//calcula el costo estandar mas el costo correspondiente del peso.
double Paquete::calculaCosto(){
    return costoEstandar+peso*costoKg;
}