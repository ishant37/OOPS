#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;

    student(){
        cout<<"non-paramenterized\n";

    }
     student(string name){
        this->name= name;
        cout<<"Parameterized\n";
    }
};
int main(){
    student s1("tony baba");
}