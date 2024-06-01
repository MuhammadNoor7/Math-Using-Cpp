// Muhammad Noor 
// i23-2520
//Assignment 3



#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dec_num;
    int t_base;
    string res = "";

    cout << "Enter a decimal number: ";                              
    cin >> dec_num;

    cout << "Enter the base you want to target (between 2 and 16 inclusive): ";
    cin >> t_base;

    if (t_base < 2 || t_base > 16)
    {
        cout << "Invalid base. Please enter a base between 2 and 16 inclusive." << endl;
        return 0; // exits the program
    }                                                                      /*Program exits when user enters base 
                                                                           less tham 2 or greater than 16 */

    int original_num = dec_num; 

    if (dec_num == 0) 
    {                                                                    // If decimal is equal to zero , return zero
        res = "0";
    }

    while (dec_num > 0)                                                  /* If decimal is greater than 0 and 
                                                                        remainder is less than 10 , return rem in 
                                                                      number */
    {
        int rem = dec_num % t_base;

        if (rem < 10)
        {
            res = (char)('0' + rem) + res;
        }
        else
        {
            char alp = 'A' + rem - 10;                            //If decimal is greater than 0 and remainder is 
            res= alp + res;                                                     // greater then 10 , return rem in character .
        }                                                        

        dec_num /= t_base;
    }

    if (t_base <= 10)             
    {
        cout << "Decimal number " << original_num << " in base " << t_base << " is: " << res << endl;
    }
    else
    {
        cout << "Decimal number " << original_num << " in base " << t_base << " (alphanumeric representation) is: " << res << endl;
    }

    return 0;
}

 

