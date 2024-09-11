#include<iostream>
using namespace std;

void print(int arr[] , int n){

    cout <<" size of array " << n << endl;

    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    } cout << endl;

}

bool LinearSearch(int arr[] , int size , int key){
     
     print(arr , size);
    //base case
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }


    else{
        bool remainingPart = LinearSearch(arr+1, size-1, key);
        return remainingPart;
    }

}

int main() {
    int arr[5] = {3,5,1,6,2};
    int size = 5;
    int key = 8;

    bool ans = LinearSearch(arr , size , key);

    if(ans){
        cout << " elemnet is found" << endl;
    }
    else{
        cout<<" not found " << endl;
    }

    return 0;

}