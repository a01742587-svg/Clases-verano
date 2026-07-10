#include <iostream>
#include <cmath>

using namespace std;

int main() {
// float y double son dos tipos de entradas para poder poner decimales, float (llega a numeros pequeños) y double (llega a numeros grandes)
    float radio; //float -> flaating point (4 BYTES) elementos con decimales
    double area, volumen; //double ->(8 BYTES) elementos con decimales

    cout << "\nRadio : "; //\n es salto de linea igual que overleaf
    cin >> radio;

    area = M_PI * pow(radio,2); // M_Pi valor de pi, pow es una funcion para elevar al cuadrado (area,valor del elevado)

    cout << "Area del circulo: " << area << endl;

}