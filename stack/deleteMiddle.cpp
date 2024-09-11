#include<stack>
#include<bits/stdc++.h>
using namespace std;

void Reverse(stack<int>&st){
     vector<int>ans;
     while(!st.empty()){
         ans.push_back(st.top());
         st.pop();
     }
     for(int i = 0 ; i<ans.size() ; i++){
            st.push(ans[i]);
     }
}

void Delete(stack<int>&st){
      stack<int>temp;
      int a = st.size()/2;
      for(int i = 0; i<a ; i++){
         temp.push(st.top());
          st.pop();
      }
      st.pop();

       while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

// void deleteMidElement(stack<int>& st)
// {
    
//     Delete(st);
    
// }

int main() {
      stack<int>st;
      st.push(1);
      st.push(2);
      st.push(3);
      st.push(4);
      st.push(5);

    // cout << "Original stack top: ";
    //  while (!st.empty()) {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout<<endl;

    //  deleteMidElement(st);

    // cout << "Stack after deleting middle element: ";
    
    // while (!st.empty()) {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout << endl;

    Reverse(st);

      return 0;
}