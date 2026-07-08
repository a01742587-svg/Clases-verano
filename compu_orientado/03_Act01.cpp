#include <iostream>

using namespace std;

class complejo{ //nuestra clase la declaramos como complejo

    public: // public es un modificador de acceso que permite que los miembros de la clase sean accesibles desde fuera de la clase
        float real; //float almacena numeros decimales, en este caso el numero real del numero complejo
        float imaginario; //float almacena numeros decimales, en este caso el numero imaginario del numero complejo
};

int main(){

    complejo numero; //creamos un objeto de nuestra clase complejo llamado numero

    cout << "Ingresa el numero real: "; // le pedimos al usuario que ingrese el numero real
    cin >> numero.real; // se almacena el valor que dio el usuario en la variable real del objeto numero
    cout << "Ingresa el numero imaginario: ";  // le pedimos al usuario que ingrese el numero imaginario
    cin >> numero.imaginario; // se almacena el valor que dio el usuario en la variable imaginario del objeto numero

    cout<< "\nEl numero complejo es: " << numero.real << " + " << numero.imaginario << "i" << endl; // se imprime el numero complejo en forma de a + bi

    return 0;


}