#include<iostream>
using namespace std;
class Print{
    public:
    void show(int x){
        cout<<x<<endl;
    }
    void show(char ch){
        cout<<ch<<endl;
    }
    void show(double bd){
        cout<<bd<<endl;
    }

};

int main(){
    Print p1;
    p1.show("hi");
}
