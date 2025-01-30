#include <iostream>
using namespace std;

class Sample {
private:
    int value;

public:
    // Constructor to initialize value
    Sample(int v) : value(v) {}

    // Member function to display value
    void display() const {
        cout << "Value: " << value << endl;
    }

    // Static function to display a static message
    static void staticMessage() {
        cout << "This is a static function." << endl;
    }

    // Declare friend function
    friend void friendFunction(Sample& obj);
};

// Friend function definition
void friendFunction(Sample& obj) {
    // Access private member
    cout << "Friend Function: Value is " << obj.value << endl;
}

int main() {
    Sample obj(10); // Create an object of Sample with value 10

    // Call member function
    obj.display();

    // Call static function using class name
    Sample::staticMessage();

    // Call friend function
    friendFunction(obj);

    return 0;
}
