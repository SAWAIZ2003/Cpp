#include<iostream>
#include<string.h>
using namespace std;

class Hero {

     //properties
     private:
    int health;

    public:
    char*name;
    char level;
    static int boobs;

    Hero(){
        cout<< " constructor called " << endl;
    }

    //parametersised constructor
    Hero(int health){
    cout << "this ->" << this << endl;
       this -> health = health;
    }


    Hero(int health , char level){
        cout << "this ->" << this << endl;
        cout<<"this ->" << this->level<< endl;
       this -> level = level;
       this -> health = health;
    }
    
    //copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout <<"copy constructor called "<< endl;
        this->health=temp.level;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
         cout <<" [name:" << this->name<< " ,";
        cout <<"health" << this->health<< " ,";
        cout << "level:" << this ->level << "]";
    }

    int getHealth(){
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h){
         health = h;
     }

     void setLevel(char ch){
        level = ch;
     }
     
     void setName(char name[]){
        strcpy(this->name, name);
     }
    
    static int random(){
       return boobs;
    }

    //destructor
    ~Hero(){
       cout << "destructor " <<endl;
    }
};

int Hero::boobs = 5; //::->scope resolution operator

int main(){
    // cout<<Hero::boobs<<endl;
  
  cout<< Hero::random()<<endl;

    }

// //static
// Hero a;

// //dynamic
// Hero *b = new Hero();
// delete b;

// return 0;
// }
// Hero hero1;
// hero1.setHealth(12);
// hero1.setLevel('D');
// char name[9] = "sikandar";
// hero1.setName(name);

// // hero1.print();

// //default copy constructor

// Hero hero2(hero1);
// // hero2.print();

// hero1.name[0]='k';
// hero1.print();
// hero2.print();

// hero1 = hero2;

// hero1.print();
// hero2.print();

//    Hero suresh(70,'c');
//    suresh.print();

//    //copy constructor
//    Hero porn(suresh);  

//    porn.print(); 








    // //object created statically
    // Hero ramesh(10);
    // ramesh.print();
    // // cout <<" address of ramesh " << &ramesh << endl;  
    // // ramesh.getHealth(); 

    // //dynamically
    // Hero *h = new Hero(11);
    // h -> print();

    // Hero temp(22, 'B');
    // temp.print();
    






















    // //static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout<<"level is" << a.level << endl;
    // cout <<"health "<< a.getHealth() <<endl;
    
    // //dynamically

    // Hero *h = new Hero;
    
    // h -> setLevel('A');
    // h -> setHealth(70);
    // cout<<"level is" << (*h).level << endl;
    // cout <<"health "<< (*h).getHealth() <<endl;
       
    // cout << " other way of writing " << endl;

    // cout<<"level is" << h->level << endl;
    // cout <<"health "<< h->getHealth() <<endl;

    //creation of object
    // Hero h1;
    // cout <<"h1 health is" << h1.getHealth() << endl;
    // h1.setHealth(70);
    // // h1.health = 70;
    // h1.level = 'A';

    // cout <<"size : " << sizeof(h1) << endl;
    // cout << "health is : " <<  h1.getHealth() << endl;
    // cout <<"level is: " << h1.level<< endl;

    // return 0;

// }
