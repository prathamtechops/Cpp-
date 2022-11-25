//Write a program to check the order of constructor call
#include <iostream>
using namespace std;

class A{
    public:
    A()
    {
        cout<< this << " is called\n";
    }
    
    A(int a)
    {
        cout<<"A with para is called\n";
    }
    
    ~A()
    {
        cout<<"A destructor is called\n";
    }
};
class B: public A{
    public:
    B()
    {
        cout<<"B is called\n";
    }
    B(int b)
    {
        cout<<"B with para is called\n";
    }
    
    ~B()
    {
        cout<<"B destructor is called\n";
    }
};


int main() {
    
    B b;
    B b2(4);

    return 0;
}
