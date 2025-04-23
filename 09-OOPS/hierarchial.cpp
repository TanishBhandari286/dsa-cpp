#include<iostream>
#include<climits>
using namespace std;

class Vehicles{
    public:
    
    string color = "red";
    int noOfWheels= 4 ;
    string type =  "supercar";

    void print(){
        cout<<color<<"\t"<<noOfWheels<<"\t"<<type<<"\t";
    }


};

