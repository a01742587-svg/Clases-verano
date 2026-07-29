#include <iostream>
#include <string>

using namespace std;

// PRIMERA CLASE (CLIENTE) // Guarda la info de cada cliente registrado
class Cliente {
    private:
    // Atributos
        string nombreCompleto;
        string fechaNacimiento;
        string genero;
        string nacionalidad;
        string tipoDocumento;
        string telefono;
        string correo;

    public:
    // Constructores
        Cliente(string nc, string fn, string g, string n, string td, string t, string c);
        Cliente(string nc, string c);

        //Setters
        void setNombreCompleto(string nc);
        void setFechaNacimiento(string fn);
        void setGenero(string g);
        void setNacionalidad(string n);
        void setTipoDocumento(string td);
        void setTelefono(string t);
        void setCorreo(string c);

        // Getters
        string getNombreCompleto();
        string getFechaNacimiento();
        string getGenero();
        string getNacionalidad();
        string getTipoDocumento();
        string getTelefono();
        string getCorreo();

        // Metodo, sirve para mostrar la informacion del cliente 
        void mostrarCliente();
};

// SEGUNDA CLASE (VUELO) // Guarda la info de cada vuelo registrado
class Vuelo {
    private:
    // Atributos
        string numeroVuelo;
        string origen;
        string destino;
        string fecha;
        string hora;
        string numeroAsiento;
        Cliente clienteAsignado;

    public:
    // Constructores
        Vuelo(string numv, string o, string d, string f, string h, string numa, Cliente ca);
        Vuelo(string numv, string o, string d, Cliente ca);

        //Setters
        void setNumeroVuelo(string numv);
        void setOrigen(string o);
        void setDestino(string d);
        void setFecha(string f);
        void setHora(string h);
        void setNumeroAsiento(string numa);
        void setClienteAsignado(Cliente ca);

        // Getters
        string getNumeroVuelo();
        string getOrigen();
        string getDestino();
        string getFecha();
        string getHora();
        string getNumeroAsiento();
        Cliente getClienteAsignado();

        // Metodo, sirve para mostrar la info del vuelo
        void mostrarVuelo();
};

// PRIMER CONSTRUCTOR (CLIENTE)
Cliente::Cliente(string nc, string fn, string g, string n, string td, string t, string c) { // Constructor con todos los atributos de la clase cliente
    nombreCompleto = nc;
    fechaNacimiento = fn;
    genero = g;
    nacionalidad = n;
    tipoDocumento = td;
    telefono = t;
    correo = c;
}

// SEGUNDO CONSTRUCTOR (CLIENTE)
Cliente::Cliente(string nc, string c) { // Constructor con algunos atributos de la clase cliente
    nombreCompleto = nc;
    fechaNacimiento = "No fue asignado";
    genero = "No fue asignado";
    nacionalidad = "No fue asignado";
    tipoDocumento = "No fue asignado";
    telefono = "No fue asignado";
    correo = c;
}

// Setters
void Cliente::setNombreCompleto(string nc) {
    nombreCompleto = nc;
}

void Cliente::setFechaNacimiento(string fn) {
    fechaNacimiento = fn;
}

void Cliente::setGenero(string g) {
    genero = g;
}

void Cliente::setNacionalidad(string n) {
    nacionalidad = n;
}

void Cliente::setTipoDocumento(string td) {
    tipoDocumento = td;
}

void Cliente::setTelefono(string t) {
    telefono = t;
}

void Cliente::setCorreo(string c) {
    correo = c;
}

// Getters
string Cliente::getNombreCompleto() {
    return nombreCompleto;
}

string Cliente::getFechaNacimiento() {
    return fechaNacimiento;
}

string Cliente::getGenero() {
    return genero;
}

string Cliente::getNacionalidad() {
    return nacionalidad;
}

string Cliente::getTipoDocumento() {
    return tipoDocumento;
}

string Cliente::getTelefono() {
    return telefono;
}

string Cliente::getCorreo() {
    return correo;
}

// Metodo, sirve para mostrar la info del cliente
void Cliente::mostrarCliente() {
    cout << "Nombre completo: " << nombreCompleto << endl;
    cout << "Fecha de nacimiento: " << fechaNacimiento << endl;
    cout << "Genero: " << genero << endl;
    cout << "Nacionalidad: " << nacionalidad << endl;
    cout << "Tipo de documento: " << tipoDocumento << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Correo electronico: " << correo << endl;
}

