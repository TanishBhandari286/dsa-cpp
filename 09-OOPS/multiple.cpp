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
class Vehicles2{
    public:
    
    string color = "violet";
    int noOfWheels= 2 ;
    string type =  "scooter";

    void print(){
        cout<<color<<"\t"<<noOfWheels<<"\t"<<type<<"\t";
    }


};

class Toyota : public Vehicles , public Vehicles2{


};



int main(){
    Toyota supra ;
    supra.Vehicles2::print();// scope resolution variable
    Vehicles supra2;
    supra2.print();

    return 0;
}