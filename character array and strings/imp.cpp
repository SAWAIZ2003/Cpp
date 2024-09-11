#include<iostream>
using namespace std;

int main() {
    char str[20];
    int i = 0 , c = 0 , sp = 0;
    cout<<"enter string:" ;
    gets(str);
    for(int i = 0; str[i] != '\0' ; i++){
        c++;
        if(str[i]==' '){
            sp++;
        }
    }
    cout<<"character:" << c << endl;
    cout<<"words:" << sp+1;
    return 0;

}