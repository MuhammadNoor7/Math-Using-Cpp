//Muhammad Noor
//i23-2520
//AI-B


#include <iostream>
#include <iomanip>
using namespace std;

long BinomialCoefficientFormula(int , int );
long BinomialCoefficientPascal(int , int );
long factorial (int );
void PrintPascal(int , int);

int main () {
	int n , k = 0; 

do {
	
	cout <<"Enter the number of total distinct items :";
	cin >> n;
	
	cout<<endl<<endl;
	
	cout<<" Enter the number of particular items choosen from these distinct items : ";
	cin >> k ;
	
	cout<<endl<<endl;
	
	if (n == 0 || n == 1) {
			cout<<" The factorial of such number is 1 . ";
	}
	else if (n < 0) {
			cout<<" No factorial exists for negative numbers . ";
	}
	else {
			cout<<" The factorial of such a number exists . The factorial is : ";
			cout<<factorial(n);	                     // calling factorial function to find factorial.
			cout<<endl<<endl;
			cout<<"Binomial Coefficient "<<"n"<<setw(2)<<"C"<<setw(2)<<"r"<<setw(2)<<" = "<<setw(2)<<BinomialCoefficientFormula(n,k);
			cout<<endl<<endl;
			cout<<" Binomial Coefficient Using Pascal Triangle "<<" n "<<setw(1)<<" C "<<setw(1)<<" r "<<setw(1)<<" = "<<setw(1)<<BinomialCoefficientPascal(n,k);
			cout<<endl<<endl;
			cout<<"Pascal Triangle upto n is : "<<endl<<endl;
			PrintPascal(n,k);
			
	}
} while (n <0 ) ;
	return 0;
}


long factorial (int n ) {
	long int fact = 1 ;
	for ( int i = 1 ; i<= n ; i++) {                  // calculating factorial of number.
		fact = fact * i ; 
	}
	return fact ;
}

long BinomialCoefficientFormula(int n , int k ) {
    long int coefficient = 0 ;
   //long int fact = 1 ; 
  //	for (int i = 1 ; i <= n ; i++) {
	//	fact = fact * i ;
 //	}
	long int fact_2 = 1;
	for (int i = 1 ; i<=k ; i++)  {
		fact_2 = fact_2 * i ;                         // calculating factorial of k .
	}
	int permute = 1 ;
	long int magic = 1 ; 
	permute = n-k;
	if (permute >= 0 ) {                               // calculating factorial of n-k.
		for (int i = 1 ; i<= permute ; i++) {
			magic = magic * i;
		}	
	}
	coefficient =  factorial(n)/ (fact_2 * (magic)) ; 
	
	return coefficient ; 		
}

long BinomialCoefficientPascal(int n , int k ) {
	int sum = 0;
	if (k==0 || k==n) {                        // calculating factorial by Pascal Triangle.
		return 1; 
	}
	else {
		
	sum = sum + BinomialCoefficientPascal(n-1,k-1)+BinomialCoefficientPascal(n-1,k);
	BinomialCoefficientPascal(n-1,k-1);
    BinomialCoefficientPascal(n-1,k);
    return sum ; 
}
}

 void PrintPascal (int n , int k) {
	for (int i = 0 ; i<= n; i++) {
		for (int space = 0 ; space < n - i ; space ++ ) {
			cout<< "  ";
		}
		
		for (int j = 0 ; j<= i ; j++) {
			cout<<setw(2)<<" ";
			cout<<BinomialCoefficientPascal(i,j)<<" ";
		}
		cout<<endl;
	}
}

