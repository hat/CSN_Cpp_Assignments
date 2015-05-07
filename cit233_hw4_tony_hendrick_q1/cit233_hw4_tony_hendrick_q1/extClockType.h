//
//  extClockType.h
//  cit233_hw4_tony_hendrick_q1
//
//  @author Tony Hendrick
//  @version 3/2/15
//
//  This header file is for the class extClockType extending from clockType
//  Must include "clockType.h"
//

#ifndef __cit233_hw4_tony_hendrick_q1__extClockType__
#define __cit233_hw4_tony_hendrick_q1__extClockType__

#include <stdio.h>
#include <iomanip>
#include "clockType.h"

using namespace std;

class extClockType: public clockType
{
public:
    void printTimeZone() const;
    //Function to output the time zone abbreviation and the utc offset
    //in hours and minutes
    void setTimeZoneAbbreviation(string);
    //Function to set the time zone abbreviation according
    //to the parameter
    void printTimeZoneAbbreviation() const;
    //Function to output the time zone abbreviation
    void setTimeZoneUTCOffsetHours(int);
    //Function to output the utc offset in hours
    void setTimeZoneUTCOffsetMins(int);
    //Function to output the utc offset in minutes
    void printTimeZoneUTCOffset() const;
    //Function to print the utc offset hours and minutes
    extClockType();
    //Constructor
    //Sets the time zone abbreviation to "", hours to 0,
    //and minutes to 0
    //Post-condition: timeZoneAbbreviation = "";
    //timeZoneUTCOffsetHours = 0;
    //timeZoneUTCOffsetMins = 0.
    extClockType(string tzA);
    //Constructor
    //Sets the time zone abbreviation according to the
    //parameter
    //Post-Condition: timeZoneAbbreviation = tzA.
    extClockType(int tZOH, int tZOM);
    //Constructor
    //Sets the utc offset hours and the utc offset minutes
    //Post-Condition: timeZoneUTCOffsetHours = tZOH;
    //timeZoneUTCOffsetMins = tZOM.
    extClockType(string tzA, int tZOH, int tZOM);
    //Constructor
    //Sets the time zone abbreviation, utc offset hours,
    //and utc offset minutes
    //Post-Condition: timeZoneAbbreviation = tzA;
    //timeZoneUTCOffsetHours - tZOH;
    //timeZoneOffsetMins = tZOM.
private:
    string timeZoneAbbreviation; //variable to store the time zone abbreviation
    int timeZoneUTCOffsetHours; //variable to store the UTC offset hours
    int timeZoneUTCOffsetMins; //variable to store the UFC offset minutes
};

#endif /* defined(__cit233_hw4_tony_hendrick_q1__extClockType__) */
