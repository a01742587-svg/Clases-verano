#include <iostream>
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

    cout << "Costo del envio: " <<envio1.calculaCosto() <<endl;
    cout << "Costo del paquete: " << paquete1.calculaCosto() <<endl;
    cout << "Costo del sobre normal: " << sobre1.calculaCosto()  << endl;
    cout << "Costo del sobre grande: " << sobre2.calculaCosto() <<endl;
    return 0;
}