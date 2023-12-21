#include <iostream>
#include <stdlib.h>
using namespace std;

class Person{
    private: //Atributos
        string name;
        int age;
    
    public: //Metodos
        Person(string, int);
        void showPerson();
};

class Student : public Person { // Clase hija, " : " para heredera atributos de la clase padre
    private: //Atributos
        string studentCode;
        float finalNote;
    
    public: //Metodos
        Student(string, int, string, float);
        void showStudent();
};

//Constructor clase padre
Person::Person(string _name, int _age) {
    name = _name;
    age = _age;
}

//Constructor clase hija, al final se le hereda los atributos del constructor de la clase padre
Student::Student(string _name, int _age, string _studentCode, float _finalNote) : Person(_name, _age) {
    studentCode = _studentCode;
    finalNote = _finalNote;
}

void Person::showPerson() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
 //Funcion clase hija, se llama funcion clase padre que no está encapsulada, quieres decir, que es publica
void Student::showStudent() {
    showPerson();
    cout << "Student Code: " << studentCode << endl;
    cout << "Final note: " << finalNote << endl;
}

int main() {
    Student student1("Cesar", 27, "1107842265", 15.4);

    student1.showStudent();

    return 0;
}
