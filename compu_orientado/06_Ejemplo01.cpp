#include <iostream>
using namespace std;

class Cancion{
    public:
        Cancion(string n, int a){ //constructor lo utilizamos en main para poder llamar en  la terminal 
            nombre=n;
            anio=a;
        }

        void setNombre(string n){
            nombre=n;
        }
        void setAnio(int a){
            anio=a;
        }
        string getNombre(){
            return nombre;
        }
        int getAnio(){
            return anio;
        }
        
    private:
        string nombre;
        int anio;

};

int main(){

    Cancion MiCancion("afterthought", 2020); //en la clase creamos un objeto

    cout << "Nombre: "<< MiCancion.getNombre() << endl;
    cout << "Anio: " << MiCancion.getAnio() << endl;

}