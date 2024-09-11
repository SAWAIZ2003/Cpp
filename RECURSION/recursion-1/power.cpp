#include<iostream>
using namespace std;

int power( int n){

    if(n==0){
        return 1;
    }

    //recursive relation

    // int smallerproblem = n-1;
    // int biggerproblem = 2*smallerproblem;
    // return biggerproblem;

    return 2*power(n-1);
}

int main() {

    int n;
    cin>>n;

    int ans = power(n);

    cout<< ans << endl;
}