#include <iostream>          // Para usar cout
#include "utilidades.h"      // Incluye el prototipo de saludar
using namespace std;         // Evitamos usar std:: en cada uso

void saludar(const std::string &nombre) {
    cout << "Hola, " << nombre << "!" << endl;
}