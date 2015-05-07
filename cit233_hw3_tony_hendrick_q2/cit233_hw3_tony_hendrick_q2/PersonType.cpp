//
//  PersonType.cpp
//  cit233_hw3_tony_hendrick_q2
//
//  @author Tony Hendrick
//  @version 2/9/15
//
//  Must include "PersonType.h"
//

#include "PersonType.h"
#include <string> 
#include <iostream>

using namespace std;

void PersonType::print() const
{
    cout << firstName << " " << middleName << " " << lastName;
}

void PersonType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

void PersonType::setFirstName(string f)
{
    firstName = f;
}

void PersonType::setLastName(string l)
{
    lastName = l;
}

void PersonType::setMiddleName(string m)
{
    middleName = m;
}


string PersonType::getFirstName() const
{
    return firstName;
}

string PersonType::getLastName() const
{
    return lastName;
}

bool PersonType::compareFirstName(string fn)
{
    return fn == firstName;
    
}

bool PersonType::compareLastName(string ln)
{
    return ln == lastName;
}

//constructor
PersonType::PersonType(string first, string last)
{
    firstName = first;
    lastName = last;
}