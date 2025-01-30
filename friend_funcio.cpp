#include <iostream>
using namespace std;

class Box {
    double width;

public:
    Box(double w) : width(w) {} // Constructor

    // Declare friend function
    friend void showWidth(const Box& b);
};

// Friend function definition
void showWidth(const Box& b) {
    cout << "Width: " << b.width << endl;
}

int main() {
    Box b(10.5);
    showWidth(b); // Accessing private member using friend function
    return 0;
}
