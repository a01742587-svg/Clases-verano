#include <iostream>
using namespace std;

class Cancion{
    public:
        Cancion(string n, int a){ //constructor lo utilizamos en main para poder llamar en  la terminal 
            nombre=n;
            anio=a;
        }
        Cancion(string n){
            nombre=n;
            anio=2026;
        }
        Cancion(){
            nombre="Pendiente";
            anio = 2500;
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
    cout << "=================" << endl;

    Cancion MiCancion02("Run");
    cout << "Nombre: " << MiCancion02.getNombre() << endl;
    cout << "Anio: " << MiCancion02.getAnio() << endl;
    cout << "=================" << endl;
    
    Cancion MiCancion03;
    cout << "Nombre: " << MiCancion03.getNombre() << endl;
    cout << "Anio: " << MiCancion03.getAnio() << endl;
    MiCancion03.setNombre("Slow dancing in the dark");
    MiCancion03.setAnio(2018);
    cout << "Nombre: " << MiCancion03.getNombre() << endl;
    cout << "Anio: " << MiCancion03.getAnio() << endl;    
    cout << "=================" << endl;

}