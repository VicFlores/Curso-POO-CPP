#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        /* variable */
        string name;
        int age;

        /* Constructor */
        Person(string username, int edad) {
            name = username;
            age = edad;
        }

        /* Destructor */
        ~Person() {
            cout << "Destructor" << endl;
        }

        /* function */
        void sayHello(string username) {
            cout << username << "\n"<< endl;
        }
};

int main() {
    Person person1 = Person("Ferman Escobar", 22);
    Person *person2 = new Person("Vic Ferman", 50);


    cout << person1.name << endl;
    cout << person1.age << endl;
    person1.sayHello("Vic Escobar");

    cout << person2 ->name << endl;
    cout << person2 ->age << endl;
    person2 ->sayHello("Ferman Flores");
    delete person2;
}