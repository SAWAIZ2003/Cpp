#include<iostream>
using namespace std;

void BubbleSort(int nums[] , int size)
{
   for(int i = 1; i<6 ; i++){
       //for round 1 to n-1 i.e 5,
       for(int j = 0 ; j<6-i; j++){
         if(nums[j]>nums[j+1]){
            swap(nums[j],nums[j+1]);
       }
   }

}

}

int main() {


  int nums[6] = {10,1,7,6,16,9};
  int size =6;

  BubbleSort(nums,6);

  for(int i = 0 ; i<6; i++){
    cout << nums[i] << " ";
   } cout << endl;

    return 0;
}