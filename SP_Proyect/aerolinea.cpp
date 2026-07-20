#include <iostream> // Nos permite usa las funciones coutmcin y endl

using namespace std; // Nos permite escribir cout en vez de std::cout

int main () { // el int main es para comnezar el problema 
    int opc; // permite 
     
    cout << "-------------------------------------------" << endl;
    cout << endl;

    cout << " ==== SISTEMA DE ADMINISTRACION DE VUELOS ==== " << endl;
    
    cout << "Por favor ingrese la selección deaseada. \n" << endl;
    cout << "1. Mostrar vuelos disponibles." << endl;
    cout << "2. Mostrar clientes registrados." << endl;
    cout << "3. Buscar cliente." << endl;
    cout << "4. Buscar vuelo." << endl;
    cout << "5. Registrar un nuevo cliente." << endl;
    cout << "6. Registrar un nuevo vuelo." << endl;
    cout << "7. Salir de programa." << endl;
    cout << "\n" << endl;

    cin >> opc;
    cout << endl;

    switch(opc)
    {
        case 1: 
            cout << "\n Mostrar vuelos disponibles" << endl;
            break;

        case 2:
            cout << "\n Mostrar clientes resgistrados" << endl;
            break;

        case 3:
            cout << "\n Buscar cliente" << endl;
            break;

        case 4:
            cout << "\n Buscar vuelo" << endl;
            break;

        case 5:
            cout << "\n Registrar un nuevo cliente" << endl;
            break;

        case 6:
            cout << "\n Registrar un nuevo vuelo" << endl;
            break;

        case 7: 
            cout << "\n Salir del programa" << endl;
            

    }


}