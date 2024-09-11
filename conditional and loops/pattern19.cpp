#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int row = 1;
    

    while(row<=n){

        //print *1st triangle
        int col = 1;
        
        while(col<=n-row+1){
            cout<<col;
            col = col+1;
        }

        // // print second triangle
          int start = 2;
          while (start <=2 * row - 1) {
           cout << "*";
            start = start + 1;
               }
         
        //  //print 3rd triangle
             int j = n - row + 1;
            while (j >= 1) {
            cout << j << "";
             j = j - 1;
    }



         cout<<endl;
         row= row+1;
         
    }
}   