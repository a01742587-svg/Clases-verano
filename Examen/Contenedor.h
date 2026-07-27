#ifndef CONTENEDOR_H
#define CONTENEDOR_H 
#include <iostream>
#include <string>

using namespace std;

class Contenedor{ //Clase BASE
    protected: //atributos para todos los contenedores, estan protegidos para que las clases hijas las puedan utilizar
        string forma;
        string material;

    public: 
    //constructor por defecto 
        Contenedor();
    //constructor con parametros
        Contenedor(string f, string m);
    
    //SETTERS
        void setForma(string f);
        void setMaterial(string m);

    //GETTERS
        string getForma();
        string getMaterial();
    //Polimorfismo
        virtual void ImprimirCaracteristicas()=0;
        virtual double calculaVolumen()=0;
    //SOBRECARGA
        bool operator>(Contenedor &otro);
    //Destructor 
        virtual ~Contenedor();


};
#endif //cierra el programa 