/*
The Abstract Factory is a creational design pattern that provides an interface
for creating families of related objects without specifying their concrete classes.
In simple terms, the Abstract Factory allows you to create related objects without 
worrying about the specific implementations of those objects. Instead of creating 
objects directly, it uses an abstract factory that creates the objects for you.
*/

#include <iostream>

// Abstract Product A
class AbstractProductA {
public:
    virtual void operationA() = 0; //A virtual function is one that is expected to be redefined in derived classes.
};

// Concrete Product A1
class ConcreteProductA1 : public AbstractProductA {
public:
    void operationA() override { //Override is used to indicate that a function in a derived class is overriding a virtual function in the base class
        std::cout << "Operation A in ConcreteProductA1" << std::endl;
    }
};

// Concrete Product A2
class ConcreteProductA2 : public AbstractProductA {
public:
    void operationA() override { //Override is used to indicate that a function in a derived class is overriding a virtual function in the base class
        std::cout << "Operation A in ConcreteProductA2" << std::endl;
    }
};

// Abstract Product B
class AbstractProductB {
public:
    virtual void operationB() = 0;
};

// Concrete Product B1
class ConcreteProductB1 : public AbstractProductB {
public:
    void operationB() override { //Override is used to indicate that a function in a derived class is overriding a virtual function in the base class
        std::cout << "Operation B in ConcreteProductB1" << std::endl;
    }
};

// Concrete Product B2
class ConcreteProductB2 : public AbstractProductB {
public:
    void operationB() override { //Override is used to indicate that a function in a derived class is overriding a virtual function in the base class
        std::cout << "Operation B in ConcreteProductB2" << std::endl;
    }
};

// Abstract Factory
class AbstractFactory {
public:
    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
};

// Concrete Factory 1
class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ConcreteProductA1();
    }

    AbstractProductB* createProductB() override {
        return new ConcreteProductB1();
    }
};

// Concrete Factory 2
class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ConcreteProductA2();
    }

    AbstractProductB* createProductB() override {
        return new ConcreteProductB2();
    }
};

int main() {
    // Using the abstrac factory
    AbstractFactory* factory1 = new ConcreteFactory1();
    AbstractProductA* productA1 = factory1->createProductA();
    AbstractProductB* productB1 = factory1->createProductB();
    productA1->operationA();
    productB1->operationB();

    AbstractFactory* factory2 = new ConcreteFactory2();
    AbstractProductA* productA2 = factory2->createProductA();
    AbstractProductB* productB2 = factory2->createProductB();
    productA2->operationA();
    productB2->operationB();

    delete factory1;
    delete factory2;
    delete productA1;
    delete productB1;
    delete productA2;
    delete productB2;

    return 0;
}