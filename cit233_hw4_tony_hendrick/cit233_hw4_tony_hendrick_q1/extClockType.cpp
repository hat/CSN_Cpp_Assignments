//
//  extClockType.cpp
//  cit233_hw4_tony_hendrick_q1
//
//  @author Tony Hendrick
//  @version 3/2/15
//
//  Must include "extClockType.h"
//

#include <iostream>
#include "extClockType.h"

using namespace std;


extClockType::extClockType()
{
    timeZoneAbbreviation = "";
    timeZoneUTCOffsetHours = 00;
    timeZoneUTCOffsetMins = 00;
}
extClockType::extClockType(string tzA)
{
    timeZoneAbbreviation = tzA;
}

extClockType::extClockType(int tZOH, int tZOM)
{
    timeZoneUTCOffsetHours = tZOH;
    timeZoneUTCOffsetMins = tZOM;
}

extClockType::extClockType(string tZA, int tZOH, int tZOM)
{
    timeZoneAbbreviation = tZA;
    timeZoneUTCOffsetHours = tZOH;
    timeZoneUTCOffsetMins = tZOM;
}

void extClockType::setTimeZoneAbbreviation(string tZ)
{
    timeZoneAbbreviation = tZ;
}

void extClockType::setTimeZoneUTCOffsetHours(int utcOH)
{
    timeZoneUTCOffsetHours = utcOH;
}

void extClockType::setTimeZoneUTCOffsetMins(int utcOM)
{
    timeZoneUTCOffsetMins = utcOM;
}

void extClockType::printTimeZone() const
{
    cout << "Time zone abbreviation: " << timeZoneAbbreviation;
    cout << endl;
    
    cout << "UTC offset: ";
    cout << "hours = ";
    if (timeZoneUTCOffsetHours < 10 && timeZoneUTCOffsetHours > 0)
        cout << "0";
    cout << timeZoneUTCOffsetHours << ", ";
    cout << "minutes = ";
    if (timeZoneUTCOffsetMins < 10)
        cout << "0";
    cout << timeZoneUTCOffsetMins;
}

void extClockType::printTimeZoneAbbreviation() const
{
    cout << timeZoneAbbreviation;
}

void extClockType::printTimeZoneUTCOffset() const
{
    cout << "hours = ";
    if (timeZoneUTCOffsetHours < 10 && timeZoneUTCOffsetHours > 0)
        cout << "0";
    cout << timeZoneUTCOffsetHours << ", ";
    cout << "minutes = ";
    if (timeZoneUTCOffsetMins < 10)
        cout << "0";
     cout << timeZoneUTCOffsetMins;
}


