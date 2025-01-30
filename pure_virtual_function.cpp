#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
    
    // Non-pure virtual function
    virtual void info() {
        cout << "This is a shape." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }

    void info() override {
        cout << "This is a circle." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }

    void info() override {
        cout << "This is a rectangle." << endl;
    }
};

int main() {
    Shape* shape1;
    Circle circle;
    Rectangle rectangle;

    shape1 = &circle;
    shape1->draw();  // Calls Circle's draw method
    shape1->info();  // Calls Circle's info method

    shape1 = &rectangle;
    shape1->draw();  // Calls Rectangle's draw method
    shape1->info();  // Calls Rectangle's info method

    return 0;
}
