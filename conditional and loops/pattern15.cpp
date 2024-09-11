#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row = 1;
    char value = 'D';


    while(row<=n){

        int col =1;
      // char value = 'D';

        while(col<=row){
             char ch = ('D'-row+col);
             cout<<ch;
             value = value+1;
             col = col+1;
        }
        cout<<endl;
        row = row +1;
    }
}