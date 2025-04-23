#include<iostream>
#include<vector>
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
class Toyota: public Vehicles{


};
class corolla: public Toyota{


};


int main(){

    Toyota car;
    car.print();

    return 0;
}