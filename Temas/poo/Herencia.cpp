#include <iostream>
using namespace std;

class Animal {
public:
    void comer() {
        cout << "Este animal está comiendo." << endl;
    }
};

class Perro : public Animal {
private:
    string raza;
public:
    void ladrar() {
        cout << "Guau guau!" << endl;
    }
    string getRaza() const {
        return raza;
    }
    void setRaza(string r) {
        raza = r;
    }
};

int main() {
    Perro miPerro;
    miPerro.comer();  // Heredado de Animal
    miPerro.ladrar(); // Propio de Perro
    return 0;
}
