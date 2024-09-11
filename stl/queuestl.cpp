#include<iostream>
#include<queue>

using namespace std;

int main() {

    queue<string> q;

    q.push("fuck");
    q.push("the");
    q.push("porn");

    cout<<" first element " << q.front() <<endl;

    q.pop();
    
     cout<<" first element " << q.front() <<endl;

}