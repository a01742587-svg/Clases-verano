#include <iostream>
#include "Persona.h"
#include "Envio.h"
#include "Paquete.h"
#include "Sobre.h"

using namespace std;

int main(){
    Persona remitente("Fernanda","Culiacan",77777);
    Persona destinario("ADany", "Guadalajara", 78685768);
    
    Envio envio1(remitente, destinario, 20,14);
    Paquete paquete1(remitente, destinario, 40,20,5,10);
    Sobre sobre1(remitente,destinario,20,30);
    Sobre sobre2(remitente, destinario,30,22);

    cout << "Costo del envio: " <<envio1.calculaCosto() <<endl;
    cout << "Costo del paquete: " << paquete1.calculaCosto() <<endl;
    cout << "Costo del sobre normal: " << sobre1.calculaCosto()  << endl;
    cout << "Costo del sobre grande: " << sobre2.calculaCosto() <<endl;
    return 0;
}