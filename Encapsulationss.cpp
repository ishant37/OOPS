#include<iostream>
using namespace std;
class Rectangle{
    int x;
    public:
    void set(int n ){
        x=n;
    }

    int get(){
        return x;
    }
};

int main(){
    Rectangle obj;
    obj.set(3);
    cout<<obj.get();
    return 0;
}