// PRIMER CONSTRUCTOR (VUELO)
Vuelo::Vuelo(string numv, string o, string d, string f, string h, string numa, Cliente ca) // Constructor con todos los atributos de la clase vuelo
    : clienteAsignado(ca) {
    numeroVuelo = numv;
    origen = o;
    destino = d;
    fecha = f;
    hora = h;
    numeroAsiento = numa;
}

// SEGUNDO CONSTRUCTOR (VUELO)
Vuelo::Vuelo(string numv, string o, string d, Cliente ca) // Constructor con algunos atributos de la clase vuelo
    : clienteAsignado(ca) {
    numeroVuelo = numv;
    origen = o;
    destino = d;
    fecha = "No fue asignado";
    hora = "No fue asignado";
    numeroAsiento = "No fue asignado";
}

// Setters
void Vuelo::setNumeroVuelo(string numv) {
    numeroVuelo = numv;
}

void Vuelo::setOrigen(string o) {
    origen = o;
}

void Vuelo::setDestino(string d) {
    destino = d;
}

void Vuelo::setFecha(string f) {
    fecha = f;
}

void Vuelo::setHora(string h) {
    hora = h;
}

void Vuelo::setNumeroAsiento(string numa) {
    numeroAsiento = numa;
}

void Vuelo::setClienteAsignado(Cliente ca) {
    clienteAsignado = ca;
}

// Getters
string Vuelo::getNumeroVuelo() {
    return numeroVuelo;
}

string Vuelo::getOrigen() {
    return origen;
}

string Vuelo::getDestino() {
    return destino;
}

string Vuelo::getFecha() {
    return fecha;
}

string Vuelo::getHora() {
    return hora;
}

string Vuelo::getNumeroAsiento() {
    return numeroAsiento;
}

Cliente Vuelo::getClienteAsignado() {
    return clienteAsignado;
}

// Metodo, sirve para mostrar la info del vuelo
void Vuelo::mostrarVuelo() {
    cout << "Numero de vuelo: " << numeroVuelo << endl;
    cout << "Origen: " << origen << endl;
    cout << "Destino: " << destino << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora << endl;
    cout << "Numero de asiento: " << numeroAsiento << endl;
    cout << "Cliente asignado: " << clienteAsignado.getNombreCompleto() << endl;
}

