#include<iostream>
#include<vector>
using namespace std;
class Hitman{
    public:
    Hitman(){
        cout<<"un parameterized constructor called"<<endl;

    }
    Hitman(int health ){
        cout<<"1 parameter constructor called"<<endl;
        this -> health = health;
    }
        Hitman(int health , int noOfKills){
        cout<<"2 parameter constructor called"<<endl;
         this -> health = health;
          this -> noOfKills = noOfKills;
    }

    static int TimetoKill;
    

    //making ur own copy constructor
    Hitman(Hitman& copy){
        cout<<"ur own implementation of copy constructor was called "<<endl;
        this -> health = copy.health;
        this -> noOfKills = copy.noOfKills;
     
    }



    void print(){
        cout<<"health is "<<this -> health;
        cout<<"no of kills is "<<this -> noOfKills;

    }


    int noOfKills;
  
    // to access private vars we use access modifiers [getters , setters]
 int health;


 char getch(){
    return ch;
 }
   void setch(char ch){
    this -> ch = ch;

   }
   ~Hitman(){
    cout<<"desstructor don called"<<endl;
   }



    private :
   
 char ch;
};


int main(){

    Hitman agent47;
    // cout<<sizeof(Hitman);// 4+4 +1 =  9;--> is this correct?
    // greedy alignment and padding bits
    // cout<<"value of ch is "<<agent47.getch()<<endl;// garbage value
    agent47.setch('D');
    // cout<<"value of ch is "<<agent47.getch()<<endl; // D
    int health1 = 13;
    int noofkills1 = 90;
      int health2 = 13;
    int noofkills2 = 90;

//  Hitman agent50;
//      Hitman agent48(health2);
//       Hitman agent49(health1 , noofkills1);
//       Hitman agent51(agent49);
//       agent51.print();

      // static declaration of objects
      Hitman tanish;



      // dynamic declaration of objects

      Hitman *gurnoor = new Hitman();

      delete gurnoor;
 
      
    
    return 0;
}