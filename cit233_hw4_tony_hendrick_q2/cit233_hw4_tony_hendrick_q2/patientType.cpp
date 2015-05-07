//
//  patientType.cpp
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "patientType.h"
#include "personType.h"
#include "doctorType.h"
#include "dateType.h"
#include <iostream>

using namespace std;

void patientType::printPatient() const
{    
    cout << "ID: " << patientID;
    cout << endl;
    cout << "Age: " << patientAge;
    cout << endl;
    cout << "Attending Physician: \n";
    attendingPhysician.printDoctor();
    cout << endl;
    cout << "Birth Date: " << birthDate.getDay() << "-" << birthDate.getMonth() << "-" << birthDate.getYear();
    cout << endl;
    cout << "Admit Date: " << admitDate.getDay() << "-" << admitDate.getMonth() << "-" << admitDate.getYear();
    cout << endl;
    cout << "Discharge Date: " << dischargeDate.getDay() << "-" << dischargeDate.getMonth() << "-" << dischargeDate.getYear();
    cout << endl;
}

void patientType::setPatientID(int pID)
{
    patientID = pID;
}

int patientType::getPatientID() const
{
    return patientID;
}

void patientType::setAge(int age)
{
    patientAge = age;
}

int patientType::getAge() const
{
    return patientAge;
}

void patientType::setBirthDate(int bDay, int bMonth, int bYear)
{
    birthDate.setDate(bMonth, bDay, bYear);
}

void patientType::printBirthDate() const
{
    birthDate.printDate();
}

void patientType::setAdmitDate(int aDay, int aMonth, int aYear)
{
    admitDate.setDate(aMonth, aDay, aYear);
}

void patientType::printAdmitDate() const
{
    admitDate.printDate();
}

void patientType::setDischargeDate(int dDay, int dMonth, int dYear)
{
    dischargeDate.setDate(dMonth, dDay, dYear);
}

void patientType::printDischargeDate() const
{
    dischargeDate.printDate();
}

void patientType::setAttendingPhysician(string first, string last, string specialty)
{
    attendingPhysician.setName(first, last);
    attendingPhysician.setSpecialty(specialty);
}

void patientType::printAttendingPhysician() const
{
    attendingPhysician.printDoctor();
}

patientType::patientType()
{
    patientID = 0;
    patientAge = 0;
}

patientType::patientType(int pID)
{
    patientID = pID;
}

patientType::patientType(int pID, int age)
{
    patientID = pID;
    patientAge = age;
}

patientType::patientType(int pID, int age, int bDay, int bMonth, int bYear) : birthDate(bDay, bMonth, bYear)
{
    patientID = pID;
    patientAge = age;
}

patientType::patientType(int pID, int age, int bDay, int bMonth, int bYear, int aDay, int aMonth, int aYear) : birthDate(bDay, bMonth, bYear), admitDate(aDay, aMonth, aYear)
{
    patientID = pID;
    patientAge = age;
}

patientType::patientType(int pID, int age, int bDay, int bMonth, int bYear, int aDay, int aMonth, int aYear, int dDay, int dMonth, int dYear) : birthDate(bDay, bMonth, bYear), admitDate(aDay, aMonth, aYear), dischargeDate(dDay, dMonth, dYear)
{
    patientID = pID;
    patientAge = age;
}

patientType::patientType(int pID, int age, int bDay, int bMonth, int bYear, int aDay, int aMonth, int aYear, int dDay, int dMonth, int dYear, string physicianFirstName, string physicianLastName, string specialty) : birthDate(bDay, bMonth, bYear), admitDate(aDay, aMonth, aYear), dischargeDate(dDay, dMonth, dYear), attendingPhysician(physicianFirstName, physicianLastName, specialty)
{
    patientID = pID;
    patientAge = age;
}