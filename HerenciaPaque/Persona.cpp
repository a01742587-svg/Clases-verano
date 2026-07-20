#include "Persona.h"

//CONSTRUCTOR POR DEFAULT
Persona::Persona(){ // Creamos nuestro CONSTRUCTOR por default 
    nombre="-"; // Como no se proporciono un nombre, guardaremos temporalmente en el programa esto "-" , en el atributo nombre
    ciudad="-"; // se guada temporalmente "-", en el atributo ciudad, utilizamos eso porque es texto
    codigoPostal=0; // Como codigo postal es int, debemos guardarlo como un numero, "0" lo utilizamos para que se vea que no se asigno un numero

}
//CONSTRUCTOR CON PARAMETROS
Persona::Persona(string n, string c, int cp){ //Aqui creamos nuestro constructor con parametros, donde recibe los datos de persona
    nombre=n; //guardamos el atributo nombre en la variable n
    ciudad=c; //guardamos el atributo ciudad en la variable c
    codigoPostal=cp; //guardamos el atributo codigoPostal en la variable cp
}

//SETTERS, permite modificar atributos priv
void Persona::setNombre(string n){
    nombre=n;
}

void Persona::setCiudad(string c){
    ciudad=c;
}

void Persona::setCodigoPostal(int cd){
    codigoPostal=cd;
}

//GETTERS, obtiene los atributos privados
string Persona::getNombre(){
    return nombre;
}

string Persona::getCiudad(){
    return ciudad;
}

int Persona::getCodigoPostal(){
    return codigoPostal;
}

//Imprime los datos de nuetsra clase persona

void Persona::imprime(){
    cout << nombre <<endl;
    cout << ciudad <<endl;
    cout << codigoPostal <<endl;
}

