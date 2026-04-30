#include <iostream>
using namespace std;

class Auto {
public:
    void encender() {
        cout << "Auto encendido." << endl;
    }

    void conducir() {
        cout << "Conduciendo el auto..." << endl;
    }
};

int main() {
    Auto miAuto;
    miAuto.encender();
    miAuto.conducir();
    return 0;
}
