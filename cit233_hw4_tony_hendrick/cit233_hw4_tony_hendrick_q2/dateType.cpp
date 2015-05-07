//
//  dateType.cpp
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "dateType.h"
#include <iostream>

using namespace std;

void dateType::setDate(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

void dateType::printDate() const
{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

    //Constructor with parameters
dateType::dateType(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}