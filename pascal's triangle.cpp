// Muhammad Noor 
// i23-2520
//Assignment 3


#include<iostream>
using namespace std;

int main() {
    int rows = 0;
    cout << "Enter Number of Rows: ";
    cin >> rows;

    int sum = 0;
    int product = 1;                            // Initialized to 1 as we'll be multiplying numbers

    for (int i = 0; i < rows; i++) {
        
        for (int space = 0; space < rows - i; space++) {
            cout << "  "; 
        }

        int num = 1; 
        for (int j = 0; j <= i; j++) {
            cout << num << "   "; 

            sum += num;
            if(num != 0) {                               // Checks if number is not equal to zero 
                product *= num;
            }

            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }

    cout << "Sum of all numbers in the triangle: " << sum << endl;
    cout << "Product of all numbers in the triangle: " << product << endl;

    return 0;
}
        
