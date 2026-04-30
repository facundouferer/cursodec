#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:

    int dni;

    Persona(string n, int e, int d) {
        nombre = n;
        edad = e;
        dni = d;
    }

    void saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }

    string verNombre() const {
        return nombre;
    }

    void cambiarNombre(string n) {
        nombre = n;
    }

    void presentarme(){
        cout << "Me llamo " << nombre <<  "." << endl;
    }

};

int main() {
    Persona persona1("Juan", 20, 34918123);
    persona1.saludar();
    persona1.cambiarNombre("Carlos");
    persona1.verNombre();
    persona1.presentarme();
    persona1.dni = 12345678; //xq es público
    return 0;
}
