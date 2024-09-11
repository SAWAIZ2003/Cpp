#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node*next;

    //constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
  
  //destructor
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
      cout<<"memory free for node with data" << val << endl;
    }
};

void insertNode(Node*&tail,int element,int value){
      //assuming elemnt is there

      //case 1 : empty list 
      if(tail == NULL){
       Node*newNode = new Node(value);
       tail = newNode;
       newNode->next = newNode;
      }
   
   else  // non-empty list 
      // assuming that the element is present in the list 
   {
      Node*curr = tail;
      while(curr->data != element){
        curr = curr->next;
      }
      //element found -> curr pointer is at element
      Node*temp = new Node(value);
      temp->next = curr->next;
      curr->next = temp;

   }

}

void print(Node*&tail){

     Node*temp = tail;
   
    //empty list
    if(tail==NULL){
        cout<<" list is empty boi " << endl;
    }

    do{
        cout<<tail->data << " ";
        tail = tail->next;
    }
    
      while(tail != temp);
      cout << endl;
    
};

void deleteNode(Node*tail,int value){

    //empty list
    if(tail==NULL){
        cout<<" lsit is empty" << endl;
    }
    else
    {    //non-empty
        Node*prev=tail;
        Node*curr=prev->next;

        while(curr->data!=value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr ->next;
        //1 node linked list
        if(curr == prev){
            tail = NULL;
        }

        //>=2 nodes linked list
        if(tail == curr){
            tail = prev;
        }
        curr ->next = NULL;
        delete curr;


    }
}

bool isCircularlist(Node*head){
    if(head==NULL){
        return true;
    }

    Node*temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;

}

bool detectLoop(Node*head){
    if(head==NULL){
    return false;
    }
    map<Node*,bool> visited;

    Node*temp = head;
    while(temp!=NULL)
    {   
        //cycle is present 
        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

      return false;
}

int main() {

Node*tail = NULL;

//empty list me insert karre
insertNode(tail,5,3);
print(tail);

insertNode(tail,3,5);
print(tail);


// insertNode(tail,5,7);
// print(tail);

// insertNode(tail,7,9);
// print(tail);

// deleteNode(tail,5);
// print(tail);
if(isCircularlist(tail)){
   cout<<"it is  circular linked list" << endl;
}
else{
    cout<<"not cll" << endl;
}

return 0;


}   