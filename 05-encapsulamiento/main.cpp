#include <iostream>
#include <string>

using namespace std;

class Person {
    private:   
        string name;
        int age;

    public:
        Person(string userName, int userAge) {
            name = userName;
            age = userAge;
        }

        void sayHello(string message) {
            cout << message << endl;
        }
};

int main() {
    Person *person = new Person("Vic Flores", 22);

    person ->sayHello("Hi Dr. Vic Flores");
}