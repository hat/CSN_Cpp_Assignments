//
//  patientType.h
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw4_tony_hendrick_q2__patientType__
#define __cit233_hw4_tony_hendrick_q2__patientType__

#include <stdio.h>
#include "personType.h"
#include "dateType.h"
#include "doctorType.h"

class patientType: public personType
{
public:
    void printPatient() const;
    //Function to output the patientID, patientAge, birthDate, admitDate
    //dischargeDate, and attendingPhysicianName
    void setPatientID(int pID);
    //Function to set the patientID according to the parameter
    int getPatientID() const;
    //Function to return the patientID
    //Post-condition: The value of patientID is returned
    void setAge(int age);
    //Function to set the age according to the parameter
    int getAge() const;
    //Function to return the age
    //Post-condition: The value of patientAge is returned
    void setBirthDate(int bDay, int bMonth, int bYear);
    //Function to set the birth date according to the parameter
    void printBirthDate() const;
    //Function to print the birth date
    void setAdmitDate(int aDay, int aMonth, int aYear);
    //Function to set the admit date according to the parameter
    void printAdmitDate() const;
    //Function to print the admit date
    void setDischargeDate(int dDay, int dMonth, int dYear);
    //Function to set the discharge date according to the parameter
    void printDischargeDate() const;
    //Function to print the discharge date
    void setAttendingPhysician(string first, string last, string specialty);
    //Function to set the attending physician's name according to the parameters
    void printAttendingPhysician() const;
    //Function to print the attending physician's name
    patientType();
    //Constructor
    //Sets all the values as default.
    //Post-condition: patientID = 0; patientAge = 0; birthDate, admitDate, and dischargeDate
    //are set to dateType default; attendingPhysician is set to doctorType default.
    patientType(int pID);
    //Constructor
    //Sets the patient identification number.
    //Post-condition: patientID = pID.
    patientType(int pID, int age);
    //Constructor
    //Sets the patient identification number as well as their age.
    //Post-condition: patientID = pID; patientAge = age.
    patientType(int pID, int age, int bDay, int bMonth, int bYear);
    //Constructor
    //Sets the patient identification number, age, and birth day.
    //Post-condition: patientID = pID; patientAge = age; birthDate = dateType(bDay, bMonth, bYear).
    patientType(int pID, int age, int bDay, int bMonth, int bYear, int aDay, int aMonth, int aYear);
    //Constructor
    //Sets the patient identification number, age, birth day, and admit date.
    //Post-condition: patientID = pID; patientAge = age; birthDate = dateType(bDay, bMonth, bYear);
    //admitDate = dateType(aDay, aMonth, aYear).
    patientType(int pID, int age, int bDay, int bMonth, int bYear, int aDay, int aMonth, int aYear, int dDay, int dMonth, int dYear);
    //Constructor
    //Sets the patient identification number, age, birth day, admit date, and discharge date.
    //Post-condition: patientID = pID; patientAge = age; birthDate = dateType(bDay, bMonth, bYear);
    //admitDate = dateType(aDay, aMonth, aYear); dischargeDate = dateType(dDay, dMonth, dYear);
    patientType(int pID, int age, int bDay, int bMonth, int bYear, int aDay, int aMonth, int aYear, int dDay, int dMonth, int dYear, string first, string last, string specialty);
    //Constructor
    //Sets the patient identification number, age, birth day, and admit date, and attending Physician.
    //Post-condition: patientID = pID; patientAge = age; birthDate = dateType(bDay, bMonth, bYear);
    //admitDate = dateType(aDay, aMonth, aYear); attendingPhysician = doctorType(first, last, specialty).
private:
    int patientID; //variable to store the patient identification number
    int patientAge; //variable to store the patient age
    dateType birthDate; //variable to store the patient birth date
    dateType admitDate; //variable to store the patient admit date
    dateType dischargeDate; //variable to store the patient discharge date
    doctorType attendingPhysician; //variable to store the attending physician
};

#endif /* defined(__cit233_hw4_tony_hendrick_q2__patientType__) */
