#include<bits/stdc++.h>
using namespace std;

void explainPair() {

    pair<int , int>p = {1,3};

    cout << p.first << " " << p.second<<"  ";

    pair<int , pair<int , int>>k = {1,{3,4}};
    
    cout << k.first <<" " ;

    pair<int , int> arr[] = {{1,2}, {2,5}, {5,1}};

    cout << arr[1].second;
 

}


int main() {

    explainPair();
    return 0;
}

