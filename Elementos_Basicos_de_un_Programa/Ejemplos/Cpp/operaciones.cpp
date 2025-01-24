#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;

    cout << (a + b) << "\n";   // 7
    cout << (a - b) << "\n";   // 3
    cout << (a * b) << "\n";   // 10
    cout << (a / b) << "\n";   // 2 (división entera)
    cout << (a % b) << "\n";   // 1 (residuo)
    cout << ((a > 2) && (b < 5)) << "\n";  // 1 (true)

    cout << boolalpha;  // El manipulador boolalpha cambia la salida de bool a true o false(En lugar de 1 o 0)
    cout << ((a > 2) && (b < 5)) << "\n";  // true
    return 0;
}