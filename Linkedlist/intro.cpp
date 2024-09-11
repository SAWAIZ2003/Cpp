#include<iostream>
#include<map>
using namespace std;
 
class Node{

    public:
    int data;
    Node*next;
    

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this-> next != NULL){
            delete next;
            this->next = NULL;
        }
        cout <<"memory is free for node with data" << value << endl;
    }
};

void insertAtHead(Node*&head, int data){

    //creation of new node
    Node*node2 = new Node(data);
    node2->next = head; //next pointer is head
    head = node2; //head pointr to new inserted node
};

void insertAtTail(Node*&tail, int data){
    //creation of new node
    Node*node2 = new Node(data);
    tail->next = node2;
    tail = node2;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
         cout<< temp-> data << " ";
         temp = temp->next;
    }
    cout<<endl;
};

void insertatanyposition(Node*&tail, Node* &head,int position , int data){

   //insert at start
   if(position==1){
    insertAtHead(head,data);
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
    insertAtTail(tail,data);
    return ;
}
   //creating new node
   Node* nodetoinsert = new Node(data);
     nodetoinsert->next = temp->next;
     temp->next = nodetoinsert;
}



void deleteNode(int position , Node* &head){
     
     //deleting 1st node
    if(position == 1){
        Node* temp = head;
       head = head->next;
       //memory free start node
       temp->next = NULL;
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
         prev->next = curr->next;
         curr->next=NULL;
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

// bool detectLoop(Node*head){
//     if(head==NULL){
//     return false;
//     }
//     map<Node*,bool> visited;

//     Node*temp = head;
//     while(temp!=NULL)
//     {   
//         //cycle is present 
//         if(visited[temp] == true){
//             cout<<"presnt at element : " << temp->data << endl;
//             return true;
//         }

//         visited[temp] = true;
//         temp = temp->next;
//     }

//       return false;
// }
 Node*floydDetectionLoop(Node*head){

if(head==NULL){
    return NULL;
}
Node*slow = head;
Node*fast = head;

while(slow!=NULL && fast!=NULL){
    fast = fast->next;
    if(fast!=NULL){
        fast = fast->next;
    }
    slow = slow->next;

    if(slow == fast){
        return slow;
    }

    return NULL;
}
}
Node*getStartingNode(Node*head){
    if(head == NULL)
    return NULL;

    Node*intersection = floydDetectionLoop(head);
    if(intersection  == NULL)
    return NULL;

    Node*slow = head;

    while(slow!=intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
};
void removeLoop(Node*head) {
  if(head == NULL)
    return ;
    Node*starofloop = getStartingNode(head);
     if(starofloop  == NULL)
       return ;
       
    Node*temp = starofloop;
    while(temp->next != starofloop){
        temp = temp->next;
    }
    temp->next = NULL;

}
int main() {
    
 Node* node1 = new Node(10);  //creating new node
 cout<< node1->data<<endl;
 cout<< node1-> next<<endl;

 //head pointed to node1
 Node*head = node1;

 Node*tail = node1;
 print(head);

 insertAtTail(tail,12);

 print(head);

  insertAtTail(tail,15);

 print(head);

 insertatanyposition(tail,head,4,22);
 print(head);

// tail->next=head->next;

 cout << "head " << head->data << endl;
 cout << "tail "  << tail -> data << endl;
 print(head);

//  if(floydDetectionLoop(head) != NULL){
//      cout <<"cycle present" << endl;
//  }
//  else {
//     cout<<"no cycle" << endl;
//  }

//  Node* loop = getStartingNode(head);
//  cout<<"loop starts at " << loop->data << endl;

//  removeLoop(head);
 print(head);

//  deleteNode(1,head);
//  print(head);

//   deleteNode(3,head);
//   print(head);

//  cout << "head " << head->data << endl;
//  cout << "tail "  << tail -> data << endl;

    return 0;

}