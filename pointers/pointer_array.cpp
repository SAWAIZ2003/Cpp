#include<iostream>
using namespace std;

int main() {
 
// int arr[10] = {23,122,41,67};



// int temp[10] = {1,2};

// cout<<sizeof(temp)<<endl;
// cout<<sizeof(*temp)<<endl;
// cout<<sizeof(&temp)<<endl;


// int *ptr = &temp[0]; // ans 40
// cout<<sizeof(ptr) << endl; // ans 8
// cout << sizeof(*ptr)<<endl; // ans 4
// cout<<sizeof(&ptr) << endl; // ans 8

// return 0;





// int a[20] = {1,2,3,5};

// cout<< &a[0] << endl;
// // cout<<&a << endl;
// // cout << a << endl;


// int  *p = &a[0];
//  cout<< p<< endl;
// // cout << *p<< endl;
// cout << &p << endl;


// return 0;


int arr[10];

int *ptr = &arr[0];
cout << ptr << endl;
ptr = ptr + 1;
cout << ptr << endl;


return 0;
}