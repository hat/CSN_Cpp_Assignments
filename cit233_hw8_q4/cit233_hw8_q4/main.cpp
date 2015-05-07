//
//  main.cpp
//  cit233_hw8_q4
//
//  @author Tony Hendrick
//  @version 5/4/15
//
//  This program tests the orderedLinkedList class
//  and allows the user to add, find, and delete
//  the numbers in the orderedLinkedList
//

#include <iostream>
#include "linkedListType.h"
#include "linkedListIterator.h"
#include "nodeType.h"
#include "orderedListType.h"

using namespace std;

int displayMenu();
void navigateMenu(int selection, orderedLinkedList &list1, orderedLinkedList &list2);

int main()
{
    orderedLinkedList list1; //linked list to store numbers
    orderedLinkedList list2; //linked list to store numbers
    int selection = 1; //selection to call functions
    
    while( selection != 0 )
    {
        //calls displayMenu function
        selection = displayMenu();
        
        //calls navigateMenu function
        navigateMenu(selection, list1, list2);
    }
    
    //ends program
    return 0;
}//end main

//
// @brief Function to display menu and program title
//
int displayMenu()
{
    int selection;
    
    cout << "----------------------------\n";
    cout << "|   Testing Linked Lists   |\n";
    cout << "----------------------------\n";
    
    cout << "\n1) Fill linkedList with numbers\n";
    cout << "2) Set list2 equal to list1\n";
    cout << "3) Delete number\n";
    cout << "4) Search for number\n";
    cout << "5) Search for element\n";
    cout << "6) Delete element\n";
    cout << "7) Print list1\n";
    cout << "8) Print list2\n";
    cout << "0) Exit\n";
    
    try
    {
        cin >> selection;
        
        if( !cin )
        {
            throw selection;
        }
        else if( selection < 0 || selection > 8 )
        {
            throw selection;
        }
    }
    catch (int)
    {
        cin.clear();
        cin.ignore();
        
        selection = displayMenu();
    }
    
    return selection;
}//end displayMenu

// @brief Function to call upon other functions and
//        manipulate orderedLinkedLists
//
// @param selection the switch statement variable
// @param list1 orderedLinkedList
// @param list2 orderedLinkedList
//
void navigateMenu(int selection, orderedLinkedList &list1, orderedLinkedList &list2)
{
    int num; //user entered number
    
    switch (selection)
    {
        case 1:
            //gets the numbers to add to the linked list
            cout << "Enter numbers ending "
            << "with -999." << endl;
            cin >> num;
            
            //adds the numbers to the linked list
            while (num != -999)
            {
                list1.insert(num);
                cin >> num;
            }
            break;
            
        case 2:
            //sets list2 equal to list1
            list2 = list1;
            break;
            
        case 3:
            //gets the number to delete from list2
            cout << "Enter the number to be "
            << "deleted: ";
            cin >> num;
            
            //prints newline
            cout << endl;
            
            //deletes the number from list2
            list2.deleteNode(num);
            break;
            
        case 4:
            //gets the number to search for
            cout << "Enter the number to search for: ";
            cin >> num;
            
            //searches the list for the index paramter
            cout << "Search is: " << list1.search(num) << endl;
            break;
            
        case 5:
            try
            {
                //gets the element to search for
                cout << "Enter the element to search for (0...): ";
                cin >> num;
                //prints out the element that was found
                cout << "Get element is: " << list2.getElement(num) << endl;
            }
            catch (int)
            {
                cout << "\nInvalid element...\n";
            }
            //gets the element to search for
            cout << "Enter the element to search for (0...): ";
            cin >> num;
            //prints out the element that was found
            cout << "Get element is: " << list2.getElement(num) << endl;
            break;
            
        case 6:
            try
            {
                //gets the element to delete
                cout << "Enter the element to delete (0...): ";
                cin >> num;
                
                //deletes the element
                list2.deleteElement(num);
            }
            catch (int)
            {
                cout << "\nInvalid element...\n";
            }
            break;
            
        case 7:
            //prints out list1
            cout << "list1: ";
            list1.print();
            cout << endl;
            break;
            
        case 8:
            //prints out list2
            cout << "list2: ";
            list2.print();
            cout << endl;
            
        default:
            break;
    }
}//end navigateMenu
