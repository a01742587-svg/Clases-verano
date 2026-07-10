#include "Persona.h"

Persona::Persona(){
    nombre="-";
    ciudad="-";
    codigoPostal=0;

}

Persona::Persona(string n, string c, int cp){
    nombre=n;
    ciudad=c;
    codigoPostal=cp;
}

void Persona::imprime(){
    cout << nombre <<endl;
    cout << ciudad <<endl;
    cout << codigoPostal <<endl;
}

