#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking" << endl;
    }
};

class Dog: public Animal {

};

class GermanShepherd: public Dog{

};

int main() {

  GermanShepherd d ;
  d.speak();
  cout<< d.age << endl;

};