#include <iostream>
using namespace std;

int main() {

    int color;
    cout << "Dime el numero de color: ";
    cin >> color;

    switch(color){
        case 100:
            cout << "Rojo";
            break;
        case 200:
            cout << " Amarillo mostaza";
            break;

        case 300:
            cout << "Naranja";
            break;
        default:
            cout << "El color indicado no existe..";
            break;
            
    }
}