#include <iostream>
using namespace std;
int main()
{
 int i;
 int n;
 int x;
 int y;
 int z;
 
for (i=99;i<=999;i++)
{

   y = (i)/100;
   x = (i%100)/10;
   z = (i)%10;
   
   n = (x*x*x) + (y*y*y) + (z*z*z) ;
   
 if ((i==n)) 
 
  cout<<"Number is an amstrong number: "<<n<<endl;
   
  
}
return 0;
}

   
