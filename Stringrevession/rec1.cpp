#include<bits/stdc++.h>
using namespace std;

bool CheckPal(string &str, int s ,int e){
    //base condition
    if(s>=e){
        return 1;
    }

    //not matched
    if(str[s] != str[e]){
        return 0;
    }
    else
    return CheckPal(str,s+1,e-1);
}

void Reverse(string &r , int s , int e){
    if(s>=e){
        return ;
    }

    char c = r[s];
    r[s] = r[e];
    r[e] = c;

    Reverse(r,s+1,e-1);
}

void LowerToUpper(string &str , int index){
    if(index==-1)return;
     str[index] = 'A'+str[index]-'a';
     LowerToUpper(str,index-1);
}

int count(string str , int index){
    if(index == -1){
        return 0;
    }
    if(str[index]=='A'||str[index]=='E'||str[index]=='I'||str[index]=='0'||str[index]=='U'){
         return 1 + count(str,index-1);
    }
    else 
    return count(str,index-1);
}

int main () {
    string r = "namenip";
    cout<<CheckPal(r,0,r.size()-1)<<endl;
    Reverse(r,0,r.size()-1);
    LowerToUpper(r,r.size()-1);
    cout<<r<<endl;
    cout<<count(r,r.size()-1)<<endl;
    return 0;
}
