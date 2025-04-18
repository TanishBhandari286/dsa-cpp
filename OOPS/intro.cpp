#include <iostream>
using namespace std;

class hitman{
  
    public:
    // default constructor
      hitman(){
        cout<<"default constructor called"<<endl;
    }
    // parameterized constructor
 
    hitman(int health){

    }
    
    // default instances of an class are private


    int noofkills = 57;
    int health = 23;

    // access modifier { setter , getter }
    
    char getch(){
        return ch;
    }
    void gurnoor(char h){
        ch = h;
    }
    private:
     char ch = 'a';

};


int main(){

    hitman agent47;
    cout<<"health of agent 47 is "<< agent47.health<<endl;
    cout<<"no of kills = "<<agent47.noofkills<<endl;
    cout<<"which weapons i have :  "<<agent47.getch()<<endl;
    agent47.gurnoor('d');

// cout<<"which weapons i have :  "<<agent47.getch()<<endl;
 cout<<"which weapons i have :  "<<agent47.getch()<<endl;
 int kills = 7;
 int health = 100;



    return 0;
   
}