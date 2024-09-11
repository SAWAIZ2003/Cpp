#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{
    int*arr;
    int front_index;
    int rear;
    int size;

    CircularQueue(int n){
          size = n;
          arr = new int[size];
          front_index=-1;
          rear = -1;


    }

    bool enqueue(int value){
         if( (front_index == 0 && rear == size-1) || rear == (front_index-1)&(size-1) )
         {
            cout<< " queue if full ";
            return false;
         }
         else if(front_index == -1) // first element to push
         {
            front_index = rear = 0;
           
         }
         else if((rear == size-1) && front_index!=0)
         {
            rear = 0;  // to maintain cyclic nature
         
         }
         else
         {   //normal flow
              rear++;
             
         }
         //push
         arr[rear] = value;
         return true;
    }

    int dequeue(){  //pop
          if(front_index == -1){
            cout << "quque is empty " << endl;
            return -1;
          }

          int ans = arr[front_index];
          arr[front_index] = -1;
          if(front_index == rear) {  //single element
            front_index = rear = -1;
          }

          else if (front_index == size-1)
          {
            front_index = 0;  //to check cyclic nature
          }

          else
          {
                 front_index++;
          }
    }
};

int main() {


    queue<int> cq;
       // Test enqueue
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.push(60); // Queue is full
    

    return 0;


}
