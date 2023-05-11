#include <iostream>
#include <string>

using namespace std;

class Person {
    private:   
        string name;
        int age;

    public:
        Person(string name, int age);

        static int peopleNumber;

        void sayHello();

        Person &setName(string name) {
            this->name = name;
            return *this;
        }

        Person &setAge(int age) {
            this->age = age;
            return *this;
        }
};

int Person::peopleNumber = 0;

void Person::sayHello() {
    cout << "Hi, " << name << " Im: " << age << " years old" << endl;
}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
    peopleNumber += 1;
}

int main() {
    Person *person1 = new Person("Vic Flores", 22);
    Person *person2 = new Person("Vic Flores", 22);

    cout << "Cantidad de personas: " << Person::peopleNumber << endl;

    person1->sayHello();
    person1->setName("Ferman Escobar").setAge(50);
    person1->sayHello();
}