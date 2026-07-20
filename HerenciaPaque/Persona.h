#ifndef PERSONA_H 
#define PERSONA_H

#include <iostream> //permite utilizar cout,cin y endl
#include <string> //permite utilizar variables como tipo string

using namespace std; //nos permite utilizar cout sin escribir std::

class Persona { // creamos una clase llamada persona
    private:
    // colocamos nuestros atributos privados en nuestra clase, que son los que guardan informacion de cada persona
        string nombre;
        string ciudad;
        int codigoPostal;

    public:
        Persona(); // este constructor es por default, inicia los atributos con valores predeterminados
        Persona(string n, string c, int cp); // este ya es nuestro constructor con parametros, estso reciben los datos para poder crear una persona

        // SETTERS, con esto modificamos atributos priv
        void setNombre(string n);
        void setCiudad(string c);
        void setCodigoPostal(int cp);

        // GETTERS, nos permite obtener los atributos privados
        string getNombre();
        string getCiudad();
        int getCodigoPostal();

        // Es un metodo que nos permite imprimir los datos de la persona
        void imprime();
};

#endif
