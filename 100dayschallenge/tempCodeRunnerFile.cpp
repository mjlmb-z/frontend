#include<iostream>
using namespace std;

class Train{
    public:
    static int fc,sc,tc,fc1,sc1,tc1;
    void static trainno(){
        int train_no=19467;
    }
    void available_seats(){
        fc;
    }
    
    

};

class reservation: public Train{
    public:
    int classtype;
    void book(){
        cout<<"\nType of class(1/2/3):\t";
        cin>>classtype;
        switch (classtype)
        {
            case 1:{
                    if(fc>0){
                        fc--;
                        fc1++;
                    }
                    else{
                        cout<<"\nSeats are not available.";
                    }
                    break;
                }
            case 2:{
                    if(sc>0){
                        sc--;
                        sc1++;
                    }
                    else{
                        cout<<"\nSeats are not available.";
                    }
                    break;
                }
            case 3:{
                    if(tc>0){
                        tc--;
                        tc1++;
                    }
                    else{
                        cout<<"\nSeats are not available.";
                    }
                    break;
                }
            
            default: cout<<"\nPLEASE ENTER THE VALID OPTION!";
                break;
        }
    }
    void cancelled(){
        pubic: int cs;//cancelled seats
        cout<<"\nType of class of the ticket (1/2/3):\t";
        cin>>classtype;
        switch (classtype)
        {
            case 1:{
                    cout<<"\nNo of seats to be cancelled:\t";
                    cin>>cs;
                    fc+=cs;
                    fc1-=cs;
                    break;
                }
            case 2:{
                    cout<<"\nNo of seats to be cancelled:\t";
                    cin>>cs;
                    sc+=cs;
                    sc1-=cs;
                    break;
                }
            case 3:{
                    cout<<"\nNo of seats to be cancelled:\t";
                    cin>>cs;
                    tc+=cs;
                    tc1-=cs;
                    break;
                }
            
            default: cout<<"\nPLEASE ENTER THE VALID OPTION!";
                break;
        }

    }
    void display_status(){
        cout<<"\n\nAvailable Seats\nTrain No:\tFirst Class:\tSecond Class:\tThird Class:";
        cout<<"\n"<<trainno<<"\t"<<fc<<"\t"<<sc<<"\t"<<tc;

        cout<<"\n\nBooked Seats\nTrain No:\tFirst Class:\tSecond Class:\tThird Class:";
        cout<<"\n"<<trainno<<"\t"<<fc1<<"\t"<<sc1<<"\t"<<tc1;

    }
};
int Train::fc=200;
int Train::sc=200;
int Train::tc=200;
int Train::fc1=0;
int Train::sc1=0;
int Train::tc1=0;

int main(){
    reservation o;
    int choice;
    char ch='y';
    
    do{
        cout<<"\n***Menu***\n";
        cout<<"1. Booking\t2. Cancellation\t3. Display Status\nEnter your choice :\t";
        cin>>choice;
        switch (choice)
        {
        case 1: o.book();
            break;
        case 2: o.cancelled();
            break;
        case 3: o.display_status();
            break;
        
        default: cout<<"\nENTER THE VALID OPTION.";
            break;
        }
        cout<<"\nChoose again?(y/n):\t";
        cin>>ch;

    }while(ch=='y'||ch=='Y');
    return 0;

}