#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria{
    public:
        string titular; // string almacena texto, en este caso el nombre del titular de la cuenta bancaria
        string numeroCuenta; // string almacena el texto, en este caso el numero de la cuenta bancaria
        double deposito[5]; // double almacena numeros decimales, en este caso el deposito de la cuenta bancaria y tiene [5] para almacenar 5 depositos
       
        double sumaDepositos(){
            double suma = 0; // se crea una variable suma de tipo double y se inicializa en 0
            for(int i=0; i<5; i++){ // se crea un ciclo for, for sirve para repetir un bloque de codigo un numero determinado de veces, en este caso 5 veces donde i=0 y se va incrementando en 1 hasta que i sea menor que 5
                suma += deposito[i]; // se suma el valor de la variable deposito del objeto cuenta a la variable suma, este metodo no recibe parametros y retorna la suma de los depositos
            }
            return suma; // se retorna el valor de la variable suma
        }
};

int main(){
    CuentaBancaria cuenta; //creamos un objeto de nuestra clase CuentaBancaria llamado cuenta

    cout<< "Por favor, Ingrese su nombre: "; // le pedimos al usuario que ingrese su nombre
    getline(cin, cuenta.titular); // se almacena el valor que dio el usuario en la variable titular del objeto cuenta, getline permite leer una linea completa de texto incluyendo espacios
    cout << "Ahora, ingrese su numero de cuenta: "; // le pedimos al usuario que ingrese su numero de cuenta
    getline(cin, cuenta.numeroCuenta); // se almacena el valor que dio el usuario en la variable numeroCuenta del objeto cuenta
    cout << "Ahora, ingrese 5 depositos: "; // le pedimos al usuario que ingrese 5 depositos
    
    for(int i=0; i<5; i++){ // se crea un ciclo for, for sirve para repetir un bloque de codigo un numero determinado de veces, en este caso 5 veces donde i=0 y se va incrementando en 1 hasta que i sea menor que 5
        cin >> cuenta.deposito[i]; // se almacena el valor que dio el usuario en la variable deposito del objeto cuenta
    }

    cout<< "\n==== Datos de la cuenta ===="<<endl; // se imprime un mensaje indicando que se van a mostrar los datos de la cuenta bancaria
    cout << "Titular: " << cuenta.titular << endl;
    cout << "Número de cuenta: " << cuenta.numeroCuenta << endl;
    cout << "Depósitos: ";
    for(int i=0; i<5; i++){
        cout << cuenta.deposito[i] << " ";
    }
    cout << endl;
    cout << "Suma de depósitos: " << cuenta.sumaDepositos() << endl;
    return 0; //los comentarios se realizaron con el asistente de github
}