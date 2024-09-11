#include<iostream>
using namespace std;

class Student {

    public:

      string name;
      int weight;
      int height;

      private:
      int age;
   
   public:

   int getAge() {
    return age;
   }
    
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: private Student{ //inheritance
     public:
     string color;

     void sleep(){
        cout <<"alpha male" << endl;
     }

     int getHeight(){
        return this->height;
     }
};

int main() {

    Male m;
    cout<<m.getHeight();
 
    // Male object1;
    // cout<< object1.age << endl;
    // cout<< object1.height << endl;
    // object1.setWeight(200);
    // cout<< object1.weight << endl;
    // object1.sleep();
      
    return 0;
}