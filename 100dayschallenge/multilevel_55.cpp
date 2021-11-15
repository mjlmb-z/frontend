#include<iostream>
using namespace std;

class person{
    public: char name[100];
    int age;
    void getdata1(){
        cout<<"Enter your name:\t";
        cin>>name;
        cout<<"Enter your age:\t";
        cin>>age;
    }
    void putdata1(){
        cout<<"\n\nThe name entered:\t"<<name;
        cout<<"\nThe age entered:\t"<<age;
    }
};    

    int main(){
        person o;
        o.getdata1();
        o.putdata1();

        return 0;
    }
