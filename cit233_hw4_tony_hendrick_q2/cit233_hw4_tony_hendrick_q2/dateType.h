//
//  dateType.h
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw4_tony_hendrick_q2__dateType__
#define __cit233_hw4_tony_hendrick_q2__dateType__

#include <stdio.h>

class dateType
{
public:
    void setDate(int month, int day, int year);
    //Function to set the date
    //The member variables dMonth, dDay, and dYear are set
    //according to the parameters
    //Postcondition: dMonth = month; dDay = day;
    //dYear = year
    
    int getDay() const;
    //Function to return the day
    //Postcondition: The value of dDay is returned
    
    int getMonth() const;
    //Function to return the year
    //Postcondition: the value of dMonth is returned
    
    int getYear() const;
    //Function to return the year
    //Postcondition: the value of dYear is returned
    
    void printDate() const;
    //Function to output the date in the form mm-dd-yyyy
    
    dateType(int month = 1, int day = 1, int year = 1900);
    //Constructor to set the data
    //The member variables dMonth, dDay, dYear are set
    //according to the parameters
    //Postcondition: dMonth = month; dDay = day; dYear = year;
    //      If no values are specified the default values are
    //      used to initialize the member variables
private:
    int dMonth; //variable to store the month
    int dDay; //variable to store the day
    int dYear; //variable to store the year
};

#endif /* defined(__cit233_hw4_tony_hendrick_q2__dateType__) */
