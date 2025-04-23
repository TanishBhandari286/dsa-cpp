#include<iostream>
#include<climits>
using namespace std;

class Human {
    public:
    int height = 180;
    string eyecolor = "brown";
    int age = 90;
    string haircolor = "blonde";
    char getGender(){
        return gender;
    }
    char updated = gender;
    private:
    char gender;
    void setGender(char gender){
        this -> gender = gender;
    }
    
};

class gurnoor : public Human{


};


int main(){
gurnoor g1;
cerr<<"height of gurnoor is "<<g1.height<<endl;

cerr<<"gender of gurnoor is "<<g1.updated<<endl;


    return 0;
}