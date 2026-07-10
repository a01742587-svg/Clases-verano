#ifndef FRACCION_H
#define FRACCION_H

class Fraccion
{
    // Atributos
private:
    int num;
    int den;

    // Métodos
public:
    Fraccion(); // Constructor, inicializa los valores de los atributos
    Fraccion(int d, int n);

    // Métodos modificadores
    void setNumerador();
    void setDenominador();
    void setNumerador(int num);
    void setDenominador(int den);

    // Métodos accesores
    int getNumerador() const;
    int getDenominado() const;

    // Métodos especializados
    void reduceFraccion();

    Fraccion divideFraccion(const Fraccion &F2);

    void imprimeResultado();

    // Destructor
    virtual ~Fraccion();

};

#endif // FRACCION_H