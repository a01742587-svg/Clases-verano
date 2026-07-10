#include <iostream>

using namespace std;

class Pelicula{
    public:
        string nombre;
        int duracion;

        void mostrarDatos(){
            cout << "Nombre de la Pelicula: " << nombre << endl;
            cout << "Duracion: " << duracion << "minutos " << endl;

        }

        void reproducir(){
            cout << "Reproduciendo la pelicula: " << nombre << endl;

        }
};

int main(){
    Pelicula MiPelicula;
    cout << "Ingrese el nombre de la pelicula: ";
    getline(cin, MiPelicula.nombre);
    cout << "Ingrese la duracion de la pelicula: ";
    cin >> MiPelicula.duracion;
    MiPelicula.mostrarDatos();
    
}