//
//  employeeType.cpp
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 4/30/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include <iostream>
#include "employeeType.h"

using namespace std;

void employeeType::setName(string n) throw (string)
{
    if( !cin )
    {
        throw n;
    }
    else
    {
        name = n;
    }
}

void employeeType::setSalary(double s) throw (double)
{
    if( !cin )
    {
        throw s;
    }
    else
    {
        salary = s;
    }
}

string employeeType::getName() const
{
    return name;
}

double employeeType::getSalary() const
{
    return salary;
}

bool employeeType::checkName(string n)
{
    return (name == n);
}

employeeType::employeeType()
{
    name = "";
    salary = 0;
}

employeeType::employeeType(string n, double s) throw (string, double)
{
    this->setName(n);
    this->setSalary(s);
}