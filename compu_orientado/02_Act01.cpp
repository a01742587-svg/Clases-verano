#include <iostream> //sirve para poder utilizar cout, cin y endl
#include <cstdlib> // sirve para poder utilizar system("clear") y system("pause")

using namespace std;

int main(){

    int opc,x1,x2,resultado; // declaración de variables, opc es la variable que almacena la opción del usuario, x1 y x2 son los números a operar y resultado es el resultado de la operación

    cout << "Por favor ingrese la selección deseada.\n" <<endl; // cout sive para mostrar el texto en la pantalla y endl sirve para hacer un salto de línea
    cout << "1-. Suma (+)" << endl;
    cout << "2-. Resta (-)" << endl;
    cout << "3-. Multiplicación (*)" << endl;
    cout << "4-. División (÷) \n"; // \n sirve para hacer un salto de línea
    cout << "\n" <<endl; 

    cin >> opc; //cin sirve para que el usuario ingrese un valor y lo almacene en la variable opc
    system("clear"); //system("clear") sirve para limpiar la pantalla, en Windows se puede utilizar como system("cls")

    switch (opc) // switch sirve para evaluar la variable opc y ejecutar el bloque de código correspondiente a la opción seleccionada por el usuario
    {
        case 1: //case sirve para evaluar la opción seleccionada por el usuario, en este caso la opción 1 es la suma
            cout<< "\n====SUMA====" << endl;
            cout<< "Ingrese los numeros que quiere sumar" << endl;
            cout << "Primer numero: " << endl;
            cin >> x1;
            cout << "Segundo numero: " <<endl;
            cin >> x2;

            //formula 
            resultado = x1 + x2;
            cout << "\n Resultado: " << resultado <<endl;
            break; //break sirve para salir del bloque de código del case y continuar con el resto del programa

            case 2: //case sirve para evaluar la opción seleccionada por el usuario, en este caso la opción 2 es la resta
                cout<< "\n====RESTA====" <<endl;
                cout << "Ingrese los numeros que quiere restar" <<endl;
                cout << "Primer numero: " << endl;
                cin >> x1;
                cout << "Segundo numero: " << endl;
                cin >> x2;

                //formula 
                resultado = x1 - x2;
                cout << "\n Resultado: " << resultado << endl;
                break;
                
                case 3: //case sirve para evaluar la opción seleccionada por el usuario, en este caso la opción 3 es la multiplicación
                    cout << "\n====MULTIPLICACIÓN====" << endl;
                    cout << "Ingrese los numeros que quiere multiplicar" <<endl;
                    cout << "Primer numero: "<<endl;
                    cin >> x1;
                    cout << "Segundo numero: " <<endl;
                    cin >> x2;

                    //formula 
                    resultado = x1*x2;
                    cout << "\n Resultado: " <<resultado <<endl;
                    break;
                    
                    case 4: //case sirve para evaluar la opción seleccionada por el usuario, en este caso la opción 4 es la división
                        cout << "\n====DIVISIÓN====" << endl;
                        cout << "Ingrese los numeros que quiere dividir" << endl;
                        cout << "Primer numero: " <<endl;
                        cin  >> x1;
                        cout << "Segundo numero: " <<endl;
                        cin >> x2;

                        //fromula 
                        if (x2 == 0){ //if sirve para evaluar si el segundo número ingresado es igual a 0, ya que no se puede dividir entre 0
                            cout << "\n No se puede dividir entre 0" << endl; // cout sirve para mostrar el texto en la pantalla
                            break; //break sirve para salir del bloque de código del case y continuar con el resto del programa
                        }
                        else { //else sirve para ejecutar el bloque de código si la condición del if no se cumple
                            resultado = x1/x2; //formula
                            cout << "\n Resultado: " <<resultado <<endl;
                        }
                        break; //break sirve para salir del bloque de código del case y continuar con el resto del programa
                    
                    default: //default sirve para ejecutar el bloque de código si ninguna de las opciones anteriores se cumple
                        cout << "\n La opción ingresada no es valida" << endl;
                        break;

    }

    return 0; //return sirve para finalizar el programa y devolver un valor al sistema operativo, en este caso 0 indica que el programa finalizó correctamente

}  // los comentarios son para explicar el codigo paso a paso, se utilizo ayuda del asistente dentro de github :)