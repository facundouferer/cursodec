#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }

    void saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    Persona p1("Juan", 20);
    p1.saludar();

    return 0;
}
