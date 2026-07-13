#include <iostream> // es una biblioteca de entrada y salida, permite utilizar cout, cin,endl.
#include <string> // es una biblioteca que nos permite trabajar con texto, string permite guardar palabras

using namespace std; // Permite escribir cout en lugar de std::cout.

class Rectangulo{ // se creara una clase llamada rectangulo 
    private: // contiene info protegida, elementos que no debem modificarse en main

    //atributos privados, son las variables que pertenecen a la clase
        float altura; //flaot funcion que permite poner numeros en decimal
        float base; //flaot funcion que permite poner numeros en decimal

    public: // es la zona accesible de la clase, contiene funciones que se pueden llamar desde main

    //setters, recibe y guarda valores, nos permite modificar un atributo priv de manera controlada
        void setAltura(float a){
            altura=a;
        }

        void setBase(float b){
            base=b;
        }

    //Getters, funcion que devuelve un atributo, nos Permite consultar un atributo privado desde main.
        float getAltura(){
            return altura;
        }

        float getBase(){
            return base;
        }

    // funciones, estas seran las funciones que pertenecen a nuestra clase

    //Metodo que calcule el área

        float area(){
            return (base*altura);
        }

    //Metodo que calcula el perimetro

        float perimetro(){
            return 2*(base+altura);
        }
};

int main (){
    Rectangulo Rectangulo_1; // creamos un objeto de la clase rectangulo

    //creamos variables normales, recibe de manera temporal los datos que coloca el usurio en la termianal
    float baseUsuario;
    float alturaUsuario;

    cout << "=====RECTÁNGULO===== \n"; 

    cout << "Base: ";
    cin >> baseUsuario; // pone los valores el usuario

    cout << "Altura: ";
    cin >> alturaUsuario;

    //guardar valores en los setters
    Rectangulo_1.setBase(baseUsuario);
    Rectangulo_1.setAltura(alturaUsuario);

    //imprimos los ratributos en los getters y resultados
    cout << "Base: " << Rectangulo_1.getBase() << endl;
    cout << "Altura: " << Rectangulo_1.getAltura() << endl;

    cout << "Area: " << Rectangulo_1.area() << endl;
    cout << "Perimetro: " << Rectangulo_1.perimetro() << endl;

    //comparaciones 
    if (Rectangulo_1.area() > Rectangulo_1.perimetro()){
        cout << "El area es mayor que el perimetro. ";
    } 
    else if (Rectangulo_1.perimetro() > Rectangulo_1.area()){
        cout << "El perimetro es mayor que el area. ";
    } 
    else {
        cout << "El area y el perimetro tienen el mismo valor. ";
    }
    return 0;

}
