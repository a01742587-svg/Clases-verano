#include <iostream>
#include <string>

using namespace std;

class Articulo {
    private:
        float costoBase; 

    public:
    //setter
        void setCostoBase(float cb){ //recibimos cb
            costoBase=cb; //guardamos cb en costo
        }
    //getter
        float getCostoBase(){ //nuestra funcion regresa a float
            return costoBase; //devolvemos atributo
        }

    //nuestra funcion para calcular el precio 
        float getMayoreo(){

        if (costoBase < 500) {
            return costoBase + (costoBase*0.15); // Si el costo base es menor a $500, aplicar un incremento del 15%.
        } 
        else{
            return costoBase + (costoBase*0.12); //Si el costo base es de $500 o más, aplicar un incremento del 12%.
        }

    }
    //funcion para calcular el precio de menudeo

    float getMenudeo(){
        if (costoBase <500 ){
            return costoBase/(costoBase*0.30);
        } 
        else{
            return costoBase + (costoBase*0.25);
        }
    }
};

int main(){
    Articulo articulo_1;
    float costo_Base;

    cout << "=====ARTÍCULO=====";
    
    cout << "Por favor, ingrese el costo base: " <<endl;
    cin >> costo_Base;

    //guardar el dayo mediante setter
    articulo_1.setCostoBase(costo_Base);

    //obtenemos el cost mediante getter 
    cout << "Costo Base: $" << articulo_1.getCostoBase() << endl;
    cout << "Precio de mayoreo: $"<< articulo_1.getMayoreo() << endl;
    cout << "Precio de menudeo: $" << articulo_1.getMenudeo() <<endl;

    return 0;
}