#include <iostream>
#include <list>
#include "Persona.h"
#include "Envio.h"
#include "Paquete.h"
#include "Sobre.h"

using namespace std;

int main(){
    Persona remitente("Fernanda","Culiacan",77777);
    Persona destinatario("ADany", "Guadalajara", 78685);
    
    Envio envio1(remitente, destinatario, 20,14);

    Paquete paquete1(remitente, destinatario, 40,20,5,10);

    Sobre sobre1(remitente,destinatario,20,30);

    Sobre sobre2(remitente, destinatario,30,22);

    list<Envio*> listaEnvios; //creamos una lista de apuntadores tipo envio

    //direcciones de los objetos a la lista
    listaEnvios.push_back(&envio1);
    listaEnvios.push_back(&paquete1);
    listaEnvios.push_back(&sobre1);
    listaEnvios.push_back(&sobre2);

    for (Envio*envio : listaEnvios){
        cout << "Costo del envio: " << envio ->calculaCosto() << endl;
    }


    return 0;

}