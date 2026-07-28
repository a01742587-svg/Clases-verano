#include "Empleado.h"

// Constructor
Empleado::Empleado(string n, int ni, string d, string p) {
    nombre = n;
    num_ind = ni;
    departamento = d;
    puesto = p;
}

// Getters
string Empleado::getNombre() {
    return nombre;
}

int Empleado::getNumero_ind() {
    return num_ind;
}

string Empleado::getDepartamento() {
    return departamento;
}

string Empleado::getPuesto() {
    return puesto;
}