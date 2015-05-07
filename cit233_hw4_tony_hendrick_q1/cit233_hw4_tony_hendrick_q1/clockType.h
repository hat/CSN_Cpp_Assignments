//
//  clockType.h
//  cit233_hw4_tony_hendrick_q1
//
//  @author Tony Hendrick
//  @version 3/2/15
//
//  This header file is for the class clockType
//

#ifndef __cit233_hw4_tony_hendrick_q1__clockType__
#define __cit233_hw4_tony_hendrick_q1__clockType__

#include <stdio.h>

class clockType
{
public:
    void setTime(int, int, int);
    //Function to set the hours, minutes, and seconds
    //according to the parameter
    void getTime(int&, int&, int&) const;
    //Function to set the hours, minutes,
    //and seconds
    void printTime() const;
    //Function to output the hours, minutes, and seconds
    void incrementSeconds();
    //Function to increase the seconds by one
    void incrementMinutes();
    //Function to increment the minutes by one
    void incrementHours();
    //Function to increment the hours by one
    bool equalTime(const clockType&) const;
    //Function to check if one clock object is the same
    //as another clock object
    //Post-condition: returns true if they are the same
    //or false if they are different
    
private:
    int hr; //variable to store the hour
    int min; //variable to store the minutes
    int sec; //variable to store the seconds
};

#endif /* defined(__cit233_hw4_tony_hendrick_q1__clockType__) */
