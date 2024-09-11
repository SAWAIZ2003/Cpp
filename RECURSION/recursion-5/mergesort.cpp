#include<iostream>
using namespace std;


void merge( int *arr, int s , int e ){

     int mid = e+(e-s)/2;

     int l1 = mid-s + 1;
     int l2 = e - mid;

     int *first = new int[l1];
     int *second = new int[l2];

   //copy left half and right half
    int mainArrayIndex = s;
     for(int i = 0; i<l1; i++){
        first[i] = arr[mainArrayIndex++];
     }

 
     for(int i = 0; i<l2; i++){
        second[i] = arr[mainArrayIndex++];
     }
  
  // merge 2 sorted arrays

  int index1 = 0;
  int index2 = 0;
  //int mainArrayIndex = s; // k is index of mergedsorted array

  while( index1 < l1 && index2 < l2){
          if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
          }
          else {
            arr[mainArrayIndex++] = second[index2++];
          }
  }

  while(index1< l1){
     arr[mainArrayIndex++] = first[index1++];
  }

   while(index2< l2){
        arr[mainArrayIndex++] = second[index2++];
  }
  
    delete []first;
    delete []second;
}

void mergeSort( int *arr , int s , int e){

    //base case
    if(s>e){
        return;
    }

    int mid = e+(e-s)/2;

    //left part sort karna h
    mergeSort(arr, s , mid);

    //right part sort karna h
    mergeSort(arr , mid+1 , e);

    //merge
    merge(arr , s ,e);
}

int main() {

   int arr[5] = {2,5,1,6,9};
   int n =  5;

   mergeSort(arr , 0 , n-1);

     for(int i = 0; i < 5 ; i++){
        cout << arr[i] << " ";
    }  cout << endl;

   
    return 0;
}