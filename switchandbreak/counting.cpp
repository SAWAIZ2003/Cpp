#include<iostream>
using namespace std;

void printcounting(int n){ //function signature
    //function body

    for(int i = 0; i<=n; i++){
        cout<<i << " ";
    }

    cout<<endl;
    return;
}

int main(){

    int n;
    cin >> n;
    //function call
    printcounting(n);

    return 0;
}


//void does have return type