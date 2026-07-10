#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona {
    private:
        string nombre;
        string ciudad;
        int codigoPostal;

    public:
        Persona();
        Persona (string n, string c, int cp);

        void imprime();
};

#endif
