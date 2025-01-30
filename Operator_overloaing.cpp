#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}  // Default constructor
    Complex(float r, float i) : real(r), imag(i) {}  // Parameterized constructor

    // Overloading the + operator to add two Complex numbers
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() {coe
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.2, 4.5), c2(1.8, 2.4);
    Complex c3 = c1 + c2;  // Using overloaded + operator
    c3.display();  // Output: 5.0 + 6.9i
    return 0;
}
