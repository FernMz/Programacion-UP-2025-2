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

    /*La función getline regresa un valor booleano que indica si la operación de 
    lectura fue exitosa o no. Esto la hace ideal para usar dentro de un bucle como
     while, ya que permite iterar automáticamente sobre todas las líneas de un 
     archivo o flujo de texto.
     
     istream& getline(istream& is, string& str, char delim = '\n');
is: El flujo de entrada, como un archivo (ifstream), desde el que se leerán los datos.
str: La variable de tipo string donde se almacenará la línea leída.
delim: El carácter delimitador que marca el final de una línea (por defecto, es el carácter de nueva línea '\n').*/

    while(getline(archivo, linea)) {
        // Si queremos ignorar la primera linea (encabezados)
        if(primeraLinea) {
            primeraLinea = false;
            continue;  //Salta a la siguiente iteración del bucle      

        // Partir la linea por comas
        // Ej: "0.0,0.1"
        stringstream ss(linea); // Convierte la línea en un flujo de texto y lo guarada en ss para procesar los valores separados por comas.
        string valorTiempo, valorCel;

        if(getline(ss, valorTiempo, ',') && getline(ss, valorCel, ',')) {
            double tiempo = stod(valorTiempo);
            double celulas = stod(valorCel);

            cout << "Tiempo: " << tiempo 
                 << "\tCelulas (millones/mL): " << celulas << "\n";
        }
    }

    archivo.close();  // Cierra el archivo después de completar su uso, liberando recursos asociados.
    return 0;
}