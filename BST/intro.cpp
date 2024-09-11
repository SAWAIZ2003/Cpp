#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to display the tree level by level
void Display(Node* root) {
    if (root == NULL) return;  // Handle empty tree case

    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; i++) {
            Node* temp = q.front();
            q.pop();
            cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
        cout << endl;
    }
}

// Function to insert data into the BST
Node* Insert(Node*& root, int data) {
    // Base case: create a new node if the tree is empty
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    // Recursive case: insert data into the correct subtree
    if (data > root->data) {
        root->right = Insert(root->right, data);
    } else {
        root->left = Insert(root->left, data);
    }

    return root;
}

// Function to take input and create the BST
void TakeInput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = Insert(root, data);
        cin >> data;
    }
}

// Function to find the node with the minimum value in the BST
Node* MinVal(Node* root) {
    Node* temp = root;
    while (temp && temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

// Function to find the node with the maximum value in the BST
Node* MaxVal(Node* root) {
    Node* temp = root;
    while (temp && temp->right != NULL) {
        temp = temp->right;
    }
    return temp;
}


Node*deleteNode(Node*root, int val){
     //base case
     if(root == NULL){
         return root;
     }

     if(root->data == val){
         // 0 child
         if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
         }

         // 1child
          
          //left child
        if(root->left !=NULL && root->right == NULL){
            Node*temp = root->left;
            delete root;
            return temp;
        }

        //right child

         if(root->left ==NULL && root->right != NULL){
            Node*temp = root->right;
            delete root;
            return temp;
        }


         //2child

         if(root->right != NULL && root->right !=NULL){
            int mini = MinVal(root->right)->data;
            root->data = mini;
            root->right = deleteNode(root->right,mini);
            return root;

         }
     }

     else if(root->data>val){
         //left part
         root->left = deleteNode(root->left,val);
     }
     else{
        //right part
        root->right = deleteNode(root->right,val);
        return root;
     }
}

int main() {
    Node* root = NULL;
    cout << "Enter data to create BST (end with -1):" << endl;
    TakeInput(root);

    cout << "Printing the BST:" << endl;
    Display(root);

    Node* minNode = MinVal(root);
    Node* maxNode = MaxVal(root);

    if (minNode) {
        cout << "Minimum value: " << minNode->data << endl;
    } else {
        cout << "The tree is empty." << endl;
    }

    if (maxNode) {
        cout << "Maximum value: " << maxNode->data << endl;
    } else {
        cout << "The tree is empty." << endl;
    }

    root = deleteNode(root,30);

      cout << "Printing the BST:" << endl;
    Display(root);

    return 0;
}
