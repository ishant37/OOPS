#include <iostream>
using namespace std;

// Base class 1
class Adder1 {
protected:
    int num1;
public:
    Adder1(int a) : num1(a) {}
};

// Base class 2
class Adder2 {
protected:
    int num2;
public:
    Adder2(int b) : num2(b) {}
};

// Derived class
class Sum : public Adder1, public Adder2 {
public:
    Sum(int a, int b) : Adder1(a), Adder2(b) {}

    // Member function to add the two numbers
    int getSum() {
        return num1 + num2;
    }
};

int main() {
    Sum sumObj(10, 20); // Create an object of Sum with numbers 10 and 20
    cout << "Sum: " << sumObj.getSum() << endl; // Output the sum
    return 0;
}
