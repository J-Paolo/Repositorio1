#include <iostream>
using namespace std;
int main() {
    int consumoKw;
    double precio;
    cout << "Ingrese la cantidad de Kw: " << "\n";
    cin >> consumoKw;
    if (consumoKw < 100)
        precio = (double) consumoKw*0.452;
    else
        precio = (double) consumoKw*0.7;
    cout << "El monto a pagar es: " << precio << "\n";

    return 0;
}
