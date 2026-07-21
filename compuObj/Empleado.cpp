#include <iostream>
#include <string>

using namespace std;

class Empleado{
    private:
        string nombre;
        int num_ind;
        string departamento;
        string puesto;

    public:
        //Constructor
        Empleado(string n, int ni){
            nombre=n;
            num_ind=ni;
    
        }
        //SETTERS
        void setDepartamento(string d){
            departamento=d;
        }
        void setPuesto(string p){
            puesto=p;
        }

        //Getter
        string getNombre(){
            return nombre;
        }
        
        int getNumero_ind(){
            return num_ind;
        }

        string getDepartamento(){
            return departamento;
        }

        string getPuesto(){
            return puesto;
        }

};

int main(){
   
    string nombre;
    int num_ind;
    string departamento;
    string puesto;
    string nuevoDep;

    
    //Le epedimos los datos al empleado 1

    cout << "Empleado" << endl;

    cout << "Nombre: ";
    getline(cin,nombre);

    cout << "Numero de identificacion: ";
    cin >> num_ind;
    cin.ignore();

    //Crear constructor

    Empleado empleado1(nombre, num_ind);

    cout << "Departamento: ";
    getline(cin,departamento);

    cout << "Puesto: ";
    getline(cin,puesto);

    empleado1.setDepartamento(departamento);
    empleado1.setPuesto(puesto);
    cout << endl;
   
    //info 
    
    cout << "INFORMACION DE LOS EMPLEADOS" << endl;
    cout << endl;

    cout << "Empleado" << endl;
    cout << "Nombre: " << empleado1.getNombre() << endl;
    cout << "Numero de identificacion: " << empleado1.getNumero_ind() << endl;
    cout << "Departamento: " << empleado1.getDepartamento() << endl;
    cout << "Puesto: " << empleado1.getPuesto() << endl;

    cout << endl;

    cout << "Nuevo departamento: ";
    getline(cin,nuevoDep);

    empleado1.setDepartamento(nuevoDep);

    cout << "INFORMACION DE LOS EMPLEADOS" << endl;
    cout << endl;

    cout << "Nombre: " << empleado1.getNombre() << endl;
    cout << "Numero de identificacion: " << empleado1.getNumero_ind() << endl;
    cout << "Departamento: " << empleado1.getDepartamento() << endl;
    cout << "Puesto: " << empleado1.getPuesto() << endl;


    

    return 0;
}