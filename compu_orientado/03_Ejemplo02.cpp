#include <iostream>
using namespace std;

class Persona{
    public:
        void saluda(string n){
            cout << "\nHOLA"<< n << " Buena tarde" << endl;
        }
};

int main(){
    string nombre="filemon";

    Persona MiTio;
    MiTio.saluda(nombre);

    nombre="Juan";
    Persona MiAmigo;
    MiAmigo.saluda(nombre);
    nombre="Margarita";

    

}