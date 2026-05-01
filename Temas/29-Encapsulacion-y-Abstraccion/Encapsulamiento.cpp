#include <iostream>
//es una instrucción que le indica al compilador que vas a usar el namespace llamado std sin tener que escribirlo cada vez.
using namespace std; 

class CuentaBancaria {
private:
    double saldo;

public:
    CuentaBancaria() {
        saldo = 0;
    }

    void depositar(double cantidad) {
        if (cantidad > 0) saldo += cantidad;
    }

    double verSaldo() {
        return saldo;
    }
};

int main() {
    cout << "Bienvenido a su cuenta bancaria." << endl;
    CuentaBancaria miCuenta;
    miCuenta.depositar(1000);
    cout << "Saldo actual: $" << miCuenta.verSaldo() << endl;

    return 0;
}
