#include <iostream>
using namespace std;
class Rectangulo{
    public:
        void setBase(float _base);
        void setAltura(float _altura);
        float getBase();
        float getAltura();
        float area();
    private:
        float base, altura;


};
    
        void Rectangulo::setBase(float _base){
            base = _base;
        };
        void Rectangulo::setAltura(float _altura){
            altura = _altura;
        };
        float Rectangulo::getBase(){
            return base;
        };
        float Rectangulo::getAltura(){
            return altura;
        };
        float Rectangulo::area(){
            return base*altura;
        };
        
int main(){
    Rectangulo MiRectangulo;
    MiRectangulo.setAltura(5.1);
    MiRectangulo.setBase(10);
    cout << "Altura: " << MiRectangulo.getAltura() << endl;
    cout << "Base: " << MiRectangulo.getBase() << endl;
    cout << "\nArea: " << MiRectangulo.area() << endl;
    //cout << "Area:" << MiRectangulo.getAltura() * MiRectangulo.getBase() << endl;
}