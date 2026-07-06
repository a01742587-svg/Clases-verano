#include <iostream> //librería que permite la entrada y salida de datos
#include <cmath> // permite usar funciones matemáticas como sqrt y pow

using namespace std; //permite usar cout y cin sin poner std:: antes de ellos

int main(){
    float x1,y1,x2,y2, distancia; // declaración de variables, x1,y1 son las coordenadas del primer punto, x2,y2 son las coordenadas del segundo punto y distancia es la variable que almacena el resultado de la distancia entre los dos puntos
    cout << "Programa para calcular la distancia entre dos puntos." << endl;
    cout << "Ingrese la coordenada x1: " << endl;
    cin >> x1;
    cout << "Ingrese la coordenada y1" << endl;
    cin >> y1;
    cout << "Ingrese la coordenada x2: " << endl;
    cin >> x2;
    cout << "Ingrese la coordenada y2: " << endl;
    cin >> y2;

    //formula para calcular la distancia entre dos puntos
    distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2)); //sqrt es la función que calcula la raíz cuadrada y pow es la función que calcula la potencia, en este caso se eleva al cuadrado con el numero 2 la diferencia entre las coordenadas x y y de los dos puntos
    cout << "La distancia entre los dos puntos es: " << distancia << endl; 

    return 0; //retorna 0 para indicar que el programa finalizó correctamente
} //los comentarios fueron hechos con el asistente de github :D
