#include<iostream>
using namespace std;

int& func(int a){
    int num = a;   
    int& ans = num;  // bad practice
    return ans;
}


int* fun(int n){
    int* ptr = &n;
    return ptr;
}

void update2( int& n){ // concept is pass by reference
    n++;
}

void update( int n){ // concept is pass by value
    n++;
}

int main(){

    // int i = 5;

    // int& j = i;

    // cout<< i << endl;
    // i++;
    // cout<< i << endl;
    // j++;
    // cout<< i << endl;
    int n = 5;

    cout<< " before " << n << endl;
    update2(n);
    cout << " after" << n << endl;

   cout<< func(n) << endl;
//    cout<< fun(n);

    return 0;

}