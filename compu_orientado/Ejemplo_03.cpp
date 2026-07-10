#include <iostream>
using namespace std;

int main() {
    int x= 100, y=20, z = 50;
    int num;

    if(x > y){
        if (x > z){
            num = x ; // en num guardamos el valor mas grande
        }
        else{
            num = z ;
        }
    }
    else{
        if (y > z){
            num = y ;
        }
        else{
            num = z;
        }

    }
    cout << "\nEl numero mas grande es: " << num << endl << endl;
}