#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node*prev;
    Node*next;

    //constructor
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this-> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
    cout<<"memory free for node with data" << val << endl;
    }
};
//traversing ll
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout << endl;
}
//getting length
int getLength(Node*head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
       len++;
      temp = temp->next;

    }
    return len;
}


void insertAtHead(Node*&head ,Node* &tail,int data){

    if(head==NULL){
        Node*temp = new Node(data);
        head = temp;
        tail = temp;
    }

    else{
     Node*temp = new Node(data);
     temp->next=head;
     head->prev=temp;
     head=temp;
    }
};

void insertAtTail(Node* &tail,Node*&head,int data) {
      if(tail==NULL){
        Node*temp = new Node(data);
        tail = temp;
        head = temp;
    }
 else
  {
     Node*temp = new Node(data);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;
  }
}

void insertatanyposition(Node*&tail, Node*&head,int position , int data){
  
   //insert at start
   if(position==1){
    insertAtHead(tail,head,data);
    return;
   }

Node*temp = head; //temp ptr pointing to head
int cnt = 1;

while(cnt<position-1){
    temp = temp->next;
    cnt++;
}

//inserting at last position
if(temp->next == NULL){
    insertAtTail(tail,head,data);
    return ;
}
   //creating new node
   Node* nodetoinsert = new Node(data);
     nodetoinsert->next = temp->next;
     temp->next->prev = nodetoinsert;
     temp->next = nodetoinsert;
     nodetoinsert->prev=temp;

}

void deleteNode(int position , Node* &head){
     
     //deleting 1st node
    if(position == 1){
        Node* temp = head;
        temp->next->prev=NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
       
    }
    else 
    {
         //deleting any middle node or last node
         Node*curr = head;
         Node*prev = NULL;

         int cnt = 1;
         while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
         }
        curr->prev = NULL;
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
} 


int main() {
 
 //create new node
 Node* node1 = new Node(10);
 Node*head = node1;
 Node*tail= node1;

 print(head);

// cout<<getLength(head)<<endl;

// insertAtHead(head,tail,11);
// print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

// insertAtHead(head,tail,13);
// print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

// insertAtHead(head,tail,15);
// print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

// insertAtTail(tail,head,20);
// print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

// insertAtTail(tail,head,22);
// print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

// insertAtTail(tail,head,23);
// print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

// // cout<<getLength(head)<<endl;

// insertatanyposition(tail,head,2,100);
// print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

// insertatanyposition(tail,head,1,101);
// print(head);


//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;


//  deleteNode(8,head);
//  print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

 return 0;


}