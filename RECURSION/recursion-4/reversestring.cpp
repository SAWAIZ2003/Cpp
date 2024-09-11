#include<iostream>
using namespace std;

void reverse( string &str, int i , int j) {

    //base case
    if(i>j)
    return;

    swap(str[i] , str[j]);
    i++;
    j--;

    //recurive call
    reverse(str,  i ,  j);
}


int main() {

    string name = "abcde";
    reverse(name , 0 , name.length()-1);

    cout << name << endl;



    return 0;
}