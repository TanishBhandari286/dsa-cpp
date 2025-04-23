#include<iostream>
#include<vector>
using namespace std;

class Subway_surfers{



    // by default everything created in class is private
public:
    int dist = 90;
    int coins;
    // padding and greedy alignment

// access modifiers [getter , setter]
int getHealth(){
    return health;

}
void setHealth(int health){
    this -> health = health;
   // this ke andar jo value hai woh 123 hai
   cout<<"value of this is : "<<this<<endl;


}

    private:
    int health  = 100; // 123

};

int main(){
    // static object declaration
    Subway_surfers s;

    // dynamic object declaration

    Subway_surfers *s2 = new Subway_surfers();
    


    cout<<"size of s object is "<<sizeof(s)<<endl;
    cout<<"dist travelled is "<<s.dist<<endl;
      cout<<"health is "<<s.getHealth()<<endl;
      s.setHealth(200);
      cout<<"health is "<<s.getHealth()<<endl;

    return 0;
}