/*
 //  main.cpp
 //
 //  @author Tony Hendrick
 //  @version 2/9/15
 //
 //  This program uses the personType class to create a new personType
 //  object and then proceeds to test out the methods of the personType
 //  class.
 //
 //  This program must include "PersonType.h"
 //
 //  Input:
 //        firstPerson: a personType object
 //        fName: first name of a person
 //        mName: middle name of a person
 //        lName: last name of a person
 //        compareFName: the first name of a person used to compare
 //        compareLName: the last name of a person used to compare
 //    Output:
 //        firstPerson.print(): the first and last name of the personType object
 //
 */

#include <iostream>
#include "PersonType.h"

int main(int argc, const char * argv[]) {
    
    //declares personType variables
    PersonType firstPerson;
    
    //declares string variables
    string fName;
    string mName;
    string lName;
    string compareFName;
    string compareLName;
    
    //prints out what program does
    cout << "----------------------------\n";
    cout << "|       Compare Names      |\n";
    cout << "----------------------------\n";
    
    //gets the first name of firstPerson
    cout << "Enter first name: ";
    cin >> fName;
    firstPerson.setFirstName(fName);
    
    //gets the middle name of firstPerson
    cout << "Enter middle name: ";
    cin >> mName;
    firstPerson.setMiddleName(mName);
    
    //gets the last name of firstPerson
    cout << "Enter last name: ";
    cin >> lName;
    firstPerson.setLastName(lName);
    
    //prints out the first and last name of firstPerson
    cout << '\n';
    cout << "Hello, ";
    firstPerson.print();
    cout << '\n';
    
    //gets the first name to compare to firstPerson's first name
    cout << '\n';
    cout << "Enter first name to compare to " << firstPerson.getFirstName() << ": ";
    cin >> compareFName;
    
    //if statement to print whether they are the same or different
    if(firstPerson.compareFirstName(compareFName))
    {
        cout << "The first names are the same.\n";
    }
    else{
        cout << "The first names are different.\n";
    }
    
    //gets the last name to compare to the firstPerson's last name
    cout << "Enter last name to compare to " << firstPerson.getLastName() << ": ";
    cin >> compareLName;
    
    //if statement to print whether they are the same or different
    if(firstPerson.compareLastName(compareLName))
    {
        cout << "The last names are the same.\n";
    }
    else{
        cout << "The last names are different.\n";
    }
    
    //end program
    return 0;
}
