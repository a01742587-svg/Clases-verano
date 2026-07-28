#include <iostream>
#include <string>
#include "Empleado.h"

using namespace std;

int main() {
//como vamos a crear 2 objetos para empleado haremos ls variables para cada uno
    string nombre1;
    int num_ind1;
    string departamento1;
    string puesto1;

    string nombre2;
    int num_ind2;
    string departamento2;
    string puesto2;

    //Le pedimos los datos al empleado 1
    cout << "Empleado 1" << endl;

    cout << "Nombre: ";
    getline(cin, nombre1);

    //Objeto
    cout << "Numero de identificacion: ";
    cin >> num_ind1;
    cin.ignore();

    cout << "Departamento: ";
    getline(cin, departamento1);

    cout << "Puesto: ";
    getline(cin, puesto1);

    Empleado empleado1(nombre1, num_ind1, departamento1, puesto1);
    cout << endl;

     //Le pedimos los datos al empleado 2
    cout << "Empleado 2" << endl;

    cout << "Nombre: ";
    getline(cin, nombre2);

    cout << "Numero de identificacion: ";
    cin >> num_ind2;
    cin.ignore();

    cout << "Departamento: ";
    getline(cin, departamento2);

    cout << "Puesto: ";
    getline(cin, puesto2);

    Empleado empleado2(nombre2, num_ind2, departamento2, puesto2);
    cout << endl;

    //Info
    cout << "INFORMACION DE LOS EMPLEADOS" << endl;
    cout << endl;

    cout << "Empleado 1" << endl;
    cout << "Nombre: " << empleado1.getNombre() << endl;
    cout << "Numero de identificacion: " << empleado1.getNumero_ind() << endl;
    cout << "Departamento: " << empleado1.getDepartamento() << endl;
    cout << "Puesto: " << empleado1.getPuesto() << endl;
     cout << endl;

    cout << "Empleado 2" << endl;
    cout << "Nombre: " << empleado2.getNombre() << endl;
    cout << "Numero de identificacion: " << empleado2.getNumero_ind() << endl;
    cout << "Departamento: " << empleado2.getDepartamento() << endl;
    cout << "Puesto: " << empleado2.getPuesto() << endl;

    return 0;
}