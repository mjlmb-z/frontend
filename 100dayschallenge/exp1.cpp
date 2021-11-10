#include<iostream>
#include<conio.h>
using namespace std;
class toll
{
    static int no_of_cars;
    static float amount;
    public :
        toll()
        {
            cout<<"\nA car has passed....";
            no_of_cars++;

        }
        void calculate_amt(int ty)
        {
            if(ty==0)
            {
                amount=amount+40;

            }
        }
        void display()
        {
            cout<<"\n\nTotal no.of cars:\t"<<no_of_cars;
            cout<<"\nTotal amount collected=\t Rs. "<<amount;
        }
};
int toll::no_of_cars=0;
float toll::amount=0.0;
int main()
{
    int lane_no,type;
    int lane[5]={0,0,0,0,0};
    char ch='y';
    do{
        do
        {
            cout<<"\nEnter Lane number(1-5):\t";
            cin>>lane_no;
        }
        while(lane_no<1 || lane_no>5);
    
        do
        {
            cout<<"\nEnter type of car (0 for paying and 1 for non-paying):\t";
            cin>>type;
        }
        while(type<0 || type>1);
    
        toll t;
        t.calculate_amt(type);
        t.display();
        switch(lane_no)
        {
            case 1:lane[0]++;
            break;
    
            case 2:lane[1]++;
            break;
    
            case 3:lane[2]++;
            break;
    
            case 4:lane[3]++;
            break;
    
            case 5:lane[4]++;
            break;
        }
        cout<<"\nAny more cars(y/n)?:\t";
        cin>>ch;
    }
    while(ch=='y' || ch=='Y');
    for(int k=1;k<6;k++)
    {
        cout<<"\n\nTotal cars passed through lane "<<k<<":\t"<<lane[k-1];
    }
    return 0;
}