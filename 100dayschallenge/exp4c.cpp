/*Write a C++ program to demonstrate polymorphism: 
Create class shape with two data members viz. dim1, dim2 and two virtual functions  getdata() and disp_area().   
Create two derived classes triangle and rectangle.  Override two virtual functions in both the classes.  
Display menu and find area of the object (either rectangle or triangle).
*/
#include<iostream>
using namespace std;

class shape{
    public: 
    float static area,dim1,dim2;

    virtual void getdata(){
        cout<<"Enter the two dimensions:\t";
        cin>>dim1>>dim2;
        
    }

    void disp_area(){
        cout<<"\nThe area is:\t"<<area<<" sq units.";
    }
};
float shape::area=0.0;
float shape::dim1;
float shape::dim2;

class triangle:public shape{
    public:
    void cal(){
        area=dim1*dim2*(0.5);
    }
};

class rectangle:public shape{
    public:

    void c(){
        area=dim1*dim2;
    }
};

int main(){
    int ch;
    shape *sh;
    triangle t;
    rectangle r;
    sh=&t;
    sh=&r;
    sh= new triangle();
    sh= new rectangle();
    cout<<"***MENU***\nFind the area for-\n1)Triangle\t\t2)Rectangle\n>>"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:{
                sh->getdata();
                t.cal();
                sh->disp_area();
                break;    
            }
            case 2:{
                sh->getdata();
                r.c();
                sh->disp_area();
                break; 
                break;    
            }
                
            default:
                cout<<"\nPLEASE ENTER THE VALID OPTION.\n";
                break;
        }
    return 0;
}

