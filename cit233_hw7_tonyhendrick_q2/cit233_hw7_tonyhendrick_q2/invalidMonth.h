//
//  invalidMonth.h
//  cit233_hw7_tonyhendrick_q2
//
//  @ author Tony Hendrick
//  @version 4/20/15.
//

#ifndef __cit233_hw7_tonyhendrick_q2__invalidMonth__
#define __cit233_hw7_tonyhendrick_q2__invalidMonth__

#include <stdio.h>
#include <iostream>

using namespace std;

class invalidMonth
{
public:
    invalidMonth()
    {
        message = "Invalid day";
    }
    
    invalidMonth(string str)
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
#endif /* defined(__cit233_hw7_tonyhendrick_q2__invalidMonth__) */
