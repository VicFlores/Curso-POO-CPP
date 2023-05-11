#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    /* Asignacion reservada */
    cout << "Asignacion reservada" << endl;

    Person reservPerson = Person();
    reservPerson.name = "Vic Flores";
    reservPerson.age = 22;

    cout << reservPerson.name << endl;
    cout << reservPerson.age << endl;

    /* Asignacion dinamica */
    cout << "Asignacion dinamica" << endl;

    Person *dinamicPerson = new Person();
    dinamicPerson ->name = "Vic Escobar";
    dinamicPerson ->age = 22;


}
