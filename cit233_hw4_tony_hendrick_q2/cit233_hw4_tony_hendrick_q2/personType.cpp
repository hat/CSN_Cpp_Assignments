//
//  personType.cpp
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "personType.h"
#include <string>
#include <iostream>

using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}