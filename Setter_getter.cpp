#include<bits/stdc++.h>
using namespace std;

class hero{
  private:
  
  int health;
  char level;
   public:
  int gethealth(){
    return health;
  }
  
  char getlevel(){
    return level;
  }
  
  void sethealth(int h){
    health=h;
}

void  setlevel(char ch){
   level=ch;
} 
  
};
  
  int main(){
    hero ramesh;
     ramesh.sethealth(50);
     ramesh.setlevel('A');
    
    cout<<ramesh.gethealth()<<endl;
    cout<<ramesh.getlevel()<<endl;
    
  }
