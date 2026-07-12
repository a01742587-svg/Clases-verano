#include <iostream>
#include <string>

using namespace std;

class Alumno { // creamos clase llamada alumno 

    private: // aqui se mencionan todos los atributos que deben de ser privados que sirve para guardar la info que pertenece a un objeto.
        string matricula;
        string nombre;
        int edad;
        string carrera;
        int semestre;
        string grupo;
        float calificacion_1p;
        float calificacion_2p;
        float calificacion_3p;

    public: //en public creamos stter y getter de cada atributo

    //SETTERS
        void setMatricula(string m){
            matricula=m;
        }

        void setNombre(string n){
            nombre=n;
        }

        void setEdad(int e){
            edad=e;
        }

        void setCarrera(string c){
            carrera=c;
        }

        void setSemestre(int s){
            semestre=s;
        }
        void setGrupo(string g){
            grupo=g;
        }
        void setCalificacion1(float c1){
            calificacion_1p=c1;
        }
        void setCalificacion2(float c2){
            calificacion_2p=c2;
        }
        void setCalificacion3(float c3){
            calificacion_3p=c3;
        }

    //GETTERS
        string getMatricula(){
            return matricula;
        }
        string getNombre(){
            return nombre;
        }
        int getEdad(){
            return edad;
        }
        string getCarrera(){
            return carrera;
        }
        int getSemestre(){
            return semestre;
        }
        string getGrupo(){
            return grupo;
        }
        float getCalificacion1(){
            return calificacion_1p;
        }
        float getCalificacion2(){
            return calificacion_2p;
        }
        float getCalificacion3(){
            return calificacion_3p;
        }

        // CALCULAMOS EL PROMEDIO FINAL DENTRO DE LA CLASE

        float calcularPromedio(){
            return(calificacion_1p+calificacion_2p+calificacion_3p)/3;
        }
        string aprobo(){
            if(calcularPromedio()>=70 ){
                return "Aprobo la materia, yupi :D";
            }
            else{
                return "Reprobo la materia, :c";
            }
        }
};

int main() {

    string matricula;
    string nombre;
    int edad;
    string carrera;
    int semestre;
    string grupo;
    float calificacion_1p;
    float calificacion_2p;
    float calificacion_3p;

    Alumno Alumno_1;

    cout << "Matricula: "; 
    cin >> matricula;

    cin.ignore();

    cout << "Nombre Completo: ";
    getline(cin, nombre);

    cout << "Edad: ";
    cin >> edad;

    cin.ignore();
    
    cout << "Carrera: ";
    cin >> carrera; 

    cout << "Semestre: ";
    cin >> semestre;

    cout << "Grupo: ";
    cin >> grupo;

    cout << "Calificación del primer parcial: ";
    cin >> calificacion_1p;

    cout << "Calificación del segunda parcial: ";
    cin >> calificacion_2p;

    cout << "Calificación del tercer parcial: ";
    cin >> calificacion_3p;


    Alumno_1.setMatricula(matricula);
    Alumno_1.setNombre(nombre);
    Alumno_1.setEdad(edad);
    Alumno_1.setCarrera(carrera);
    Alumno_1.setSemestre(semestre);
    Alumno_1.setGrupo(grupo);
    Alumno_1.setCalificacion1(calificacion_1p);
    Alumno_1.setCalificacion2(calificacion_2p);
    Alumno_1.setCalificacion3(calificacion_3p);

    cout << "\n Datos del alumno" <<endl;

    cout << "Matricula: " << Alumno_1.getMatricula() << endl;
    cout << "Nombre: " << Alumno_1.getNombre() << endl;
    cout << "Edad: " << Alumno_1.getEdad() << endl;
    cout << "Carrera: " << Alumno_1.getCarrera() << endl;
    cout << "Semestre: " << Alumno_1.getSemestre() << endl;
    cout << "Grupo: " << Alumno_1.getGrupo() << endl;
    cout << "Calificación de primer semestre: "<< Alumno_1.getCalificacion1() << endl;
    cout << "Calificación de segundo semestre: " << Alumno_1.getCalificacion2() << endl;
    cout << "Calificación de tercer semestre: " <<Alumno_1.getCalificacion3() << endl;
    cout << "Promedio final: " << Alumno_1.calcularPromedio() << endl;
    cout << "Resultados: " << Alumno_1.aprobo() << endl;

    return 0;

}