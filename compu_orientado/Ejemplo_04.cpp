#include <iostream>
using namespace std;
int maxDeTres(int x, int y, int z){
    if (x > y){
        if (x > z){
            return x ;              
        }
        else{
            return z ;
        }
    }
    else{
        if (y > z){
            return y ;
        }
        else{
            return z;
        }
       
    }

};
int main(){
    int x = 100, y = 20, z = 50 ;     // Inicializar datos con valores
    int num;                          // en num se guarda el valor mas grande
    num = maxDeTres(x,y,z);
    
    cout << "\nEL numero mas grande es:  " << num << endl << endl;
    
}