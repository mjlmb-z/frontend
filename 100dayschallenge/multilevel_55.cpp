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

class employee: public person{
    protected: char d[25]; //designation
    public: float hra, da,cca, basic;
    void getdata2(){
        cout<<"Enter your designation:\t";
        cin>>d;
        
    }
    void putdata2(){
        cout<<
    }
};

class salary: public person{ 
    public:
    float total_salary;
    void display(){
        cout<<"Your total salary is:\t"<<total_salary;
    }
};

    int main(){
        person o;
        o.getdata1();
        o.putdata1();
        o.getdata2();
        o.display();

        return 0;
    }
