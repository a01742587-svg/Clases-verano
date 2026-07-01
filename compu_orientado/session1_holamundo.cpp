// Session 1 - 30/06/2026 - Actvidad 1 Hola mundo

#include <iostream> //Es una herramienta para entrada y salida de info,o sea directivas de procesador, permite usar cout y endl
using namespace std; //Sirve para no tener que escribir std:: antes de cout y endl
// Se le conoce como int main, la funcion principal del programa, ya que siempre vamos a necesitar una funcion main, se le colocaron {} ya que todo lo que este dentro va apermanecer al programa
int main() {
    cout <<"Hola mundo" << endl; //cout=muestra algo en la pantalla, "usamos comillas, para mostrar texto", endl; sirve oara terminar la línea y que lo imprima por separado
    return 0; //esta funcion significa que nuestro programa termino correctamente 0 es que no hubo errores

}

// Para correr escribe, en la terminal
// g++ session1_holamundo.cpp -o session1_holamundo
// ./session1_holamundo