//
//  main.cpp
//  cit233_hw7_tonyhendrick_q2
//
//  @author Tony Hendrick
//  @version 4/18/15
//
//  Program to check an entered birth date to see if that is a valid date on the
//  Gregorian Calendar.
//

#include <iostream>
#include <cstring>
#include "birthdayType.h"
#include "invalidDay.h"
#include "invalidMonth.h"
#include "invalidYear.h"

using namespace std;

int displayMenu();
//method to display the menu
void setBirthday(birthdayType &birthday);
//method to set birthdayType

int main()
{
    //declares birthdayType variable
    birthdayType birthdayOne(1, 31, 1994);
    
    //declares int variable
    int selection = 1;
    
    //while loop ends when selection is 0
    while( selection != 0 )
    {
        //sets selection to return value of displayMenu()
        selection = displayMenu();
        
        //Switch based on selection
        switch (selection)
        {
            case 1:
                //calls setBirthday method
                setBirthday(birthdayOne);
                break;
                
            case 2:
                //prints out birthdayOne
                cout << birthdayOne << '\n';
                break;
                
            default:
                break;
        }
    }
    
    //ends program
    return 0;
}//end main

int displayMenu()
{
    //declare int variable
    int selection = 0;
    
    //prints out title of program
    cout << "---------------------------------\n";
    cout << "|||\tBirthday Validation Check|||\n";
    cout << "---------------------------------\n";
    //prints program description
    cout << "Enter a birthay to see if it is a valid date.\n\n";
    //prints menu
    cout << "1) Enter birthday\n";
    cout << "2) Display birthday\n";
    cout << "0) Exit\n";
    //gets selection
    cout << "Enter selection: ";
    cin >> selection;
    
    //returns selection
    return selection;
}//end displayMenu

void setBirthday(birthdayType &birthday)
{
    //declare int variables
    int day;
    int month;
    int year;
    
    //try/catch block
    try
    {
        //get month
        cout << "Enter birth month: ";
        cin >> month;
        
        //get day
        cout << "Enter birth day: ";
        cin >> day;
        
        //get year
        cout << "Enter birth year: ";
        cin >> year;
        
        birthday.setBirthday(month, day, year);
    }
    //catches invalidDay
    catch (invalidDay iD)
    {
        cout << iD.what() << endl;
    }
    //catches invalidMonth
    catch (invalidMonth iM)
    {
        cout << iM.what() << endl;
    }
    catch(invalidYear iY)
    {
        cout << iY.what() << endl;
    }
}//end setBirthday
