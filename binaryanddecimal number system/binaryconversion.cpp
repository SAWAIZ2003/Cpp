#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin >>n;

    int ans = 1;
    int i = 0;
    while(n!=0){

        int bit = n&1; // to get bit

        ans = (bit * pow(10,i))+ans;

        n = n>>1;
        i++;
    }

    cout<<"ANswe is"<<ans<<endl;
}

