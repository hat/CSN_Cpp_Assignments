/*
 //  cit233-1001
 //
 //  @author Tony Hendrick
 //  @version 1/27/15
 //
 //  Input:
 //        numEntered: A user inputted integer
 //        sentinal: The number to enter in order to exit the loop
 //    Output:
 //        evenNumbers: The sum of the even numbers
 //        oddNumbers: The sum of the odd numbers
 //        lowNumber: The lowest number
 //        highNumber: The highest number
 */

#include <iostream>

using namespace std;


int main() {
    
    //Declare int variables
    int numEntered = 0;
    int sentinal = 999;
    int evenNumbers = 0;
    int oddNumbers = 0;
    int lowNumber = 999;
    int highNumber = 0;
    
    //While loop exits when sentinal value is entered
    do
    {
        //Asks user to enter a number
        cout << "Enter an integer or \'" << sentinal << "\' to quit: ";
        cin >> numEntered;
        
        //Does not run if sentinal value was entered
        if( numEntered != sentinal )
        {
            //Checks if number was even
            if( numEntered % 2 == 0 )
            {
                //Adds value to even number total
                evenNumbers += numEntered;
            }
            else
            {
                //Adds value to odd number total
                oddNumbers += numEntered;
            }
            
            //Checks if the number is the lowest entered
            if( numEntered < lowNumber )
            {
                lowNumber = numEntered;
            }
            
            //Checks if the number is the highest entered
            if( numEntered > highNumber )
            {
                highNumber = numEntered;
            }
        }
        
    }while( numEntered != sentinal );
    
    //Prints out the sum of the even numbers, odd numbers, and the lowest and highest values
    cout << "\nThe sum of the even numbers is: " << evenNumbers;
    cout << "\nThe sum of the odd numbers is: " << oddNumbers;
    cout << "\nThe lowest number entered was: " << lowNumber;
    cout << "\nThe highest number entered was: " << highNumber;
    cout << '\n';
    
    //ends program
    return 0;
}
