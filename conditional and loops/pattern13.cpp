// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int row = 1;
//     char value = 'A';


//     while(row<=n){

//         int col =1;
       

//         while(col<=row){
//              char ch = ('A'+row-1);
//             cout<<value;
//             value = value+1;
//             col = col+1;
//         }
//         cout<<endl;
//         row = row +1;
//     }
// }
/*yasir logic*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    char value='A';
    for (int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<value;
            value=value+1;
        }
        cout<<endl;
    }
return 0;
}


