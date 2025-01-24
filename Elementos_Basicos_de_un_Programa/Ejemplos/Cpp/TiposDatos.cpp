// TiposDatos.cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;             // Entero
    double y = 3.14;        // Doble precisión
    bool esActivo = true;   // Booleano
    char letra = 'A';       // Carácter

    // Declaración de variables adicionales:
    unsigned int numeroPositivo = 300;  // Solo valores >= 0
    long long numeroGrande = 1234567890123; // Entero muy grande

    cout << "x = " << x 
         << ", y = " << y 
         << ", esActivo = " << esActivo 
         << ", letra = " << letra << "\n";

    cout << "numeroPositivo = " << numeroPositivo << "\n";
    cout << "numeroGrande = " << numeroGrande << "\n";
    return 0;
}