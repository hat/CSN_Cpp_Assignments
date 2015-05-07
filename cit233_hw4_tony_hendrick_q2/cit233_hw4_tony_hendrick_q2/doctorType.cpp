//
//  doctorType.cpp
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "doctorType.h"
#include <iostream>

using namespace std;

void doctorType::printDoctor() const
{
    cout << "Name: " << this->getFirstName() << " " << this->getLastName();
    cout << "\nSpecialty: " << docSpecialty;
}

void doctorType::setSpecialty(string s)
{
    docSpecialty = s;
}

string doctorType::getSpecialty() const
{
    return docSpecialty;
}

doctorType::doctorType()
{
    docSpecialty = "";
}

doctorType::doctorType(string specialty)
{
    docSpecialty = specialty;
}

doctorType::doctorType(string specialty, string first, string last)
{
    this->setName(first, last);
    docSpecialty = specialty;
}