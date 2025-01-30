// #include<iostream>
// #include<string.h>
// using namespace std;
// class student
// {
// private:
//     /* data */
// public:
//    string name;
//    int age ;
// };
// int main(){
//     student a,b;
//     a.name="ishant";
//     a.age=19;
//     b.name="aaksh";
//     cout<<"name of A is = "<<a.name<<endl;
//     cout<<"age of A is = "<<a.age<<endl;
//     cout<<"name of B is = "<<b.name<<endl;
//     return 0;
// }



//PUBLIC

// #include<iostream>
// #include<string.h>
// using namespace std;
// class Example {
// public:
//     int x; // Public member
// };

// int main() {
//     Example obj;
//     obj.x = 10; // Accessible
//     cout << obj.x << endl;
//     return 0;
// }

///Private
// #include<iostream>
// #include<string.h>
// using namespace std;
// class Example {
// private:
//     int z; // Private member

// public:
//     void setZ(int value) {
//         z = value; // Accessible within the class
//     }
//     int getZ() {
//         return z; // Accessible within the class
//     }
// };

// int main() {
//     Example obj;
//     obj.setZ(30);
//     cout << obj.getZ() << endl;
//     return 0;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
// int arr[5] = {1, 2, 3, 4, 5};
// int *ptr = arr; // Pointer to the first element of the array

// for (int i = 0; i < 5; i++) {
//     std::cout << *(ptr + i) << " "; // Access elements using the pointer
// }
//  return 0;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;
// class hello{
//     public:
//     demo(){
//         cout<<"hello constructor"<<endl;
//     }
// };
// int main(){
//     hello obj;
//     obj.demo();
//  return 0;
// }

#include <iostream>
using namespace std;

class Base {
public:
    virtual void demo() {
        cout << "Base class demo()" << endl;
    }
};

class Derived : public Base {
public:
    void demo() override {
        cout << "Derived class demo()" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;
    basePtr->demo(); // Calls the derived class demo() method

    return 0;
}
