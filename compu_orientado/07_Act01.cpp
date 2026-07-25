#include <iostream>
#include <string>

using namespace std;

class Procesador { //definimos nuestra clase procesaador
    private:
    //Atributos priv
        string modelo;
        float velocidad;

    public:
     //Constructor 
        Procesador(string m, float v) {
            modelo = m;
            velocidad = v;
        }

        //Setters
        void setModelo(string m) {
            modelo = m;
        }

        void setVelocidad(float v) {
            velocidad = v;
        }

        //Getters
        string getModelo() const {
            return modelo;
        }

        float getVelocidad() const {
            return velocidad;
        }
    };

class Computadora { //segunda clase llamada computadora
    private:
        string marca;

        //Objeto tipo procesador
        Procesador procesador;

    public:
        //Constructor
        Computadora(string ma, Procesador p)
            : procesador(p) {
            marca = ma;
        }

        //Método para mostrar la información
        void mostrar() const {
            cout << "Marca de la computadora: " << marca << endl;
            cout << "Modelo del procesador: " << procesador.getModelo() << endl;
            cout << "Velocidad del procesador: " << procesador.getVelocidad() << endl;
        }
};

int main() {

    //Creamos un objeto Procesador
    Procesador procesador1("Intel Core i5", 5);

    //Creamos una Computadora 
    Computadora computadora1("Huawei", procesador1);

    cout << "INFORMACION INICIAL" << endl;
    cout<< endl;
    computadora1.mostrar();

    //Modificamos el objeto procesador1
    procesador1.setModelo("Intel Core i3");
    procesador1.setVelocidad(4);

    cout << endl;
    cout << "PROCESADOR ORIGINAL MODIFICADO" << endl;
    cout << endl;
    cout << "Modelo: " << procesador1.getModelo() << endl;
    cout << "Velocidad: " << procesador1.getVelocidad()<< endl;

    cout << endl;
    cout << "DESPUES DE MODIFICAR EL PROCESADOR ORIGINAL" << endl;
    computadora1.mostrar();

    return 0;
}