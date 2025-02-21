#include <iostream>
#include <vector>
using namespace std;

// Función para resolver el problema de la mochila 0-1 usando programación dinámica
pair<int, vector<vector<int>>> mochila_01(vector<int> valor, vector<int> peso, int Capacidad) {
    // Se inserta un valor ficticio en la posición 0 para manejar los casos base
    valor.insert(valor.begin(), 0);
    peso.insert(peso.begin(), 0);
    int n = valor.size() - 1; // Número de objetos
    
    // Crear la tabla m[0..n][0..Capacidad] inicializada a 0
    vector<vector<int>> m(n + 1, vector<int>(Capacidad + 1, 0));
    
    // Llenar la tabla con programación dinámica
    for (int objeto = 1; objeto <= n; objeto++) {
        for (int subcapacidad = 1; subcapacidad <= Capacidad; subcapacidad++) {
            if (peso[objeto] > subcapacidad) {
                m[objeto][subcapacidad] = m[objeto - 1][subcapacidad];
            } else {
                m[objeto][subcapacidad] = max(
                    m[objeto - 1][subcapacidad], 
                    m[objeto - 1][subcapacidad - peso[objeto]] + valor[objeto]
                );
            }
        }
    }
    
    // Retornar el valor máximo acumulado y la tabla de programación dinámica
    return {m[n][Capacidad], m};
}

int main() {
    // Datos de entrada: valores, pesos y capacidad máxima
    vector<int> valor = {6, 12, 10, 2}; 
    vector<int> peso = {1, 3, 2, 4};
    int Capacidad = 5;
    
    // Llamada a la función
    pair<int, vector<vector<int>>> resultado = mochila_01(valor, peso, Capacidad);
    int max_valor = resultado.first;
    vector<vector<int>> tabla = resultado.second;
    
    // Mostrar el valor máximo acumulado
    cout << "El valor maximo acumulado es: " << max_valor << endl;
    cout << "La tabla de programacion dinamica es: " << endl;
    
    // Mostrar la tabla de programación dinámica
    for (int i = 0; i < tabla.size(); i++) {
        for (int j = 0; j < tabla[i].size(); j++) {
            cout << tabla[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}