#include<iostream>
using namespace std;
class Parent{
    protected:
    Parent(){
        cout<<"I'm a parent"<<endl;
    }

};
class child: protected Parent{
    public:
    child(){
        cout<<"I'm child"<<endl;
    }
};
int main(){
    child c;
    return 0;
}
