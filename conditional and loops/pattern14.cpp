#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row = 1;
    char value = 'A';


    while(row<=n){

        int col =1;
       

        while(col<=row){
             char ch = ('A'+row+col-2);
            cout<<value;
            value = value+1;
            col = col+1;
        }
        cout<<endl;
        row = row +1;
    }
}