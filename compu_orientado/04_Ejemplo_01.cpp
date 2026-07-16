#include <iostream>
using namespace std;
class Empleado{
    public:
        void setSueldo(int _sueldo){           //Setter
            sueldo = _sueldo;
        };
        int getSueldo(){                       // Getter
            return sueldo;
        };

    private:
        int sueldo;
};
int main(){
    int cantidad = 30000;
    Empleado Gerente;
    Gerente.setSueldo(cantidad);
    cout << "\nEL sueldo es " << Gerente.getSueldo() << endl <<endl;
   // cout << "\nEL sueldo es " << Gerente.sueldo << endl <<endl;

}