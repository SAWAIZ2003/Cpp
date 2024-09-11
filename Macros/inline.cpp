#include<iostream>
using namespace std;

// void func(int a , int b){

//     a++;
//     b++;
//     cout << a << b << endl;

// }

 inline int getMax( int& a , int& b){
     return   (a>b)? a : b;
}

int main() {

    int a = 1 , b = 2;
    int ans = 0;
    // func(a,b);

    ans = getMax(a,b);
     cout << ans << endl;
    a+=3;
    b+=1;

     ans = getMax(a,b); 
      cout<< ans << endl;

    return 0;
}