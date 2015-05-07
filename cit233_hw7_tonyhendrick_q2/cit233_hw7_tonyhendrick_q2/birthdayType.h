//
//  birthdayType.h
//  cit233_hw7_tonyhendrick_q2
//
//  @ author Tony Hendrick
//  @version 4/20/15.
//

#ifndef __cit233_hw7_tonyhendrick_q2__birthdayType__
#define __cit233_hw7_tonyhendrick_q2__birthdayType__

#include <stdio.h>
#include <iostream>
#include "invalidDay.h"
#include "invalidMonth.h"
#include "invalidYear.h"

using namespace std;

class birthdayType
{
    friend ostream& operator<<(ostream&, const birthdayType &);
    
public:
    void setBirthday(int day, int month, int year) throw (invalidDay, invalidMonth, invalidYear);
    birthdayType();
    birthdayType(int day, int month, int year);
private:
    int birthDay;
    int birthMonth;
    int birthYear;
};

#endif /* defined(__cit233_hw7_tonyhendrick_q2__birthdayType__) */
