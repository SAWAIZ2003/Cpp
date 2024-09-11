//selection sort
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int nums[],int size) {

   for(int i = 0 ; i<5; i++){
    int minIndex = i;
    for(int j =i+1;j<5;j++){
        if(nums[minIndex]>nums[j])
          minIndex = j;
        swap(nums[minIndex],nums[i]);
     
         }
   }
};

int main() {

  int nums[5] = {64,25,12,22,11};
  // int nums[4] = {5,2,3,1};
  int size = 5;

  selectionSort(nums,5);

   for(int i = 0 ; i<5; i++){
    cout << nums[i] << " ";
   } cout << endl;


    return 0;
}



//time and space complexity
//space complexity

//n is size of array
// a b c d e -> n-1 comparisons for a  
// a b c d e -> n-2 comparisons for b  
// a b c d e -> n-3 comparisons for c  
// a b c d e -> n-4 comparisons for d  
// a b c d e -> 1 comparisons for e

//total comparisons -> 1+2+3....+n-1 = O(n**2);->time complexity
//best case - 1 comparions , worst case - O(n2);