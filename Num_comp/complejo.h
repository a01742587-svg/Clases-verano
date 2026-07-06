#ifndef COMPLEJO_H // Header Guards, evita que el copilador se vuela kuku si lee el archivo mas de una vez
#define COMPLEJO_H // Header Guards

#include <iostream>
using namespace std;

// Abstraccion
class Complejo {   // Creamos una clase de complejo, modelo que nos ayuda a crear objetos, pero aqui representa un numero complejo
// Encapsulacion
private: // Datos internos del objeto, se utiliza solamente dentro de la clase
    double real; // r, guarda parte real del numero complejo
    double imaginario; //i, guarda la parte imaginaria del numero complejo

public: // Se utiliza fuera de la clase
    Complejo(); // este representa nuestro constructor por default, crea el complejo con los atributos real e imaginario en 0.
    Complejo(double r, double i); // este es el constructor con parametros (r,i),  recibe los datos necesarios para inicializar los atributos.
// Metodos de acceso
    double getReal(); // Metodo de acceso, para obtener r
    double getImaginario(); // Metodo de acceso, para obtener i
// Metodos de Modificación        
    void setReal(double r); // Metodo que modifica el valor del atributo real
    void setImaginario(double i); // Metodo que modifica el valor del atributo Imaginario
// Metodo de agregar
    void agregar(Complejo nuevo); // modifica las variables de instancia de este objeto, agregando los valores del objeto que recibe como parámetro
// Metodo conjugado
    Complejo conjugado(); // devuelve un nuevo Complejo que corresponde al conjugado de este objeto.
// Metodo suma
    Complejo suma(Complejo nuevo); // recibe como parámetro un objeto Complejo y devuelve un nuevo Complejo que representa el resultado de la suma de este objeto, con el objeto que se recibe como parámetro
// Metodo multiplicacion
    Complejo multiplicacion(Complejo nuevo); // recibe un objeto Complejo y devuelve un nuevo Complejo que representa el resultado de la multiplicación de este objeto, con el objeto que se recibe como parámetro.
// Metodo multiescalar
    Complejo multiEscalar(double x); // recibe un double y devuelve un nuevo Complejo, resultado de multiplicar este objeto por el número recibido como parámetro.
// Metodo void
    void imprime(); // desplegará a pantalla el objeto con el formato; (A + Bi) o  (A – Bi) si es que la parte imaginaria es negativa.

};

#endif // Header Guards, cierra la logica