#include<iostream>
#include<stack>
using namespace std;

class Twostack  {

    public:
    int*arr;
    int top1;
    int top2;
    int size;
 
   //intitialise 2 stack
   Twostack(int s) {
      this->size = s;
      top1 = -1;
      top2 = s;
      arr = new int[s];
   }
   //push in stack 1
   void push1(int num) {
    //atlesat 1 space available
    if(top2-top1>1){
        top1++;
        arr[top1] = num;
    }
    
   }
    
    //push in stack 2
    void push2(int num) {
    //atlesat 1 space available
    if(top2-top1>1){
        top2--;
        arr[top2] = num;
    }
    
   }
   
    int pop1() {
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
        int pop2() {
        if(top2<size){
            int ans = arr[top1];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};

int main () {

Twostack  st(6);
st.push1(22);
st.push1(27);
st.push1(44);
st.push2(43);
st.push2(64);
st.push2(70); 

  
  return 0;
}