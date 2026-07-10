#include <iostream>

using namespace std;

class alumno{
    public:
        char nombre[50];
        float cal1, cal2;

        float calcularPromedio(){
            return (cal1 + cal2) / 2;
        };

        void mostrarDatos(){
            cout << "Nombre del alumno: " << nombre << endl;
            cout << "Calificacion 1: " << cal1 << endl;
            cout << "Calificacion 2: " << cal2 << endl;
            cout << "Promedio: " << calcularPromedio() << endl;
        };



};

int main(){

    alumno Alumno_01;
    cout << "Ingrese el nombre del alumno: ";
    cin.getline(Alumno_01.nombre, 50);
    cout << "Ingrese la calificacion 1: ";
    cin >> Alumno_01.cal1;
    cout << "Ingrese la calificacion 2: ";
    cin >> Alumno_01.cal2;

    Alumno_01.mostrarDatos();
    return 0;
}