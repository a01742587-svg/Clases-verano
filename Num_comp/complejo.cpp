#include "complejo.h" // Declaramos el archivo h

Complejo::Complejo() {
    real = 0;
    imaginario = 0;
}

Complejo::Complejo(double r,double i) {
    real = r;
    imaginario = i;
}

double Complejo::getReal() {
    return real;
}

double Complejo::getImaginario() {
    return imaginario;
}

void Complejo::setReal(double r) {
    real=r;
    
}

void Complejo::setImaginario(double i) {
    imaginario=i;
}

void Complejo::agregar(Complejo nuevo) {
    real = real + nuevo.getReal();
    imaginario = imaginario+nuevo.getImaginario();
}

Complejo Complejo::conjugado(){
    Complejo resultado(real, -imaginario);
    return resultado;
}

Complejo Complejo::suma(Complejo nuevo){
    double nuevoReal = real + nuevo.getReal();
    double nuevoImaginario= imaginario + nuevo.getImaginario();
    Complejo resultado(nuevoReal,nuevoImaginario);
    return resultado;
}

Complejo Complejo::multiplicacion(Complejo nuevo){
    double A = real;
    double B = imaginario;
    double C = nuevo.getReal();
    double D = nuevo.getImaginario();

    double nuevoReal=  (A*C)-(B*D);
    double nuevoImaginario= (A*D)+(B*C);

    Complejo resultado(nuevoReal,nuevoImaginario);
    return resultado;
}
Complejo Complejo::multiEscalar(double x){
    double nuevoReal=real*x;
    double nuevoImaginario=imaginario*x;
    
    Complejo resultado(nuevoReal,nuevoImaginario);
    return resultado;
}

void Complejo::imprime() {
    if (imaginario >=0 ){
        cout << "(" << real << "+" << imaginario << "i)" << endl;
    } else{
        cout << "(" << real << "-" << -imaginario << "i)" << endl;
    }
}