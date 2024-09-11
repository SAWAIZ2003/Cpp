#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

  //creation of map
  unordered_map<string,int> mp;

  //insertion

  //1 way
  pair<string , int> p =  make_pair("t",1);
  mp.insert(p);

  //2nd way
   pair<string , int> pair2("r",1);
   mp.insert(pair2);


   //3rd way
   mp["e"] = 2;

   //search
   cout<< mp["e"]<< endl;
   //or
     cout<< mp.at("e")<< endl;
 
//   cout<< mp["k"]<< endl;  //will give zero
   //or
  
    cout<< mp["k"]<< endl; 
    cout<< mp.at("k")<< endl;


    //size
    cout<<mp.size() << endl;

    //to check presence
    cout<<mp.count("boobs") << endl;
    //above function count will give 0 if string is not here 


    //erase
    mp.erase("r");
     cout<<mp.size() << endl;

     //iterator
     unordered_map<string,int> :: iterator it = mp.begin();

     while(it != mp.end()){
        cout<< it->first << " "<< it->second <<endl;     
        }




  return 0;

}