#include<iostream>
#include<stack>
using namespace std;

 int main () {

    string str = "sawaizkhan";
    
    string ans = "";
    stack<char> s;
    for(int i = 0 ; i<str.length(); i++){
         char ch = str[i];
         s.push(ch);
    }

    // string ans = "";

 while(!s.empty()){  //check if stack is not empty
     char ch = s.top();
     ans.push_back(ch);

     s.pop();
 }

  cout <<"answer is: " << ans; 

    return 0;
 }