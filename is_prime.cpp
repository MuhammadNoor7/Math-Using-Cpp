// Muhammad Noor 
// i23-2520
//Assignment 3



#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int num = 1; 

                                                           // For top of table 
    for(int i = 0; i < N; ++i) {
        cout << "+---";
    }
    cout << "+" << endl;

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cout << "| ";

                                                         // Checks if num is prime
            bool isPrime = true;
            if(num <= 1) isPrime = false ; 
            for(int k = 2; k * k <= num; ++k) {
                if(num % k == 0) {
                    isPrime = false; 
                    break;
                }
            }

            if(isPrime) {
                cout << "P ";
            } else {
                cout << ". ";
            }
            num++;
        }
        cout << "|" << endl;                                  // For bottom of the table

                                                              // Print separator row
        for(int j = 0; j < N; ++j) {
            cout << "+---";
        }
        cout << "+" << endl;
    }

    return 0;
}

       