// NUESTRA FUNCION PRINCIPAL
int main() {

    // OBJETOS, son clientes ya con datos asignados
    Cliente cliente1("Fernanda Espinoza Garcia", "04/07/2007", "Femenino", "Mexicana", "Pasaporte", "66 7 266 7775", "fernanda@gmail.com");
    Cliente cliente2("Luis Emiliano Espinoza Garcia", "LuisE@gmail.com");

    cliente2.setFechaNacimiento("04/07/2007");
    cliente2.setGenero("Masculino");
    cliente2.setNacionalidad("Mexicana");
    cliente2.setTipoDocumento("Pasaporte");
    cliente2.setTelefono("66 7 266 8885");

    // OBJETOS, son vuelos ya con datos asignados
    Vuelo vuelo1("VB7097", "CLN", "MTY", "07/08/2026", "9:45 AM", "60C", cliente1);
    Vuelo vuelo2("VB7098", "CLN", "MTY", "07/08/2026", "9:45 AM", "60A", cliente2);
    Vuelo vuelo3("VB170", "MTY", "CLN", cliente1);

    vuelo3.setFecha("15/11/2026");
    vuelo3.setHora("7:15 AM");
    vuelo3.setNumeroAsiento("07F");

    // OBJETOS PARA REGISTRAR UN NUEVO CLIENTE Y UN NUEVO VUELO
    Cliente cliente3("No fue asignado", "No fue asignado");
    Vuelo vuelo4("No fue asignado", "No fue asignado", "No fue asignado", cliente3);

    // VARIABLES DE TIPO INT PARA LAS OPCIONES
    int opc;
    int opcionGenero;
    int opcionDocumento;

    // VARIABLES DE TIPO STRING PARA EL MENU
    string regresar;
    string clienteBuscar;
    string vueloBuscar;
    string clienteNuevoRegistrado;
    string vueloNuevoRegistrado;

    string nuevoNombre;
    string nuevaFechaNacimiento;
    string nuevoGenero;
    string nuevaNacionalidad;
    string nuevoTipoDocumento;
    string nuevoTelefono;
    string nuevoCorreo;

    string nuevoNumeroVuelo;
    string nuevoOrigen;
    string nuevoDestino;
    string nuevaFecha;
    string nuevaHora;
    string nuevoNumeroAsiento;
    string correoClienteAsignado;

    clienteNuevoRegistrado = "no";
    vueloNuevoRegistrado = "no";
    regresar = "si";

    // MENU PRINCIPAL
    while (regresar == "si") {     // REPITE EL MENU MIENTRAS EL USUARIO ESCRIBA SI
        cout << endl;
        cout << "----- SISTEMA DE ADMINISTRACION DE VUELOS -----" << endl;
        cout << "1. Mostrar vuelos disponibles" << endl;
        cout << "2. Mostrar clientes registrados" << endl;
        cout << "3. Buscar cliente" << endl;
        cout << "4. Buscar vuelo" << endl;
        cout << "5. Registrar nuevo cliente" << endl;
        cout << "6. Registrar nuevo vuelo" << endl;
        cout << "7. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opc;
        cin.ignore();
        cout << "-----------------------------------------------" << endl;

        switch (opc) {  // EJECUTA LA OPCION SELECCIONADA POR EL USUARIO
            case 1: 
            // MUESTRA LOS VUELOS
                cout << endl;
                cout << "----- VUELOS DISPONIBLES -----" << endl;
                vuelo1.mostrarVuelo();
                cout << endl;
                vuelo2.mostrarVuelo();
                cout << endl;
                vuelo3.mostrarVuelo();

                if (vueloNuevoRegistrado == "si") {
                    cout << endl;
                    vuelo4.mostrarVuelo();
                }
                break;

            case 2:
            // MUESTRA LOS CLIENTES
                cout << endl;
                cout << "---- CLIENTES REGISTRADOS ----" << endl;
                cliente1.mostrarCliente();
                cout << endl;
                cliente2.mostrarCliente();

                if (clienteNuevoRegistrado == "si") {
                    cout << endl;
                    cliente3.mostrarCliente();
                }
                break;

            case 3:
            // BUSCA AL CLIENTE MEDIANTE SU CORREO
                cout << endl;
                cout << "Escriba el correo electronico del cliente: ";
                getline(cin, clienteBuscar);

                if (clienteBuscar == cliente1.getCorreo()) {
                    cliente1.mostrarCliente();
                }
                else if (clienteBuscar == cliente2.getCorreo()) {
                    cliente2.mostrarCliente();
                }
                else if (clienteNuevoRegistrado == "si") {
                    if (clienteBuscar == cliente3.getCorreo()) {
                        cliente3.mostrarCliente();
                    }
                    else {
                        cout << "Cliente no encontrado." << endl;
                    }
                }
                else {
                    cout << "Cliente no encontrado." << endl;
                }
                break;

            case 4:
            // BUSCA UN VUELO MEDIANTE EL NUMERO
                cout << endl;
                cout << "Escriba el numero de vuelo: ";
                getline(cin, vueloBuscar);

                if (vueloBuscar == vuelo1.getNumeroVuelo()) {
                    vuelo1.mostrarVuelo();
                }
                else if (vueloBuscar == vuelo2.getNumeroVuelo()) {
                    vuelo2.mostrarVuelo();
                }
                else if (vueloBuscar == vuelo3.getNumeroVuelo()) {
                    vuelo3.mostrarVuelo();
                }
                else if (vueloNuevoRegistrado == "si") {
                    if (vueloBuscar == vuelo4.getNumeroVuelo()) {
                        vuelo4.mostrarVuelo();
                    }
                    else {
                        cout << "Vuelo no encontrado." << endl;
                    }
                }
                else {
                    cout << "Vuelo no encontrado." << endl;
                }
                break;

            case 5:
            // REGISTRA A UN CLIENTE NUEVO
                cout << endl;
                cout << "----- REGISTRAR NUEVO CLIENTE -----" << endl;

                cout << "Nombre completo: ";
                getline(cin, nuevoNombre);

                cout << "Fecha de nacimiento: ";
                getline(cin, nuevaFechaNacimiento);

                cout << "Seleccione el genero:" << endl;
                cout << "1. Femenino" << endl;
                cout << "2. Masculino" << endl;
                cout << "Opcion: ";
                cin >> opcionGenero;
                cin.ignore();

                if (opcionGenero == 1) {
                    nuevoGenero = "Femenino";
                }
                else if (opcionGenero == 2) {
                    nuevoGenero = "Masculino";
                }
                else {
                    nuevoGenero = "No fue asignado";
                }

                cout << "Nacionalidad: ";
                getline(cin, nuevaNacionalidad);

                cout << "Seleccione el tipo de documento:" << endl;
                cout << "1. Pasaporte" << endl;
                cout << "2. Identificacion nacional" << endl;
                cout << "3. Visa" << endl;
                cout << "Opcion: ";
                cin >> opcionDocumento;
                cin.ignore();

                if (opcionDocumento == 1) {
                    nuevoTipoDocumento = "Pasaporte";
                }
                else if (opcionDocumento == 2) {
                    nuevoTipoDocumento = "Identificacion nacional";
                }
                else if (opcionDocumento == 3) {
                    nuevoTipoDocumento = "Visa";
                }
                else {
                    nuevoTipoDocumento = "No fue asignado";
                }

                cout << "Numero de telefono: ";
                getline(cin, nuevoTelefono);

                cout << "Correo electronico: ";
                getline(cin, nuevoCorreo);

                cliente3.setNombreCompleto(nuevoNombre);
                cliente3.setFechaNacimiento(nuevaFechaNacimiento);
                cliente3.setGenero(nuevoGenero);
                cliente3.setNacionalidad(nuevaNacionalidad);
                cliente3.setTipoDocumento(nuevoTipoDocumento);
                cliente3.setTelefono(nuevoTelefono);
                cliente3.setCorreo(nuevoCorreo);

                clienteNuevoRegistrado = "si";

                cout << "Cliente registrado correctamente." << endl;
                break;

            case 6:
            //REGISTRA UN VUELO NUEVO
                cout << endl;
                cout << "----- REGISTRAR NUEVO VUELO -----" << endl;

                cout << "Numero de vuelo: ";
                getline(cin, nuevoNumeroVuelo);

                cout << "Origen: ";
                getline(cin, nuevoOrigen);

                cout << "Destino: ";
                getline(cin, nuevoDestino);

                cout << "Fecha: ";
                getline(cin, nuevaFecha);

                cout << "Hora: ";
                getline(cin, nuevaHora);

                cout << "Numero de asiento: ";
                getline(cin, nuevoNumeroAsiento);

                cout << "Correo del cliente que desea asignar: ";
                getline(cin, correoClienteAsignado);

                if (correoClienteAsignado == cliente1.getCorreo()) {
                    vuelo4.setClienteAsignado(cliente1);
                    vueloNuevoRegistrado = "si";
                }
                else if (correoClienteAsignado == cliente2.getCorreo()) {
                    vuelo4.setClienteAsignado(cliente2);
                    vueloNuevoRegistrado = "si";
                }
                else if (clienteNuevoRegistrado == "si") {
                    if (correoClienteAsignado == cliente3.getCorreo()) {
                        vuelo4.setClienteAsignado(cliente3);
                        vueloNuevoRegistrado = "si";
                    }
                    else {
                        vueloNuevoRegistrado = "no";
                        cout << "No se encontro el cliente, el vuelo no fue registrado." << endl;
                    }
                }
                else {
                    vueloNuevoRegistrado = "no";
                    cout << "No se encontro el cliente, el vuelo no fue registrado." << endl;
                }

                if (vueloNuevoRegistrado == "si") {
                    vuelo4.setNumeroVuelo(nuevoNumeroVuelo);
                    vuelo4.setOrigen(nuevoOrigen);
                    vuelo4.setDestino(nuevoDestino);
                    vuelo4.setFecha(nuevaFecha);
                    vuelo4.setHora(nuevaHora);
                    vuelo4.setNumeroAsiento(nuevoNumeroAsiento);

                    cout << "Vuelo registrado correctamente." << endl;
                }


                break;

            case 7:
            // TE AYUDA A SALIR DEL PROGRAMA
                regresar = "no";
                cout << "Programa finalizado." << endl;
                break;

            default:
                cout << "Opcion no valida D:" << endl;
                break;
        }

        if (opc != 7) { // LE PREGUNTA AL USUARIO SI QUIERE VOLVER
            cout << endl;
            cout << "Desea regresar al menu? Por favo, escriba si o no: ";
            cin >> regresar;
        }
    }

    return 0; // FINALIZA EL PROGRAMA
}
