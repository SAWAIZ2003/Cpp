#include<iostream>
#include<array>

using namespace std;

int main(){

    int basic[3]  ={1,2,3};

    array<int , 4> c = {1,2,3,4}; // stl array

    int size = c.size(); // for finding size of stl array

    for(int i = 0; i <size ; i++){
        cout<<c[i]<<endl;
    }

 cout<<"element at 2nd Index :" <<c.at(3) << endl;
 //for accesing element

 cout<<"empty or not " << c.empty() << endl;
 //give boolean value 0 as elements are there ia array

 cout<<" 1st element "<< c.front() << endl;

  cout<<" last element "<< c.back() << endl;
 
}