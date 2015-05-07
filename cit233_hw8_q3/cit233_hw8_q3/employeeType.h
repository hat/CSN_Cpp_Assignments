//
//  employeeType.h
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 4/30/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw8_q3__employeeType__
#define __cit233_hw8_q3__employeeType__

#include <iostream>
#include <stdio.h>

using namespace  std;

class employeeType
{
public:
    void setName(string n) throw (string);
    //Function to set the name of the employee
    //according to the parameter
    //Postcondition: name = n
    void setSalary(double s) throw (double);
    //Function to set the salary of the employee
    //according to the parameter
    //Postcondition: salary = s;
    string getName() const;
    //Function to return the name of
    //the employee
    //Postcondition: name is returned
    double getSalary() const;
    //Function to return the salary
    //of the employee
    //Postcondition: salar is returned
    bool checkName(string n);
    //Function to see if the parameter is equal
    //to the name of the employee
    //Postcondition: returns trye if n = name;
    //returns false if n is not the same as name
    employeeType();
    //Default Constructor
    //Initializes the employee to the empty state
    //Postcondition: name = "", salary = 0;
    employeeType(string n, double s) throw (string, double);
    //Constructor to set all private variables
    //Postcondition: name = n; salary = s;
private:
    string name; //stores the name of the employee
    double salary; //stores the salary of the employee
};

#endif /* defined(__cit233_hw8_q3__employeeType__) */
