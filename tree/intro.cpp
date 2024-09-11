#include<bits/stdc++.h>
using namespace std;

class node{
    public:
      int data;
      node*left;
      node*right;

      node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
      }
};

node* BuildTree(node* root ){
   
cout<<"enter the data: " << endl;
int data;
cin >> data;
root = new node(data);

if(data == -1) return NULL;


cout <<"enter data for inserting in left : " << data << endl;
root->left = BuildTree(root->left);
cout <<"enter data for inserting in right of" << data << endl;
root->right= BuildTree(root->right);
return root;

}

// void levelOrderTraversal(node* root){
//     queue<node*>q;
//      q.push(root);
//      q.push(NULL); //SEparator

//      while(!q.empty()) {
//         node*temp = q.front();
//         // cout << temp->data << " ";
//         q.pop();
//          if(temp == NULL){ // purana level complete travers ho chuka hai
//            cout<<endl;
//            if(!q.empty()){
//              q.push(NULL);  //qeue still has some child nodes
//            }
//          }
//          else {
//              cout << temp->data << " ";
//         if(temp -> left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//      }
//      }
// }

// void InOrder(node*root){
//     //base case
//     if(root == NULL){
//        return ;
//     }
//     InOrder(root->left);  //left part
//     cout << root->data <<" "; // to print
//     InOrder(root->right); // right part
// }

// void PreOrder(node*root){
//     //base case
//     if(root == NULL){
//        return ;
//     }
//     cout << root->data <<" ";  //to print
//     PreOrder(root->left);  // left part
//     PreOrder(root->right); /// right part
// }

// void PostOrder(node*root){
//     //base case
//     if(root == NULL){
//        return ;
//     }
   
//     PostOrder(root->left);  // left part
//     PostOrder(root->right); /// right part
//     cout << root->data <<" ";  //to print
// }

void Display(node* root){        // without using NULL for newLine printing
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout << endl;
    }
}

node*BuildFromLevelOrder(node*root){
  queue<node*>q;
  cout<<"enter the data: " << endl;
  int data;
  cin >> data;
  root = new node(data);
  q.push(root);
  while(!q.empty()){
     node*temp = q.front();
     q.pop();

     cout<<" enter left node for : " << temp->data <<endl;
     int leftData;
     cin>>leftData;

     if(leftData!=-1){
       temp->left = new node(leftData);
       q.push(temp->left);
     }

     cout<<" enter right node for : " << temp->data <<endl;
     int rightData;
     cin>>rightData;

     if(rightData!=-1){
       temp->left = new node(rightData);
       q.push(temp->right);
     }
  }
}

int main () {
      
    node* root = NULL;
    BuildFromLevelOrder(root);
    // //build tree
    // root = BuildTree(root);
    // //1 3 7 -1  -1 11 -1 -1 5 17 -1 -1 -1
    // //level order
    // cout << "printong level order traversal " << endl;
    //  Display(root);
    // // levelOrderTraversal(root);
   
    
    // // cout << "inorder traversal is : ";
   
     return 0;
}
