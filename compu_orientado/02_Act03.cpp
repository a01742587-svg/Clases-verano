#include <iostream>
#include <string>
#include <cmath> // permite usar funciones matemáticas como sqrt y pow, tambien M_PI para obtener el valor de pi

using namespace std;

int main() {
    cout << "\n ===PROGRAMA PARA CONVERTIR DE GRADOS A RADIANES Y VICEVERSA===" << endl;
    int opc; // declaración de variable, opc es la variable que almacena la opción del usuario
    cout << " ----Por favor ingrese la seleccion deseada----\n" << endl;
    cout << "1-. Convertir de grados a radianes" << endl;
    cout << "2-. Convertir de radianes a grados" << endl;
    cout << "\n" << endl;
    cin >> opc; //cin sirve para que el usuario ingrese un valor y lo almacene en la variable opc

    if (opc == 1){
        double grados, resultado; // declaración de variables, grados es la variable que almacena el valor en grados y resultado es la variable que almacena el resultado de la conversión a radianes
        cout << "Ingrese el valor en grados: ";
        cin >> grados;
        //formula para convertir de grados a radianes
        resultado = grados * M_PI / 180;
        cout << "El valor en radianes es: " << resultado << endl;

    } else if (opc == 2){
        double radianes, resultado; // declaración de variables, radianes es la variable que almacena el valor en radianes y resultado es la variable que almacena el resultado de la conversión a grados
        cout << "Ingrese el valor en radianes: ";
        cin >> radianes;
        //formula para convertir de radianes a grados
        resultado = radianes * 180 / M_PI;
        cout << "El valor en grados es: " << resultado << endl;
    }

    return 0; //los comentarios fueron hechos con el asistente de github :D
}

