#include<iostream>
#include<queue>
using namespace std;

class Queue {

    int*arr;
    int front_index;
     int rear ;
     int size;

     Queue() {
        size = 5;
        arr = new int[size];
        front_index = 0;
        rear = 0;
    }

    void enqueue(int data){  // insert/push
         if(rear == size){
            cout << " queue is full "<< endl;
         }
         else{
            arr[rear] = data;
            rear++;
         }    
    }

    int dequeue(){
   //pop operation
    if( front_index  == rear) {
        return -1;
    }
    else {
    int ans = arr[front_index];
    arr[front_index] = -1;
    front_index++;
    if(front_index== rear){
        front_index = 0;
        rear = 0;
    }
     return ans;
    }
  }

  int front() {
     if(front_index == rear) {
        return -1;
     }
     else{
         return arr[front_index];
     }
  }
 bool isEmpty() {
    if(front_index = rear){
        return true;
    }
    else{
        return false;
    }
 }

};

int main() 
{

   queue<int> q;
    q.push(11);
    cout << "front of q is : " << q.front() << endl;
    q.push(12);
    cout << "front of q is : " << q.front() << endl;
    q.push(13);
    cout << "front of q is : " << q.front() << endl;
    q.push(14);
    cout << "front of q is : " << q.front() << endl;
    q.push(15);
    cout << "front of q is : " << q.front() << endl;


    if(q.empty()) {
    cout << "empty" << endl;
   }
   else{
    cout<< "not empty" << endl;
   }

 
   

    return 0;
}