//
//  birthdayType.cpp
//  cit233_hw7_tonyhendrick_q2
//
//  @ author Tony Hendrick
//  @version 4/20/15.
//

#include "birthdayType.h"
#include "invalidDay.h"
#include "invalidMonth.h"
#include "invalidYear.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& osObject, const birthdayType& birthday)
{
    string monthString;
    
    switch (birthday.birthMonth) {
        case 1:
            monthString = "January";
            break;
        case 2:
            monthString = "February";
            break;
        case 3:
            monthString = "March";
            break;
        case 4:
            monthString = "April";
            break;
        case 5:
            monthString = "May";
            break;
        case 6:
            monthString = "June";
            break;
        case 7:
            monthString = "July";
            break;
        case 8:
            monthString = "August";
            break;
        case 9:
            monthString = "September";
            break;
        case 10:
            monthString = "October";
            break;
        case 11:
            monthString = "November";
            break;
        case 12:
            monthString = "December";
            break;
            
        default:
            monthString = "January";
            break;
    }
    
    osObject << monthString << " " << birthday.birthDay << ", " << birthday.birthYear;
    
    return osObject;
}

void birthdayType::setBirthday(int month, int day, int year) throw(invalidDay, invalidMonth, invalidYear)
{
    string cinErrorString = "Day, Month, or Year has an invalid value...Setting all values to zero.";
    
    try
    {
        birthDay = day;
        birthMonth = month;
        birthYear = year;
        
        if( !cin )
        {
            throw cinErrorString;
        }
        
        if( (day < 1 || day > 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
        {
            throw invalidDay("Invalid day, valid only 1 - 31. Setting all values to one.");
        }
        
        if( (day < 1 || day > 30) && (month == 4 || month == 6 || month == 9 || month == 11))
        {
            throw invalidDay("Invalid day, valid only 1 - 30. Setting all values to one.");
        }
        
        if( (day < 1 || day > 28) && (month == 2) && (year % 4 != 0) )
        {
            throw invalidDay("Invalid day, valid only 1 - 28. Setting all values to one.");
        }
        
        if( (day < 1 || day > 29) && (month == 2) && (year % 4 == 0) )
        {
            throw invalidDay("Invalid day, valid only 1 - 29. Setting all values to one.");
        }
        
        if( birthMonth < 1 || birthMonth > 12 )
        {
            throw invalidMonth("Invalid month, valid only 1 - 12. Setting all values to one.");
        }
        if( birthYear <= 0 )
        {
            throw invalidYear("Invalid year, year must be non-negative. Setting all values to one.");
        }
    }
    catch(string s)
    {
        cout << cinErrorString << '\n';
        birthDay = 1;
        birthMonth = 1;
        birthYear = 1;
        
        cin.clear();
        cin.ignore();
    }
    catch (invalidDay iD)
    {
        birthDay = 1;
        birthMonth = 1;
        birthYear = 1;
        throw invalidDay(iD.what());
    }
    catch (invalidMonth iD)
    {
        birthDay = 1;
        birthMonth = 1;
        birthYear = 1;
        throw invalidMonth(iD.what());
    }
    catch(invalidYear iY)
    {
        birthDay = 1;
        birthMonth = 1;
        birthYear = 1;
        throw invalidYear(iY.what());
    }
}

birthdayType::birthdayType()
{
    birthDay = 1;
    birthMonth = 1;
    birthYear = 2000;
}

birthdayType::birthdayType(int month, int day, int year)
{
    string cinErrorString = "Day, Month, or Year has an invalid value...";
    
    try
    {
        birthDay = day;
        birthMonth = month;
        birthYear = year;
        
        if( !cin )
        {
            throw cinErrorString;
        }
        
        if( (day < 1 || day > 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
        {
            throw invalidDay("Invalid day, valid only 1 - 31.");
        }
        
        if( (day < 1 || day > 30) && (month == 4 || month == 6 || month == 9 || month == 11))
        {
            throw invalidDay("Invalid day, valid only 1 - 30.");
        }
        
        if( (day < 1 || day > 28) && (month == 2) && (year % 4 != 0) )
        {
            throw invalidDay("Invalid day, valid only 1 - 28.");
        }
        
        if( (day < 1 || day > 29) && (month == 2) && (year % 4 == 0) )
        {
            throw invalidDay("Invalid day, valid only 1 - 29.");
        }
        
        if( birthMonth < 1 || birthMonth > 12 )
        {
            throw invalidMonth("Invalid month, valid only 1 - 12.");
        }
        if( birthYear <= 0 )
        {
            throw invalidYear("Invalid year, year must be non-negative.");
        }
    }
    catch(string s)
    {
        cout << cinErrorString << '\n';
        birthDay = 1;
        birthMonth = 1;
        birthYear = 1;
        
        cin.clear();
        cin.ignore();
    }
    catch(invalidDay invalidDayObj)
    {
        birthDay = 1;
    }
    catch(invalidMonth invalidMonthObj)
    {
        birthMonth = 1;
    }
    catch(invalidYear invalidYearObj)
    {
        birthYear = 1;
    }
}