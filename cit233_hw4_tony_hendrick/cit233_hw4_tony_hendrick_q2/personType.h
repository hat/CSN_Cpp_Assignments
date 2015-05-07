//
//  personType.h
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw4_tony_hendrick_q2__personType__
#define __cit233_hw4_tony_hendrick_q2__personType__

#include <stdio.h>
#include <string>

using namespace std;

class personType
{
public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName
    
    void setName(string first, string last);
    //Function to set firstName and lastName according
    //to the parameters.
    //Postcondition: firstName = first; lastName = last;
    
    string getFirstName() const;
    //Function to return the first name
    //Postcondition: The value of firstName is returned
    
    string getLastName() const;
    //Function to return the last name
    //Postcondition: The value of lastName is returned
    
    personType(string first = "", string last = "");
    //Constructor
    //Sets the firstName and lastName according to the parameters
    //The default values of the parameters are null strings
    //Postcondition: firstName = first; lastName = last;
    
private:
    string firstName; //variable to store the first name
    string lastName; //variable to store the last name
};

#endif /* defined(__cit233_hw4_tony_hendrick_q2__personType__) */
