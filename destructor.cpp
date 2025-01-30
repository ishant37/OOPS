#include <iostream>
using namespace std;

class Example {
public:
    // Constructor
    Example() {
        cout << "Constructor called" << endl;
    }
    
    // Destructor
    ~Example() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Example obj; // Constructor is called here
    // Destructor will be called automatically when obj goes out of scope
    return 0;
}
