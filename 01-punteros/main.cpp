#include <iostream>
#include <string>

using namespace std;

int main() {
    /* Ejemplo 1 */
    cout << "Ejemplo #1" << endl;
    string name = "Vic Flores";
    cout << name << endl;

    string *puntero = &name;

    /* Vemos la direccion de name */
    cout << &name << endl;

    /* Vemos la direccion de puntero */
    cout << &puntero << endl;

    /* Accedemos al valor de name */
    cout << *puntero << endl;

    /* Ejemplo 2 */
    cout << "Ejemplo #2" << endl;
    char letter = 'V';
    cout << letter << endl;

    char *puntero2 = &letter;

    /* Vemos la direccion de letter */
    cout << (int *) &letter << endl;

    /* Vemos la direccion de puntero2 */
    cout << &puntero2 << endl;

    /* Accedemos al valor de letter */
    cout << *puntero2 << endl;
    
}