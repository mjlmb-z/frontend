/*Write a C++ program to demonstrate multilevel inheritance. 
(Use problem statement of class person, employee and salary):*/

#include<iostream>
using namespace std;

class person{
    public:
    char name[100];
    int age;
    void getdata(){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your age:";
        cin>>age;
    }
    void putdata(){
        cout<<"\n\n***\nYour name:\t"<<name;
        cout<<"\nAge:\t"<<age;
    }
};

class employee: public person{
    protected: char d[20]; //designation
    public:
    int static basic,da, hra,cca;
    void gdata(){
        cout<<"\nEnter your designation:\t";
        cin>>d;
        cout<<"\nEnter your basic:\tRs. ";
        cin>>basic;
        cout<<"\nEnter your HRA:\tRs. ";
        cin>>hra;
        cout<<"\nEnter your DA:\tRs. ";
        cin>>da;
        cout<<"\nEnter your CCA:\tRs. ";
        cin>>cca;

    }
    void pdata(){
        cout<<"\nDesignation:\t"<<d;
        cout<<"\nBasic:"<<basic<<"\t\tHRA:"<<hra<<"\nDA:"<<da<<"\t\tCCA:"<<cca;
    }
};

int employee::basic;
int employee::da;
int employee::hra;
int employee::cca;

class salary: public employee{
    public: 
    int total;
    void cal(){
        total=basic+hra+da+cca;
    }
    void ts(){
        //total salary
        cout<<"\nThe total salary:\tRs. "<<total;
    }
};

int main(){
    person o;
    employee e;
    salary s;
    o.getdata();
    e.gdata();
    o.putdata();
    e.pdata();
    s.cal();
    s.ts();
    return 0;
}