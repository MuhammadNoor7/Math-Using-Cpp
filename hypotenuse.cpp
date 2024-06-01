// Muhammad Noor
//I23-2520
//AI-B
//Q4


#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	int range = 0;
	
	cout<<"Enter a range for all sides of the triangle : ";                    // the triplets will be found upto the range.
	cin>>range ;
	
	cout<<endl;
	
	cout << "|" << " SIDE A " << setw(3)  << "|" << " SIDE B " << setw (3) << "|"  << " HYPOTENUSE" << setw (3) << "|"  << endl;
	cout << "|" << setw(11)<< "|"<<setw(11) <<"|"<< setw(14) <<"|"  <<endl;
	
	int count = 0;
	for (int side_A = 1; side_A<=range ; side_A++) {                 // outer loop checks the side A , inner loop checks the side B .
		for (int side_B = 1; side_B<=range ; side_B++) {             // the inner most loop cehcks the hypotenuse
			for (int hypotenuse = 1 ; hypotenuse <=range ; hypotenuse++) {
				if ( ( side_A*side_A ) + ( side_B*side_B ) == (hypotenuse * hypotenuse ) ) {
					count = count + 1; 
					cout << "|" << setw(5) << side_A   << setw(6) << "|" << setw(6)  << side_B << setw(5) << "|" << setw(7) << hypotenuse << setw(7) << "|" <<endl;
				}
			}
		}
	}
	cout<<endl;
	cout<<"A total of " << count << " Pythagorean triplets were found  in range " << range << ".";
	return 0;
}
