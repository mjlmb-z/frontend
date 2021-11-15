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
    public: float hra, da,cca, basic, z=basic+cca+da+hra;
    void getdata2(){
        cout<<"\nEnter your designation:\t";
        cin>>d;
        cout<<"\nEnter your basic:\t";
        cin>>basic;
        cout<<"\nEnter you HRA:\t";
        cin>>hra;
        cout<<"\nEnter your CCA:\t";
        cin>>cca;
        cout<<"\nEnter your DA:\t";
        cin>>da;
        
        
    }
    void putdata2(){
        cout<<"\n\nBasic:\t"<<basic<<"\tDA:\t"<<da;
        cout<<"\nHRA:\t"<<hra<<"\tCCA:\t"<<cca;
    }
};

class salary: public employee{ 
    public:
    float total_salary;
    void display(){
        cout<<"\n\n\nYour total salary is:\t"<<basic+cca+hra+da;
    }
};

    int main(){
        salary o;
        o.getdata1();
        o.getdata2();
        o.putdata1();
        o.putdata2();
        o.display();

        return 0;
    }
