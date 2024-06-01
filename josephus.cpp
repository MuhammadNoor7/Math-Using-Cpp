// Muhammad Noor 
// i23-2520
//Assignment 3



#include <iostream>
using namespace std;
int main() {

int i = 1;
int k ;
int pos = 0;
int n;                                                           // Keep moving in intervals until whistle is played


cout<<"Check the position at which player is standing:"<<endl;
cin>>n;

cout<<"Enter the gap by which  you want to kill guys:"<<endl;
cin>>k;
  

while(i<=n)                                                     // Condition is incremented until one person is left.
{
    pos = (pos + k)%i;
    
    i++;
    
       
  }
  
        pos++;
  
  cout<<"You are standing at the position:"<<pos<<endl;

   

   
   
return 0;
}
