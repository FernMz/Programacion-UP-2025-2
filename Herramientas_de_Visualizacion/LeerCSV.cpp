#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ifstream archivo("datos_crecimiento.csv"); // Abrir archivo CSV en modo lectura
    if(!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo\n";
        return 1;
    }

    string linea;
    bool primeraLinea = true;

    while(getline(archivo, linea)) {
        // Si queremos ignorar la primera linea (encabezados)
        if(primeraLinea) {
            primeraLinea = false;
            continue;
        }

        // Partir la linea por comas
        // Ej: "0.0,0.1"
        stringstream ss(linea);
        string valorTiempo, valorCel;

        if(getline(ss, valorTiempo, ',') && getline(ss, valorCel, ',')) {
            double tiempo = stod(valorTiempo);
            double celulas = stod(valorCel);

            cout << "Tiempo: " << tiempo 
                 << "\tCelulas (millones/mL): " << celulas << "\n";
        }
    }

    archivo.close();
    return 0;
}