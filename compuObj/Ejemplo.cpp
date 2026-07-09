#include <iostream>
using namespace std;

int main(){
    int n=75;
    int *p=&n; /*p variable puntero, tiene dirección de n*/
   
    cout<<"n="<<n<<endl;
    cout<<"&n="<<&n<<endl;
    cout<<"p="<<p<<endl;
    
    return 0;
 }