// Ejemplos/Cpp/Funciones.cpp
#include <iostream>  // Para cout, cin, etc. (Entradas y Salidas)
using namespace std; // Para no escribir std:: en cada uso

// Función que no retorna valor (void)
void saludar(string nombre) {
    cout << "Hola, " << nombre << "!\n";
}

// Función que retorna un entero
int sumar(int a, int b=5) {
    return a + b;
}

int main() {
    saludar("Bob");
    cout << sumar(3,4) << "\n";
    return 0;
}