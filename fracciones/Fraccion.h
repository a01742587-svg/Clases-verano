#ifndef FRACCION_H
#define FRACCION_H

class Fraccion
{
    private:
        int num;
        int den;

    public:
        // Constructores
        Fraccion();
        Fraccion(int num, int den);

        // Setters
        void setNumerador();
        void setDenominador();

        void setNumerador(int num);
        void setDenominador(int den);

        // Getters
        int getNumerador() const;
        int getDenominador() const;

        // Método para reducir la fracción
        void reduceFraccion();

        // Sobrecarga de operadores
        Fraccion operator+(const Fraccion &F2) const;
        Fraccion operator-(const Fraccion &F2) const;
        Fraccion operator/(const Fraccion &F2) const;

        // Imprimir
        void imprimeResultado() const;

        // Destructor
        virtual ~Fraccion();
};

#endif