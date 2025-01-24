// Ejemplos/Cpp/arreglos.cpp
#include <iostream>
#include <vector>
using namespace std;  // Para no escribir std:: en cada uso

int main() {
    // Ejemplo de vector
    vector<int> vec = {10, 20, 30};
    vec.push_back(40);

    cout << "Contenido de vec:" << std::endl;
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}