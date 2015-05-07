//
//  main.cpp
//  cit233_hw7_tonyhendrick_q1
//
//  @author Tony Hendrick
//  @version 4/15/15.
//
//  This program creates fractions and can then add, subtract, multiply,
//  and divide them together.
//

#include <iostream>
#include "fractionType.h"

using namespace std;

int displayMenu(fractionType &fractionOne, fractionType &fractionTwo);
//method to display the menu
void setFraction(fractionType &fraction);
//method to set the values of a fraction

int main() {
    
    //Declare fractionType variables
    fractionType fractionOne(3, 4);
    fractionType fractionTwo(2, 5);
    fractionType answerFraction;
    
    //Declare int variable
    int selection = 1;
    
    //while loop to run until selection is 0
    while( selection != 0 )
    {
        //sets selection to return value of displayMenu()
        selection = displayMenu(fractionOne, fractionTwo);
        
        //switch to call appropriate functions
        switch (selection)
        {
                //sets fraction values for fractionOne
            case 1:
                setFraction(fractionOne);
                break;
                
            //sets fraction values for fractionTwo
            case 2:
                setFraction(fractionTwo);
                break;
                
            //adds the two fractions
            case 3:
                answerFraction = fractionOne + fractionTwo;
                cout << fractionOne << " + " << fractionTwo << " = " << answerFraction << '\n';
                break;
                
            //subtract the two fractions
            case 4:
                answerFraction = fractionOne - fractionTwo;
                cout << fractionOne << " - " << fractionTwo << " = " << answerFraction << '\n';
                break;
                
            //multiply the two fractions
            case 5:
                answerFraction = fractionOne * fractionTwo;
                cout << fractionOne << " * " << fractionTwo << " = " << answerFraction << '\n';
                break;
                
            //divide the two fractions
            case 6:
                answerFraction = fractionOne / fractionTwo;
                cout << fractionOne << " divided by " << fractionTwo << " = " << answerFraction << '\n';
                break;
                
            default:
                selection = 0;
                break;
        }

    }
    
    //ends program
    return 0;
}//end main

//method to display a menu for the user to select what to do with the fractionType's
int displayMenu(fractionType &fractionOne, fractionType &fractionTwo)
{
    //declare int variable
    int selection = 0;
    
    //prints header
    cout << "-----------------------------\n";
    cout << "|||\tFraction Calculator\t|||\n";
    cout << "-----------------------------\n";
    
    //prints menu
    cout << "This calculator can create a fraction, set the values of a fraction, and add, subtract, multiply, as well as divide two fractions.\n\n";
    //prints fractionOne and fractionTwo
    cout << fractionOne << '\n';
    cout << fractionTwo << '\n';
    cout << "1) Set the numerator and denominator of the first fraction\n";
    cout << "2) Set the numerator and denominator of the second fraction\n";
    cout << "3) Add fractions\n";
    cout << "4) Subtract fractions\n";
    cout << "5) Multiply fractions\n";
    cout << "6) Divide fractions\n";
    cout << "0) Exit Menu\n";
    cout << "\nEnter your selection...\n";
    
    //gets selection
    cin >> selection;
    
    return selection;
}//end displayMenu

//method to set the values of the fraction
void setFraction(fractionType &fraction)
{
    //declare int variables
    int num = 1;
    int den = 1;
    
    //declare string variable
    string inpStr = "Incorrect input. Setting fraction to 1/1...";
    
    //try/catch block
    try
    {
        //gets numerator
        cout << "Enter the numerator: ";
        cin >> num;
        
        if(cin)
        {
            //gets denominator
            cout << "Enter the denominator: ";
            cin >> den;
        }
        
        
        //throws string if cin is not clear
        if(!cin)
        {
            throw inpStr;
        }
        //throws int if den is less than or equal to zero
        else if(den <= 0)
        {
            throw den;
        }
    }
    //catches string
    catch(string s)
    {
        cout << inpStr << '\n';
        num = 1;
        den = 1;
        
        //clears cin
        cin.clear();
        cin.ignore();
    }
    //catches int
    catch (int x)
    {
        cout << den << " is not greater than zero. Setting fraction to 1/1...\n";
        num = 1;
        den = 1;
    }
    //end try/catch block
    
    //sets fraction
    fraction.setFraction(num, den);
}//end setFraction
