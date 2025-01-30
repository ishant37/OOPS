#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // Override the makeSound method
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override { // Override the makeSound method
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->makeSound(); // Calls Dog's makeSound at runtime

    animalPtr = &cat;
    animalPtr->makeSound(); // Calls Cat's makeSound at runtime

    return 0;
}
