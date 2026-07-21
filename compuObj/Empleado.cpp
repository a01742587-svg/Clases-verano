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
        //Constructor 1
        Empleado(string n, int ni){
            nombre=n;
            num_ind=ni;
            departamento= "No asignado";
            puesto = "No asignado";
        
        }

        //Constructor 2
        Empleado(string n, int ni, string d){
            nombre=n;
            num_ind=ni;
            departamento=d;
            puesto="no asignado";
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
   
    string nombre1;
    int num_ind1;

    string nombre2;
    int num_ind2;
    string departamento2;
    
    //Le epedimos los datos al empleado 1

    cout << "Empleado 1 " << endl;

    cout << "Nombre: ";
    getline(cin,nombre1);

    cout << "Numero de identificacion: ";
    cin >> num_ind1;
    cin.ignore();

    //Crear constructor

    Empleado empleado1(nombre1, num_ind1);
    cout << "INFORMACION DE LOS EMPLEADOS" << endl;
    cout << "Empleado 1" << endl;
    cout << "Nombre: " << empleado1.getNombre() << endl;
    cout << "Numero de identificacion: " << empleado1.getNumero_ind() << endl;
    cout << "Departamento: " << empleado1.getDepartamento() << endl;
    cout << "Puesto: " << empleado1.getPuesto() << endl;
   
    cout << endl;

    cout << "Empleado 2" << endl;
    cout << "Nombre: ";
    getline(cin,nombre2);
    cout << "Numero de identificacion: ";
    cin >> num_ind2;
    cin.ignore();
    cout << "Departamento: ";
    getline(cin,departamento2);


    Empleado empleado2(nombre2, num_ind2, departamento2);
    cout << "Empleado 2" << endl;
    cout << "Nombre: " << empleado2.getNombre() << endl;
    cout << "Numero de identificacion: " << empleado2.getNumero_ind() << endl;
    cout << "Departamento: " << empleado2.getDepartamento() << endl;
    cout << "Puesto: " << empleado2.getPuesto() << endl;
    

    return 0;
}