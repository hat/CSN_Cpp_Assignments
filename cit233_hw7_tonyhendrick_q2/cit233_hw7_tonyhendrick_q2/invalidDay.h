//
//  invalidDay.h
//  cit233_hw7_tonyhendrick_q2
//
//  @ author Tony Hendrick
//  @version 4/20/15.
//

#ifndef __cit233_hw7_tonyhendrick_q2__invalidDay__
#define __cit233_hw7_tonyhendrick_q2__invalidDay__

#include <stdio.h>
#include <iostream>

using namespace std;

class invalidDay
{
public:
    invalidDay()
    {
        message = "Invalid day";
    }
    
    invalidDay(string str)
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

#endif /* defined(__cit233_hw7_tonyhendrick_q2__invalidDay__) */
