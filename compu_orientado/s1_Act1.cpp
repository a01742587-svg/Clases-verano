#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "------------------------------------------" << endl;
    cout <<"====Bienvenido al Mundial 2026===="<< endl;
    cout << endl;
    
    string Equipo_L; // string crea una caja con una variable, en este caso la llamamos Equipo_L
    cout << "Equipo local: "; // cout es quien muestra la caja "Equipo Local:" para que escriba el equipo
    getline(cin, Equipo_L); // cin es quien toma el dato que se escribio en la caja del terminal, o sea cuando corre, y lo guarda - getline sirve para leer datos que contengan espacios

    string Equipo_V;
    cout << "Equipo Visitante: ";
    getline(cin,Equipo_V);

    string Ciudad;
    cout << "Ciudad: ";
    getline(cin,Ciudad);

    string Estadio;
    cout << "Estadio: ";
    getline(cin,Estadio);

    string Fecha;
    cout << "Fecha: ";
    getline(cin,Fecha);

    string Hora;
    cout << "Hora: ";
    getline(cin,Hora);

    string Capacidad;
    cout << "Cpacidad del estadio: ";
    getline(cin,Capacidad);

    string precio_eco;
    cout << "Precio de boleto económico: $";
    getline(cin,precio_eco);

    string precio_vip;
    cout << "Precio de boleto VIP: $";
    getline(cin,precio_vip);

    string Grupo;
    cout << "Grupo: ";
    getline(cin,Grupo);

    cout << endl;
    cout << "=====Reporte del partido=====" << endl;
    cout << endl;
    cout << "Partido: " << Equipo_L << " VS " << Equipo_V << endl;
    cout << "Sede: " << Estadio << endl;
    cout << "Ciudad: " << Ciudad << endl;
    cout << "Fecha: " << Fecha << endl;
    cout << "Hora: " << Hora << endl;
    cout << "Capacidad: " << Capacidad << " espectadores" << endl;
    cout << "Boleto económico: $" << precio_eco << endl;
    cout << "Boleto VIP: $" << precio_vip << endl;
    cout << "Grupo del Mundial: " << Grupo << endl;
    cout << endl;
    cout << "------------------------------------------" << endl;

    return 0;


}