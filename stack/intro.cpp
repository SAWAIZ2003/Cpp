#include<iostream>
#include<stack>
using namespace std;

class Stack{
  //properties
  public:
    int*arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1; 
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else cout <<"element overflow" << endl;
    }

    void pop(){
        if(top>=0) {
            top--;
        }
        else cout << "stack underflow";  //no value present
    }

    int peek(){
        if(top>=0&&top<size)
         return arr[top];

         else {
           
            cout << "stack is empty" << endl;
            return -1;
         }
    }

    bool isEmpty() {
      if(top == -1)
        return true;

        else {
            return false;
        }
    }

};

int main (){

// //creation of stack
Stack st(5);

st.push(22);
st.push(27);
st.push(44);
st.push(43);
st.push(64);
st.push(70);

cout << "top elemnt is : " <<st.peek() << endl;
// st.pop();
// cout << "top elemnt is : " <<st.peek() << endl;
// st.pop();
// cout << "top elemnt is : " <<st.peek() << endl;
// st.pop();
// cout << "top elemnt is : " <<st.peek() << endl;

if(st.isEmpty()){
  cout << "stack is empty " << endl;
}
else {
    cout <<"stack is not empty mere dost " << endl;
}
// stack<int> s;

// s.push(2);
// s.push(3);

// //pop
// s.pop();

// if(s.empty()){
//     cout<<"not empty"<< endl;
// }
// else{
//     cout<<"not empty" << endl;
// }

// cout<< s.top()<<endl;
// cout<<s.size();
}