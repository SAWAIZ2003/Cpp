#include<iostream>
using namespace std;

int firstOcc(int arr[] , int n , int key){
     int s = 0 , e = n-1;
     int mid = s + (e-s)/2;
     int ans = -1;
     while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }

        else if(arr[mid]<key){ //search in right half
            s = mid+1;
        }

        else if(arr[mid]>key){
            e = mid - 1;
        }

        mid = s + (e-s)/2; //for optimisation
     }
     return ans;
}

int lastOcc(int arr[] , int n , int key){
     int s = 0 , e = n-1;
     int mid = s + (e-s)/2;
     int ans = -1;
     while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }

        else if(arr[mid]<key){ //search in right half
            s = mid+1;
        }

        else if(arr[mid]>key){
            e = mid - 1;
        }

        mid = s + (e-s)/2; //for optimisation
     }
     return ans;
}


int main() {
  
  int even[10] ={1,2,3,3,3,3,3,3,3,5};
   
  cout<<"first Occurence of 3 is at index :"<< firstOcc(even , 10 ,3)<<endl;
  cout<<"last Occurence of 3 is at index :"<< lastOcc(even , 10 ,3)<<endl;

  return 0;
    
} 