#include<bits/stdc++.h>
using namespace std;

void explainVector() {

    vector<int> v; // creates empty array{}

    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    
    vector<pair<int , int >>vec;   

    vec.push_back({1,2});
    v.emplace_back(1,2);

    vector<int>p (5,100); // conatin 5 100 in array

    vector<int> a(5);  // container contains garbage values 5 times
    vector<int> v1(5,20); // 5 times 20 in arry
    vector<int> v2(v1);  // v2 will be copy of v1
   

   //for iteration purpose
   vector<int>::iterator it = v.begin();
   it++;

   cout << *(it) << " ";

   it = it+2;
   cout<<*(it) << " ";

   vector<int>:: iterator it = v.end();
//    vector<int>:: iterator it = v.rend();
//    vector<int>:: iterator it = v.rbegin();

//printing vectors
for(vector<int>::iterator it = v.begin(); it != v.end() ; it++){
    cout <<*(it) << " ";
}

 for(auto it = v.begin(); it != v.end() ; it++){
    cout <<*(it) << " ";
}

for ( auto it : v){
    cout << it << " ";
}

//{1,2,3,4,5}
v.erase(v.begin()+1); // {1,3,4,5}

//{10,20,12,23,35}
v.erase(v.begin()+2, v.begin()+4); //{10,20,35}

//insert function
vector<int>v(2,100); //{100 , 100}
v.insert(v.begin(), 300); //{300 , 100 , 100}
v.insert(v.begin()+1,2,10); //{300 , 10 , 10 , 100 , 100}

cout << v.size();

v.pop_back();

v1.swap(v2);

v.clear();

cout << v.empty();

}

int main() {
  


   explainVector();
    return 0;
}