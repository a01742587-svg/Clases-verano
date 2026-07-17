#include <iostream>
#include <string>

using namespace std;

class Reloj{ //creamos una clase que se llame reloj
    private: //declaramos nuestros atributos
        int horas; 
        int minutos; // se utilizo int para la 3 ya que son numeros enteros
        int segundos; 
    public:
    //Definimos setters
        void setHoras(int h);
        void setMinutos(int m);
        void setSegundos(int s);
    //Definimos getters
        int getHoras();
        int getMinutos();
        int getSegundos();


};

//Setters metodos

void Reloj::setHoras(int h){
    if (h < 0)
    {
        horas=0;
    }
    else if (h >=24)
    {
        horas=0;
    }
    else
    {
        horas=h;
    }
}

void Reloj::setMinutos(int m){
    if (m < 0)
    {
        minutos=0;
    }
    else if (m >=60)
    {
        minutos=0;
    }
    else
    {
        minutos=m;
    }

}
void Reloj::setSegundos(int s){
    if (s <0)
    {
        segundos=0;
    }
    else if (s >=60)
    {
        segundos=0;
    }
    else
    {
        segundos=s;
    }
}

//Getters metodos

int Reloj::getHoras(){
    return horas;
}

int Reloj::getMinutos()
{
    return minutos;
}

int Reloj::getSegundos()
{
    return segundos;
}

int main(){ // esta es nuestra funcion main
    Reloj reloj_1; //objetos de la clase reloj
    Reloj reloj_2;

    //valores reloj 1
    reloj_1.setHoras(7);
    reloj_1.setMinutos(4);
    reloj_1.setSegundos(6);
        
    //valores reloj 2 :P
    reloj_2.setHoras(5);
    reloj_2.setMinutos(59);
    reloj_2.setSegundos(10);

    cout << "RELOJ 1: "
         << reloj_1.getHoras() << ":"
         << reloj_1.getMinutos() << ":"
         << reloj_1.getSegundos() << endl;

    cout << "RELOJ 2: "
         << reloj_2.getHoras() << ":"
         << reloj_2.getMinutos() << ":"
         << reloj_2.getSegundos() << endl;

    return 0;
}