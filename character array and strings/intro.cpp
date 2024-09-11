#include<iostream>
using namespace std;

void reverse(char name[] , int n){
 
  int s = 0;
  int e = n-1;

  while(s<e){
    char temp = name[s];
    name[s] = name[e];
    name[e] = temp;
    s++;
    e--;
  }
       
}

int getLength(char name[]){

    int count = 0;
    for(int i = 0; name[i] !=0 ; i++){
        count++;
    }
    return count;
}


char getMaxOccCharacters(string s){
  
  int arr[26] = {0};

  // create an array of the count of characters
  for(int i = 0; i<s.length(); i++){
     char ch = s[i];
     //lowercase
     int number = 0;
     number = ch - 'a'; 
     arr[number]++;
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


   string s;
   cin >> s;

  cout<< getMaxOccCharacters(s) << endl;
  return 0;

}



