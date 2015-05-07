//
//  employeeListType.h
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 5/1/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw8_q3__employeeListType__
#define __cit233_hw8_q3__employeeListType__

#include <stdio.h>
#include "unorderedLinkedList.h"
#include "employeeType.h"

class employeeListType : public unorderedLinkedList
{
public:
    bool employeeSearch(string name) const;
    //Function to search for an employee
    //name to see if it exists in the list
    //Postcondition: returns true if the name
    //exists in the employeeList, returns false
    //if the name is not in the employeeList
    void printEmployeeInfo() const;
    //Function to print out the employee name
    //and salary using cout
    void sortNamesAlphabetically();
    //Function to sort the employees in the
    //employeeList based on their name in
    //ascending order (A-Z)
    double getAverageSalary();
    //Function to calculate the average salary
    //of all the employees in employeeList
    //Postcondition: returns the average salary
private:
    void searchEmployeeList(string name, bool &found, nodeType *&current) const;
    //Function searches the employee list for a particular
    //employee specified by the parameter name
    //Postcondition: If the employee is found the parameter found
    //is set to true, otherwise it is set to false, the parameter
    //current points to the node containing the video
};

#endif /* defined(__cit233_hw8_q3__employeeListType__) */
