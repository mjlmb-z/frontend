#include<iostream>
using namespace std;

class toll{
    public: 
    void lane(){
        int lane;
        cout<<"Enter the lane(1-5):\t";
        cin>>lane;
    }
    
    void type(){
        int i;
        cout<<"\nEnter type of car (0 for paying, 1 for non-paying) :\t";
        cin>>i;
    }
};

int main(){
    toll o;
    o.lane();
    o.type();
}