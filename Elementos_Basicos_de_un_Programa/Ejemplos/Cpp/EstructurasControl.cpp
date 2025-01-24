// Ejemplos/Cpp/EstructurasControl.cpp
#include <iostream>  // Para cout, cin, etc. (Entradas y Salidas)
using namespace std;  // Para no escribir std:: en cada uso

// #include <iostream> es para usar cout, cin, etc.
// using namespace std; nos evita tener que escribir std:: constantemente

int main() {
    int x = 15;

    // if, else if, else
    if(x < 10) {
        cout << "x es menor que 10\n";
    } else if(x < 20) {
        cout << "x está entre 10 y 19\n";
    } else {
        cout << "x es 20 o mayor\n";
    }

    // for
    for(int i = 0; i < 3; i++) {
        cout << "i = " << i << "\n";
    }

    // while
    int contador = 0;
    while(contador < 3) {
        cout << "contador = " << contador << "\n";
        contador++;
    }

    // do-while
    int j = 0;
    do {
        cout << "j = " << j << "\n";
        j++;
    } while(j < 3);

    return 0;
}