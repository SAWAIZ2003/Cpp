#include<iostream>
#include<math.h>
using namespace std;

//1-> prime no
//0->not prime

bool isPrime(int n){

    for(int i = 2; i<n;i++){
         //divede hogaya , not prime
        if(n%i==0){
            return 0;
        }

    }
  return 1;

}


int main(){

    int n;
    cin>>n;

    if(isPrime(n)){
        cout<<"is a prime no"<<endl;
    }

   else{
    cout<<"not a prime"<<endl;
   }

return 0;
}