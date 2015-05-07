//
//  invalidYear.h
//  cit233_hw7_tonyhendrick_q2
//
//  @ author Tony Hendrick
//  @version 4/20/15.
//

#ifndef __cit233_hw7_tonyhendrick_q2__invalidYear__
#define __cit233_hw7_tonyhendrick_q2__invalidYear__

#include <stdio.h>
#include <iostream>

using namespace std;

class invalidYear
{
public:
    invalidYear()
    {
        message = "Invalid year";
    }
    
    invalidYear(string str)
    {
        message = str;
    }
    
    string what()
    {
        return message;
    }
    
private:
    string message;
    
};

#endif /* defined(__cit233_hw7_tonyhendrick_q2__invalidYear__) */
