#include<iostream>
using namespace std;

int main(){

int a,b,c,d;

int n = 1330;
cout<<"enter the amount "<<endl;
cin>>n;              

switch(n){
     case 1330: 
               cout<<"no of 100 rupees note:"<<(a=1330/100)<<endl;

               cout<<"no of 50 rupees note:"<<(c = (b = 1330-(13*100))/50)<<endl;

               cout<<"no of 20 rupees note:"<<(d=b/20)<<endl;

               cout<<"no of 10 rupess note:"<< (b-(20*1))/10<<endl;
               
              break;

    

    default : cout<<"no such denomination"<<endl;
}







}






 