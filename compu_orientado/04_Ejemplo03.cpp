#include <iostream>
using namespace std;
class Empleado{
    public:
        void setNombre(string _nombre){
            nombre = _nombre;
        };
        void setEdad(int _edad){
            if (_edad <0){
                edad = 0;
            }
            else{
                edad = _edad;
            }
            
        };
        string getNombre(){
            return nombre;
        };
        int getEdad(){
            return edad;
        };
        
    private:
        string nombre;
        int edad;
};
int main(){
    string nombre;
    int edad;
    Empleado MiEmpleado;
    
    cout << "\nNombre:  " ;
    cin >> nombre;
    cout << "Edad: ";
    cin >> edad;
    MiEmpleado.setNombre(nombre);
    MiEmpleado.setEdad(edad);
    cout << "Nombre: " << MiEmpleado.getNombre() << endl;
    cout << "Edad: " << MiEmpleado.getEdad() << endl;

}