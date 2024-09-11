#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int val;
    Stack* next;


    Stack(int d){
        this -> val = d;
        this -> next = NULL;
    }
    
    void push(int element,Stack* &head,Stack* &tail){
        Stack *newNode = new Stack(element);
        if( head == NULL){
            //first element push
            head = newNode;
            tail = newNode;
            return;
        }else{
            //assuming element is present
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop(Stack* &head,Stack* &tail){
        if( head == NULL){
            //if no element is present
            cout << "Stack Underflow "<<endl;
        }else{
            //edge case for last element
            if( head == tail){
                head = NULL;
                return;
            }
            Stack* temp = head;
            while( temp -> next != tail){
                temp = temp -> next;
            }
            temp -> next = NULL;
            tail = temp;

        }
    }

    int peek(Stack* &tail){
        if( tail == NULL){
            cout << "Stack Underflow 2" << endl;
        }else{
            return tail -> val;
        }
    }

    bool isEmpty(Stack* &head){
        if( head == NULL){
            return true;
        }else return false;
    }

};
void print( Stack* &head){
    Stack* temp = head;
    if( temp == NULL) cout << temp -> val << endl;
    while(temp != NULL){
        cout<< temp ->  val << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
Stack *head = NULL;
    Stack *tail = NULL;
    Stack st(3);
    st.push(4,head,tail);
    st.push(8,head,tail);
    st.push(6,head,tail);
    print(head);


    cout <<"Peek element is "<< st.peek(tail) <<endl;

    st.pop(head,tail);

    print(head);
    
    cout<<"Peek element is "<<st.peek(tail) <<endl;

    st.pop(head,tail);

    print(head);

    st.pop(head,tail);

    if( st.isEmpty(head)){
        cout << "Stack is empty "<<endl;
    }else{
        cout<< "Stack is not empty"<<endl;
    }

   st.pop(head,tail);

    return 0;
}