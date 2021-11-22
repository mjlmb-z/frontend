/*Write a C++ program to find the size of objects when virtual functions are used.*/
#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Size of the object is: 2units and 1 units.\n\n\n\n" << endl;
    }
};

int main() {
    Derived derived1;
    Base* base1 = &derived1;
    base1->print();

    return 0;
}