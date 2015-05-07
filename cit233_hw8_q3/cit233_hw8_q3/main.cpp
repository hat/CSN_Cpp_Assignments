//
//  main.cpp
//  cit233_hw8_q3
//
//  @author Tony Hendrick
//  @version 5/4/15
//
//  This program creates a list of employees and sorts them
//  alphabetically as well as finds their average salary
//

#include <iostream>
#include "employeeType.h"
#include "employeeListType.h"

using namespace std;

int displayMenu();
//Displays a menu
void navigateMenu(int selection, employeeListType &employeeList);
//Switch statement to execute different functions
void createEmployeeList(employeeListType &employeeList);
//Creates an employee in the list

int main()
{
    employeeListType employeeList; //list of empoyees and their salary
    int selection = 1; //holds the return value of displayMenu()
    
    //runs until selection is 0
    while( selection != 0 )
    {
        //calls displayMenu() function
        selection = displayMenu();
        
        //calls navigateMenu() function
        navigateMenu(selection, employeeList);
    }
    
    //ends program
    return 0;
}//end main

//
// @brief function to display a menu in which the user will
//        will then select what to do
//
//@return the number entered by the user
int displayMenu()
{
    int selection = 0; //the number entered by the user
    
    try
    {
        cout << "----------------------------------\n";
        cout << "|       EMPLOYEE INFORMATION     |\n";
        cout << "----------------------------------\n";
        
        cout << "\n1) Add employee";
        cout << "\n2) Sort Employees Alphabetically";
        cout << "\n3) Print Employee Information";
        cout << "\n4) Print Average Salary";
        cout << "\n0) Exit Program\n";
        
        //gets user input
        cin >> selection;
        
        //checks if valid int was thrown
        if( !cin )
        {
            throw selection;
        }
        else if( selection < 0 || selection > 4 )
        {
            throw selection;
        }
    }
    catch (int)
    {
        //prints error statement
        cout << "Invalid selection... try again.\n";
        
        //clears console
        cin.clear();
        cin.ignore();
        
        //recalls displaymenu function
        selection = displayMenu();
    }
    
    //returns selection
    return selection;
}//end displayMenu()

//
// @brief function to call upon other functions based
//  on the passed parameter
//
// @param selection which function in the switch to call
// @param employeeList the employeeList holding employee info
//@return the number entered by the user
void navigateMenu(int selection, employeeListType &employeeList)
{
    //switch statement based on selection
    switch (selection)
    {
        case 1:
            createEmployeeList(employeeList);
            break;
            
        case 2:
            employeeList.sortNamesAlphabetically();
            break;
            
        case 3:
            //prints newline and then employeeInfo
            cout << endl;
            employeeList.printEmployeeInfo();
            break;
            
        case 4:
            //prints newline and then the average salary
            cout << endl;
            cout << "Average salary: $" << employeeList.getAverageSalary();
            cout << endl;
            break;
            
        default:
            break;
    }
}//end navigateMenu

//
// @brief function to add an employee to the employeeList
//        at the beginning
//
// @param employeeList the employeeList holding employee info
//
void createEmployeeList(employeeListType &employeeList)
{
    employeeType newEmployee; //new temporary employeeType
    string name; //name of newEmployee
    double salary; //salary of newEmployee
    
    //gets the name of the employee
    cout << "Enter the name of the employee: ";
    cin.clear();
    cin.ignore();
    getline(cin, name);
    
    //gets the salary of the employee
    cout << "Enter " << name << "'s salary: $";
    cin >> salary;
    
    //checks for valid input
    try
    {
        //sets the name and salary of newEmployee
        newEmployee.setName(name);
        newEmployee.setSalary(salary);
        
        //adds newEmployee to employeeList
        employeeList.insertFirst(newEmployee);
    }
    catch (string)
    {
        //prints error statement
        cout << "Invalid entry...try again\n";
        
        //clears console
        cin.clear();
        cin.ignore();
        
        //recalls the function
        createEmployeeList(employeeList);
    }
    catch (double)
    {
        //prints error statement
        cout << "Invalid entry...try again\n";
        
        //clears console
        cin.clear();
        cin.ignore();
        
        //recalls function
        createEmployeeList(employeeList);
    }
}