#include <iostream>
#include <string>
using namespace std;

int main() {
    string part1, part2, part3;

    // Input the name in three parts
    cout << "Enter the first part of the name: ";
    cin >> part1;

    cout << "Enter the second part of the name: ";
    cin >> part2;

    cout << "Enter the third part of the name: ";
    cin >> part3;

    // Concatenate the strings using the + operator
    string fullName = part1 + " " + part2 + " " + part3;

    // Display the result
    cout << "The full name is: " << fullName << endl;

    return 0;
}
