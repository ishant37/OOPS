#include <iostream>
using namespace std;

class counter {
    static int count; // Static variable to keep track of object count
public:
    counter() { // Constructor to increment count
        count++;
    }
    void getdata() const { // Function to display the current count
        cout << "Objects created: " << count << endl;
    }
};

int counter::count = 0; // Initialize static variable

int main() {
    counter c1,c2;
    c1.getdata(); // Will display the total objects created
    c2.getdata(); // Will display the total objects created
    return 0;
}
