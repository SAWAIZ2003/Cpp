#include<iostream>
#include<queue>
using namespace std;

class Heap{
    public:
    int arr[1000];
    int size = 0;
    
    Heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size+1;
        int index = size;
        arr[index]  = val;

        while(index>1){
            int parent = index/2;
            
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                 index = parent;
            }
            else 
            {
                return;
            }
        }
    }

    void print(){
        for(int i = 1 ; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void Delete(){
        if(size == 0){
            cout<<"Nothing to delete"<< endl;
            return;
        }
        
        //step 1 : swap root and last element
       arr[1] = arr[size];

       //step 2 : remove last element
       size--;

       //step 3 - take root node to it correct position
       int i = 1;
       while(i<size){
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;
         
          if(leftIndex<size && arr[i]<arr[leftIndex] && arr[leftIndex] > arr[rightIndex]){
            swap(arr[i] , arr[leftIndex]);
            i = leftIndex;
          }

          else if(rightIndex<size && arr[i]<arr[rightIndex] && arr[leftIndex] < arr[rightIndex]){
             swap(arr[i],arr[rightIndex]);
             i = rightIndex;
          }

          else return;
       }
    }

};

void Heapify(int arr[] , int n , int i){

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }

    if(right <= n && arr[largest]<arr[right]){
         largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        Heapify(arr,n,largest);
    }
}



void HeapSort(int arr[] , int n){
     int size = n;
    
    while(size>1){
        swap(arr[size],arr[1]);
        size--;


        Heapify(arr,size,1);
    }

}

int main(){

    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.Delete();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    //heap creation - MAX_HEAP
    for(int i = n/2 ; i>0; i--){
        Heapify(arr,n,i);
    }

    cout<<"heapify arr" << endl;
    for(int i = 1 ; i<=n ; i++){
        cout<<arr[i] << " ";
    }cout<<endl;


    //heap sort
    HeapSort(arr,n);

     for(int i = 1 ; i<=n ; i++){
        cout<<arr[i] << " ";
    }cout<<endl;


    
    //max element
    // priority_queue<int>minHeap;

    // minHeap.push(1);
    // minHeap.push(2);
    // minHeap.push(98);
    // minHeap.push(69);
    // minHeap.push(87);

    // cout<<" top element " << minHeap.top() << endl;
    // minHeap.pop();
    //  cout<<" top element " << minHeap.top() << endl;
    //  cout<<"size is" << minHeap.size() << endl;

    //  if(minHeap.empty()){
    //        cout<<"minHeap is empty " <<endl;
    //  }
    //  else {
    //     cout<<"filled" << endl;
    //  }

     //min heap

     priority_queue<int,vector<int> , greater<int>> minHeap;

    minHeap.push(1);
    minHeap.push(2);
    minHeap.push(98);
    minHeap.push(69);
    minHeap.push(87);


     cout<<" top element " << minHeap.top() << endl;
     minHeap.pop();
     cout<<" top element " << minHeap.top() << endl;
     cout<<"size is" << minHeap.size() << endl;

     if(minHeap.empty()){
           cout<<"minHeap is empty " <<endl;
     }
     else {
        cout<<"filled" << endl;
     }


    return 0;
}
