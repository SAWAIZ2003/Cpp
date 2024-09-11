// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;

//     while(row<=n){

//         int col = 1;
//         int value = row;

//         while(col<=row){
//             cout<<value;
//             value = value +1;
//             col = col+1;
//         }
//         cout<<endl;
//         row = row+1;
//     }

// }

// method 2

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;

    while(row<=n){

        int col = row;
        
         while(col<2*row){
            cout<<col<< " ";
            
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }

}