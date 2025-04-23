#include<iostream>
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

class Toyota : public Vehicles{

};




int main(){

    Toyota supra;
    supra.print();


    return 0;
}