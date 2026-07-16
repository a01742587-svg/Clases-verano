#ifndef FRACCION_H
#define FRACCION_H

class Fraccion
{
    // atributos
    private:
        int num;
        int den;

    // métodos
    public:
        Fraccion(); // Constructor, inicializa los valores de los atributos
        Fraccion(int d, int n);

        // métodos modificadores
        void setNumerador();
        void setDenominador();
        void setNumerador(int num);
        void setDenominador(int den);

        // métodos accesores
        int getNumerador() const;
        int getDenominado() const;

        // métodos especializados
        void reduceFraccion();
        Fraccion divideFraccion(const Fraccion &F2);

        void imprimeResultado();

        // Destructor
        virtual ~Fraccion();
};

#endif