// Muhammad Noor
//I23-2520
//AI-B
//Q7


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
	char first_alphabet ;
	char  last_alphabet ; 
	
	    int count = 0;
	    
	    cout <<"Enter the number of letters you want in your permutations : ";
	    cin >> count ;
	    
	    cout<<endl;
	    
	    int check = 0;
	    
	    switch (count) {                              // permutations will be selected according to the user input.
	    	 
	    	case 0 :
	    		cout<<"No permutations exist if you dont pick a letter for choosing. Atleast pick one for playing the game. ";
	    		break;
	    	case 1 : 
	    	 cout<<"Enter the starting letter   from which you want to start your permutations : ";
             cin >> first_alphabet  ;
        
             cout<<endl;
            
              cout<<"Enter the ending letter   at  which you want to end your permutations : ";
              cin >> last_alphabet ; 
            cout<<endl;
              if (first_alphabet == last_alphabet) {
              		cout << "The total permutations from " << first_alphabet << " to " << last_alphabet << " are 0 ."<<endl;
			  }
			  else 
			  cout<<"Invalid. Try entering same letters earlier to see the permutation magic . ";
			  break;
			  
			case 2:
				cout<<"Enter the starting letter   from which you want to start your permutations : ";
        cin >> first_alphabet  ;
        
        cout<<endl;
         cout<<"Enter the ending letter   at  which you want to end your permutations : ";
         cin >> last_alphabet ; 
        
        cout<<endl;
      

        cout << "_ _ _ _ _ _ _  " <<endl;
		for ( char  i = first_alphabet ; i <= last_alphabet ; i++) {
            for ( char  j = first_alphabet ; j <= last_alphabet ; j++) {
            		if (i != j)   {
            			
            			cout << "|" << setw (5) << i << j << setw (5) << "|";
            		     check ++ ;
					}
					else {
						
			         continue  ;                                // if letters are same , then that iteration will be skipped.
                 }
                  cout <<endl;
            }
    }
        cout << "_ _ _ _ _ _ _  " <<endl;
        
        cout << "The total permutations of " << first_alphabet << " to " << last_alphabet << " are : " << check ;
        
	     break ; 
		
	    	
	    	case 3 :
	    		cout<<"Enter the starting letter   from which you want to start your permutations : ";
                cin >> first_alphabet  ;
                 
                cout<<endl;
                 cout<<"Enter the ending letter   at  which you want to end your permutations : ";
                 cin >> last_alphabet ; 
                
				cout<<endl; 
         
  
        cout << "_ _ _ _ _ _ _ " <<endl;
		for ( char  i = first_alphabet ; i <= last_alphabet ; i++) {
            for ( char  j = first_alphabet ; j <= last_alphabet ; j++) {
            	for (char k = first_alphabet ; k <= last_alphabet ; k++) {
            		if ((i != j)  && ( j != k) && ( i!=k) ) {
            			
            			cout << "|" << setw (5) << i << j << k << setw (5) << "|";
            			 check ++ ;
					}
					else {
						
			         continue  ;                                  // if letters are same , then that iteration will be skipped.
                 }
                 cout<<endl;
            }
    }
        }
        cout << "_ _ _ _ _ _ _  " <<endl;
        
        cout << "The total permutations of " << first_alphabet << " to " << last_alphabet << " are : " << check ;
        
	     break ; 
		
		case 4 : 
        cout<<"Enter the starting letter   from which you want to start your permutations : ";
        cin >> first_alphabet  ;
        
        cout<<endl;
        
         cout<<"Enter the ending letter   at  which you want to end your permutations : ";
         cin >> last_alphabet ; 
       
        cout<<endl;
        
        cout << "_ _ _ _ _ _ _  " <<endl;
		for ( char  i = first_alphabet ; i <= last_alphabet ; i++) {
            for ( char  j = first_alphabet ; j <= last_alphabet ; j++) {
            	for (char k = first_alphabet ; k <= last_alphabet ; k++) {
            		for (char m = first_alphabet ; m <= last_alphabet ; m++ ) {
            		if ((i != j)  && ( j != k) && ( i!=k) && (i != m ) && (j != m ) && (k != m) ) {
            			
            			cout << "|" << setw (5) << i << j << k << m << setw (5) << "|";
            			check ++; 
					}
					else {
						
			         continue  ;                                        // if letters are same , then that iteration will be skipped.
                 }
                 cout<<endl;
            }
    }
    }
        }
        cout << "_ _ _ _ _ _ _ " <<endl;
        
        cout << "The total permutations of " << first_alphabet << " to " << last_alphabet << " are : " << check ;
        
	 break;
	 
	 case 5 : 
        cout<<"Enter the starting letter   from which you want to start your permutations : ";
        cin >> first_alphabet  ;
        
        cout<<endl;
         cout<<"Enter the ending letter   at  which you want to end your permutations : ";
         cin >> last_alphabet ; 
       
        cout<<endl;
        
        cout << "_ _ _ _ _ _ _ _" <<endl;
		for ( char  i = first_alphabet ; i <= last_alphabet ; i++) {
            for ( char  j = first_alphabet ; j <= last_alphabet ; j++) {            // if letters are same , then that iteration will be skipped.
            	for (char k = first_alphabet ; k <= last_alphabet ; k++) {
            		for (char m = first_alphabet ; m <= last_alphabet ; m++ ) {
            			for (char n = first_alphabet ; n <= last_alphabet ; n++) {
            		if ((i != j)  && ( j != k) && ( i!=k) && (i != m ) && (j != m ) && (k != m) && ( i!= n) && (j != n) && ( k != n ) && (m != n) ) {
            			
            			cout << "|" << setw (5) << i << j << k << m << n << setw (5) << "|";
            			check ++; 
					}
					else {
						
			         continue  ;
                 }
                 cout<<endl;
            }
    }
    }
    }
        }
        cout << "_ _ _ _ _ _ _ _" <<endl<<endl;
        
        cout << "The total permutations of " << first_alphabet << " to " << last_alphabet << " are : " << check ;
        
	 break;
	 
	 default :
	 	cout<<"You are trying to move towards permutations of higher bounds higher than 5 which is difficult . " <<endl<<endl;
	 	cout<<"Try entering permutations of 1-5 letters .";
}
	return 0;
	
    
}
