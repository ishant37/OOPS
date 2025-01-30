//SINGLE INHERTANCE

// #include <iostream>
// using namespace std;

// // Base class
// class Animal {
// public:
//     void eat() {
//         cout << "This animal can eat." << endl;
//     }
//     void sleep() {
//         cout << "This animal can sleep." << endl;
//     }
// };

// // Derived class
// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "The dog can bark." << endl;
//     }
// };

// int main() {
//     Dog myDog;

//     // Accessing base class methods
//     myDog.eat();
//     myDog.sleep();

//     // Accessing derived class method
//     myDog.bark();

//     return 0;
// }


//MULTIPLE INHERTANCE
#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }
};

// Base class 2
class Bird {
public:
    void fly() {
        cout << "This bird can fly." << endl;
    }
};

// Derived class
class Bat : public Animal, public Bird {
public:
    void sleep() {
        cout << "The bat sleeps upside down." << endl;
    }
};

int main() {
    Bat myBat;

    // Accessing methods from both base classes
    myBat.eat();   // From Animal
    myBat.fly();   // From Bird

    // Accessing method from the derived class
    myBat.sleep();

    return 0;
}
