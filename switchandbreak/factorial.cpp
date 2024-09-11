#include<iostream>
#include<math.h>
using namespace std;

//for finding factorial
int factorial(int n){

    int fact = 1;
    for(int i =1;i<=n; i++){  
        fact = fact*i;
    }
    return fact;
}

//for finding nCr
int nCr(int n, int r){
 int num = factorial(n);
 int denom = factorial(r)*factorial(n-r);

 int ans = num/denom;

 return ans;

}

int main() {

int n ,r;
cin>>n>>r;

cout<<"answer is :"<<nCr(n,r)<<endl;


}