#include<iostream>
using namespace std;

int factorial(int n){
    
     cout << " source " << n << endl;
    //base case
    if(n == 1)
    return 1;

    // int small = factorial(n-1);
    // int big = n * small;

    // return big;

    return n*factorial(n-1);
}

int main() {

    int n;
    cin >> n;

    int ans = factorial(n);

    cout<< ans << endl;

    return 0;
}