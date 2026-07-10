#include <iostream>
using namespace std;

class Fruta{ // llamamos a la clase Fruta
    public:
        Fruta(); // constructor
        string color; // atributo color
        string variedad; // atributo variedad
        float peso;

};

int main(){

    Fruta Manzana; // creamos un objeto de la clase Fruta llamado Manzana
    Manzana.color = "Rojo"; // asignamos un valor al atributo, le ponemos . porque es un objeto
    Manzana.variedad="Golden";
    Manzana.peso=0.1; 

    cout << "\n---Manzana---" << endl;
    cout << "Color: " << Manzana.color << endl; 
    cout << "Variedad: " << Manzana.variedad << endl;
    cout << "Peso: " << Manzana.peso << endl<<endl;

    Fruta pera;
    pera.color = "Verde";
    pera.variedad= "Mexicana";
    pera.peso=0.160;

    cout << "\n---Pera---" << endl;
    cout << "Color: " << pera.color << endl;
    cout << "Variedad: " << pera.variedad << endl;
    cout << "Peso: " << pera.peso << endl;

    Fruta fresa;
    fresa.color = "Roja";
    fresa.variedad= "Fresita";
    fresa.peso=0.020;

    cout << "\n---Fresa---" << endl;
    cout << "Color: " << fresa.color << endl;
    cout << "Variedad: " << fresa.variedad << endl;
    cout << "Peso: " << fresa.peso << endl;

}