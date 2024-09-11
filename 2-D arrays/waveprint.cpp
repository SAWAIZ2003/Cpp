#include <iostream>
#include <vector>

using namespace std;

void wavePrint(int arr[][4] , int row , int col){
   
   vector<int> ans;
    for(int col = 0; col<4 ; col++){

        if(col&1){ //odd number condition 
            // bottom to top
            for(int row = 3 ; row>=0 ; row--){
                // cout << arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }

        }
        else
        {
              //top to bottom
              for(int row = 0; row<4 ; row++){
                // cout<<arr[row][col] << " ";
                  ans.push_back(arr[row][col]);
              }   
        }
    }
   
}



int main() {
    
    int arr[4][4];
      //taking output -> row wise
    cout<<"enter the elemnts" << endl;
    for (int row = 0; row<4 ; row++){
         for(int col = 0; col<4 ; col++){
            cin >> arr[row][col];
         }
    }

    wavePrint(arr,4,4);

    return 0;
}
