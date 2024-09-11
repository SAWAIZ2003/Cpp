#include<iostream>
#include<math.h>
using namespace std;

// void dummy(int n)

//     n++;
//     cout<<"n is"<< n <<endl;
// }

// int main(){

//     int n;
//     cin>>n;

//     dummy(n);

//     cout<<"number n is"<<" "<<n <<endl;

//     return 0;
// 

int update(int a){
    a-= 5;
    
    return a;
}

int main(){
    int a = 10;
     update(a);
    cout<<a<<endl;
}


