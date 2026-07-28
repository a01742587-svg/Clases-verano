#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

using namespace std;

class Empleado {
    private:
        string nombre;
        int num_ind;
        string departamento;
        string puesto;

    public:
        // Constructor
        Empleado(string n, int ni, string d, string p);

        // Getters
        string getNombre();
        int getNumero_ind();
        string getDepartamento();
        string getPuesto();
};

#endif