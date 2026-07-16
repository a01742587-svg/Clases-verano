#include <iostream>
using namespace std;
class Rectangulo{
    public:
        void setBase(float _base){
            base = _base;
        };
        void setAltura(float _altura){
            altura = _altura;
        };
        float getBase(){
            return base;
        };
        float getAltura(){
            return altura;
        };
        float area(){
            return base*altura;
        };
    private:
        float base, altura;
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