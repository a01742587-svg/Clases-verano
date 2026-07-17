#include <iostream>
#include <string>

using namespace std;

class Fecha{  //creamos nuestra clase Fecha
    private: //atributos
        int mes;
        int dia; //colocamos int ya que son numeros enteros
        int aneo;
    public: 
    //setters
        void setMes(int m);
        void setDia(int d);
        void setAneo(int a); //perdon me daba risa si lo dejaba como ano
    
    //getters
        int getMes();
        int getDia();
        int getAneo();

    //Metodo, donde obtenemos el nombre del mes
        string obtenerMes();

    //Metodo para la fecha
        void imprimirfecha_1();
        void imprimirfecha_2();
        void imprimirfecha_3();


};

//metodo para setters
void Fecha::setMes(int m){
    if (m<1)
    {
        mes=1;
    }
    else if (m>12)
    {
        mes=1;
    }
    else
    {
        mes=m;
    }
}

void Fecha::setDia(int d){
    if (d < 1)
    {
        dia=1;
    }
    else
    {
        dia=d;
    }
}

void Fecha::setAneo(int a)
{
    aneo=a;
}

//metodo para getter
int Fecha::getMes()
{
    return mes;
}
int Fecha::getDia()
{
    return dia;
}
int Fecha::getAneo()
{
    return aneo;
}

//Para obetner el nombre del mes

string Fecha::obtenerMes()
{
    if (mes == 1)
    {
        return "enero";
    }
    else if (mes == 2)
    {
        return "febrero";
    }
    else if (mes == 3)
    {
        return "marzo";
    }
    else if (mes == 4)
    {
        return "abril";
    }
    else if (mes == 5)
    {
        return "mayo";
    }
    else if (mes == 6)
    {
        return "junio";
    }
    else if (mes == 7)
    {
        return "julio";
    }
    else if (mes == 8)
    {
        return "agosto";
    }
    else if (mes == 9)
    {
        return "septiembre";
    }
    else if (mes == 10)
    {
        return "octubre";
    }
    else if (mes == 11)
    {
        return "noviembre";
    }
    else
    {
        return "diciembre";
    }
}

//Imprimir datos

void Fecha::imprimirfecha_1()
{
    cout << dia << "/" << mes << "/" << aneo << endl;
}

void Fecha::imprimirfecha_2()
{
    cout << dia << " de " << obtenerMes() << " de " << aneo << endl;
}

void Fecha::imprimirfecha_3()
{
    cout << dia << " "<< obtenerMes() << " " << aneo << endl;
}

//nuestra funcion main

int main(){
    Fecha fecha_1;

    int dia;
    int mes; 
    int aneo;

    cout << "Ingrese por favor el dia: ";
    cin >> dia;

    cout << "Ingrese por favor el mes: ";
    cin >> mes;

    cout << "Ingrese por favor el año: ";
    cin >> aneo;

    fecha_1.setDia(dia);
    fecha_1.setMes(mes);
    fecha_1.setAneo(aneo);

    cout << "\n Fecha 1: " << endl;
    fecha_1.imprimirfecha_1();

    cout << "\n Fecha 2: " << endl;
    fecha_1.imprimirfecha_2();

    cout << "\n Fecha 3: " << endl;
    fecha_1.imprimirfecha_3();

    return 0;
}