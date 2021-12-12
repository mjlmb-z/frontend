#include<iostream>
using namespace std;
class vehicle{
    public: 
    int no_of_seats, no_of_wheels;
/*    void getdata(){
        cout<<"Enter the no of seats available in the vehicle:\t";
        cin>>no_of_seats;
        cout<<"\nEnter no of wheels of the vehicle:\t";
        cin>>no_of_wheels;
    }
*/
    void bdata(){
        cout<<"\nVehicle:\tMotorcycle/Bike/Scooty/Scooter"<<endl;
        cout<<"Seats available ideally:\t2\nMax Speed:\t80km/h~180km/h";   
    }
    void cdata(){
        cout<<"\nVehicle:\tCar"<<endl;
        cout<<"Seats available ideally:\t4~5\nMax Speed:\t~150km/h";   
    }
};

int main(){
    int ans;
    char a='y';
    vehicle car, bike; 
    do{
        cout<<"\nCheck details for:\n1)Bike\t2)Car\n>>";
        cin>>ans;
        switch (ans)
        {
        case 1:
        {
            bike.bdata();
            break;
        }
        case 2:{
            car.cdata();
            break;  
        }      
        
        default:{
                cout<<"SELECT THE APPROPRIATE OPTION.";
                break;
            }
        }
        cout<<"\nSelect again?(y/n):\t";
        cin>>a;

    } while(a=='y'||a=='Y');
    return 0;
}