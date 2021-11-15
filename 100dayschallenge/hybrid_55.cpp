//55 IT
#include<iostream>
using namespace std;

class student{
    public: int r; //roll no
    void gdata(){
        cout<<"Enter your roll no:\t";
        cin>>r;
    }
    void pdata(){
        cout<<"\n\n-------"<<endl;
        cout<<"Roll no:\t"<<r;
    }

};

class test: public student{
    public: int m,p,marks; //math,phy
    void mp(){
        cout<<"\nEnter your math marks:\t";
        cin>>m;
        cout<<"\nEnter your physics maths:\t";
        cin>>p;
    }
    void disp(){
        cout<<"\nMarks scored in math and physics:\t"<<m<<","<<p;
    }
};

class sports{
    public: int score;
    void get(){
        cout<<"Enter the score scored in sports:\t";
        cin>>score;
    }
    void display(){
        cout<<"\nScore in sports:\t"<<score;
    }

};

class results: public test,public sports{
    public: int total;
    void putdata(){
        total=m+p+score;
        cout<<"\nYour total score is:\t"<<total;
    }

};

int main(){
    results o;
    o.gdata();
    o.mp();
    o.get();
    o.pdata();
    o.disp();
    o.display();
    o.putdata();

    return 0;


}