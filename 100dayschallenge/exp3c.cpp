#include<iostream>
using namespace std;

class base {
    public: int x;
    
    protected: int y;
    
    private: int z;
};
  
class derived: public base
{
};
  
int main()
{
    derived b;
    cout << b.x << endl;
    cout << b.y << endl; // y is protected, so it will give visibility error
    cout << b.z << endl;// z is not accessible from the derived class so it will give visibility error
};