//vector is a dynamic array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;
    
    vector<int> a(5,1);
     cout<<" print a " <<endl;
     
  for(int i : a){
    cout<<i<<" ";
  }cout<<endl;

    cout<< "Size->" << v.capacity() <<endl;

    v.push_back(1);//pushing elements in vector
    cout<< "Size->" << v.capacity() <<endl;

      v.push_back(2);
    cout<< "Size->" << v.capacity() <<endl;

      v.push_back(3);
    cout<< "Size->" << v.capacity() <<endl;

    cout<<"capacity is "<< v.capacity() << endl;
    cout<<"size is "<< v.size() << endl;
  
  cout<<" before pop " <<endl;
  for(int i : v){
    cout<<i<<" ";
  }cout<<endl;

 v.pop_back();

cout<<"after pop"<<endl;
for(int i : v){
    cout<<i<<" ";
}  


     
}