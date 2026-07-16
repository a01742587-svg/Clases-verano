#include <iostream>
using namespace std;
class Componente{
    
    public:
        void setX(int _x){
            x = _x;
        };
        void setY(int _y){
            y = _y;
        };
        void setZ(int _z){
            z = _z;
        };
        int getX(){
            return x;
        };
                int getY(){
            return y;
        };
                int getZ(){
            return z;
        };
    private:
        int x, y, z ;
    
};
int main(){
    Componente Vector1;
    Vector1.setX(10);
    Vector1.setY(-5);
    Vector1.setZ(3);
    Vector1.setY(5);
    cout << "\nComponente x: " << Vector1.getX()  << endl;
    cout << "\nComponente y: " << Vector1.getY()  << endl;
    cout << "\nComponente z: " << Vector1.getZ()  << endl;
}