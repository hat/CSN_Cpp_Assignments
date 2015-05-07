//
//  doctorType.h
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw4_tony_hendrick_q2__doctorType__
#define __cit233_hw4_tony_hendrick_q2__doctorType__

#include <stdio.h>
#include <string>
#include "personType.h"

using namespace std;

class doctorType: public personType
{
public:
    void printDoctor() const;
    //Function to return the doctor's first name,
    //last name, and specialty;
    void setSpecialty(string s);
    //Function to set the specialty according to the
    //parameter
    string getSpecialty() const;
    //Function to return the specialty
    //Post-condition: The value of docSpecialty is
    //returned
    doctorType();
    //Constructor
    //Post-condition: docSpecialty = ""
    doctorType(string specialty);
    //Constructor
    //Sets the specialty
    //Post-condition: docSpecialty = specialty
    doctorType(string specialty, string first, string last);
    //Constructor
    //Sets the firstName, lastName, and specialty
    //Post-condition: firstName = first; lastName = last;
    //docSpecialty = specialty
private:
    string docSpecialty; //varable to store the doctor specialty
};

#endif /* defined(__cit233_hw4_tony_hendrick_q2__doctorType__) */
