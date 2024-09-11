#include<iostream>
#include<climits>
using namespace std;




//searching in 2d array
bool isPresent(int arr[][3],int target , int row , int col){
     for (int row = 0; row<3 ; row++){
         for(int col = 0; col<4 ; col++){
            if(arr[row][col]==target){
                return 1;
            }
         }
    }
    return 0;
}

//row wise sum
void printRum(int arr[][3] , int row , int col){
    cout << "printing row sum ->" << endl;
       for (int row = 0; row<3 ; row++){
        int sum = 0;
         for(int col = 0; col<4 ; col++){
            sum += arr[row][col];
         }
         cout << sum << " ";
    }
}

//col wise sum
void printCum(int arr[][3] , int row , int col){
    cout << "printing col sum ->" << endl;
       for (int col = 0; col<3 ; col++){
        int sum = 0;
         for(int row = 0; row<4 ; row++){
            sum += arr[row][col];
         }
         cout << sum << " ";
    }
}

int LargestRowSum(int arr[][3] , int row , int col){
    int maxi = INT_MAX;
    int rowIndex = row;
        for (int row = 0; row<3 ; row++){
        int sum = 0;
         for(int col = 0; col<4 ; col++){
            sum += arr[row][col];
         }
       if(sum > maxi){
        maxi = sum;
        rowIndex = row;
       }
    }
    cout<<"the max sum is " << maxi << endl;
    return row;
}

int main()  {

    //create 2d array
    int arr[3][3];
   
//    //taking output -> row wise
    cout<<"enter the elemnts" << endl;
    for (int row = 0; row<3 ; row++){
         for(int col = 0; col<4 ; col++){
            cin >> arr[row][col];
         }
    }

    // taking input column wise
    //  for (int col = 0; col<4 ; col++){
    //      for(int row = 0; row<3 ; row++){
    //         cin >> arr[row][col];
    //      }
    // }

     for (int row = 0; row<3 ; row++){
         for(int col = 0; col<3; col++){
            cout << arr[row][col] <<" ";
         }
         cout << endl;
    }
    
    cout<<"enter the element to be serached" << endl;
    int target;
    cin >> target;

    if(isPresent(arr,target,3,4)){
        cout<<"element found" << endl;
    }
    else cout<<"not found" << endl;
   
   printRum(arr , 3 , 3);
    cout << endl;

   printCum(arr , 3 , 3); cout << endl;

   LargestRowSum(arr , 3 , 3);

    return 0;

}