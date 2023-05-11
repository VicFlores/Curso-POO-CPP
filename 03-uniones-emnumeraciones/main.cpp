#include <iostream>
#include <string>

using namespace std;

int main() {

    /* Nos permite almacenar en el mismo espacio de memoria, diferentes valores */
    union letterNumber {
        int number;
        char letter;
    };

    letterNumber lenumber = {'V'};

    /* Nos representara la letra segun el codigo ASCII */
    cout << "Lenumber como numero: " << lenumber.number << endl;
    /* Convertirlo segun codigo ASCII a caracter*/
    cout << "Lenumber convertido: " << (char) lenumber.number << endl;
    /* Nos representara la letra*/
    cout << "Lenumber como letra: " << lenumber.letter << endl;
    /* Convertirlo segun caracter a ASCII*/
    cout << "Lenumber como letra: " << (int) lenumber.letter << endl;

    /* Nos permite  */
    enum daysWeek {
        lunes = 'L',
        martes = 'M',
        miercoles = 'I',
        jueves = 'J',
    };

    daysWeek day = jueves;

    cout << (char)day << endl;
}