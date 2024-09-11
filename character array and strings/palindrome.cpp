// #include<iostream>
// using namespace std;

// char toLowerCase(char ch){
//     if(ch >='a' && ch <='z')
//        return ch;
//     else{
//         char temp = ch - 'A' + 'a'; // converting lower to upper
//         return temp;
//     }
// }

// bool checkPalindrome( char a[] , int n){
//     int s = 0;
//     int e = n-1;

//     while(s<=e){
//         if(toLowerCase(a[s])!=toLowerCase(a[e])){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }

//     return 1;
// }

// void reverse(char name[] , int n){
 
//   int s = 0;
//   int e = n-1;

//   while(s<e){
//     char temp = name[s];
//     name[s] = name[e];
//     name[e] = temp;
//     s++;
//     e--;
//   }
       
// }

// int getLength(char name[]){

//     int count = 0;
//     for(int i = 0; name[i] !=0 ; i++){
//         count++;
//     }
//     return count;
// }

// int main(){


//       char name[20];

//     cout<<" enter your name "<<endl;
//     cin>>name; 

//     cout<<" your name ";
//     cout<<name<<endl;
     
//     int len = getLength(name);

//     cout<<" length is "<< len << endl;
//     reverse(name , len);

//     cout<< name << endl;
 
//    cout<< " palindrome or not "  <<checkPalindrome(name , len) << endl;

//    cout<<" character is " << toLowerCase('b')<<endl;
//    cout<<" character is " << toLowerCase('C')<<endl;

// }

#include<iostream>
using namespace std;


char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z')
    return ch;
    else{
        char uppertolower = ch-'A'+ 'a';
        return uppertolower;
    }
}

bool checkPlaindrome(char a[] , int n){

    int s = 0;
    int e = n-1;

    while(s<=e){
        if( tolowercase( a[s] ) != tolowercase( a[e] ) ){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }

    return 1;
}

void reverse(char name[] , int n){

    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}


int getLength(char name[]){

    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}


char getMaxOccCharacter(string s){

    int arr[26] = {0};
     
     // create an array of count of characters
   
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        //lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = s[i] - 'a';
        }
        else{ //uppercase
      number = s[i] -'A';
        }
        arr[number]++; // increment coount of characters
    }

//finding the max occ characters
  int maxi = -1 , ans = 0;
  for(int i=0; i<26 ; i++){
      if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
      }
  }

char finalAns = 'a'+ ans;
return finalAns;
}

int main(){

    // char name[20];

    // cout <<"enter your name" << endl;
    // cin>> name;

    // cout<<"your name is ";
    // cout<< name << endl;

    // int len = getLength(name);

    // cout << "length: " << len << endl;
    // reverse(name , len);
    // cout<<"reversed name :" << name << endl;

    // cout <<"palindrome or not : " << checkPlaindrome(name , len) << endl;

    // cout<<"lowercase" << tolowercase('b') << endl;
    // cout <<"lowercase" << tolowercase('C') << endl;
    

    // return 0;

    string s;
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;

}
