#include<iostream>
#include<map>

using namespace std;
int main() {
    map<int , string> m;
    m[1]= "sawaiz";
    m[2]= " khan";
    m[13]= " great";
    
    for(auto i : m){
        cout<<i.first<<i.second<<endl;
    }

cout<<"finding 13 " << m.count(13)<<endl;
}