#include <iostream>
using namespace std;

int main()
{
 int n ;
 double x ;
 double power;
 double fac;
 double sum = 0.0;
 int neg_fig=1;  
 
 cout<<"Enter the value of x:";
 cin>>x;
 
 cout<<"Enter the number of terms n:";
 cin>>n;
 
 for(int i= 1 , term_count = 0 ; term_count <n ; i+=2 , term_count++)
 {
  fac = 1 ;
  power =1 ;
  
  for (int j = 1; j<=i ; j++)
  {
   power = power *x;
   }
   
   for(int j = 1; j<=i ; j++)
   {
    fac = fac * j;
   }
   
   sum = sum+ neg_fig * (power / fac);
   
   neg_fig = -neg_fig;
  }
   
   cout<<"The  approximation of sin("<<x<<")is:"<<sum<<endl;
   return 0;
   }
   
 
 
