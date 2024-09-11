#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);

    cout<<"finding 6 ->"<<binary_search(v.begin(),v.end(),6)<<endl;
   cout<<"lower bound ->"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;

}