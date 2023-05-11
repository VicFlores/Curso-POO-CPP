#include <iostream>
#include <string>

using namespace std;

class Person {
    private:   
        string name;
        int age;

    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void sayHello() {
            cout << "Hi, " << name << " Im: " << age << " years old" << endl;
        }

        Person &setName(string name) {
            this->name = name;
            return *this;
        }

        Person &setAge(int age) {
            this->age = age;
            return *this;
        }
};

int main() {
    Person *person = new Person("Vic Flores", 22);

    person->sayHello();
    person->setName("Ferman Escobar").setAge(50);
    person->sayHello();
}