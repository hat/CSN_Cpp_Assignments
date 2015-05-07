//
//  billType.cpp
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "billType.h"
#include <string>
#include <iostream>

using namespace std;

void billType::printBill() const
{
    cout << "Patient ID: " << getPatientID();
    cout << endl;
    cout << "Medicine charge: " << getMedicineCharge();
    cout << endl;
    cout << "Doctor charge: " << getDoctorCharge();
    cout << endl;
    cout << "Room charge: " << getRoomCharge();
    cout << endl;
    cout << "Total charge: " << getTotalCharge();
    cout << endl;
}

void billType::setPatientID(int pID)
{
    patientID = pID;
}

int billType::getPatientID() const
{
    return patientID;
}

void billType::setMedicineCharge(double mC)
{
    medicineCharge = mC;
}

double billType::getMedicineCharge() const
{
    return medicineCharge;
}

void billType::setDoctorCharge(double dC)
{
    doctorCharge = dC;
}

double billType::getDoctorCharge() const
{
    return doctorCharge;
}

void billType::setRoomCharge(double rC)
{
    roomCharge = rC;
}

double billType::getRoomCharge() const
{
    return roomCharge;
}

double billType::getTotalCharge() const
{
    return medicineCharge + doctorCharge + roomCharge;
}

billType::billType()
{
    patientID = 0;
    medicineCharge = 0;
    doctorCharge = 0;
    roomCharge = 0;
}

billType::billType(int pID)
{
    patientID = pID;
    medicineCharge = 0;
    doctorCharge = 0;
    roomCharge = 0;
}

billType::billType(int pID, double mC)
{
    patientID = pID;
    medicineCharge = mC;
    doctorCharge = 0;
    roomCharge = 0;
}

billType::billType(int pID, double mC, double dC)
{
    patientID = pID;
    medicineCharge = mC;
    doctorCharge = dC;
    roomCharge = 0;
}

billType::billType(int pID, double mC, double dC, double rC)
{
    patientID = pID;
    medicineCharge = mC;
    doctorCharge = dC;
    roomCharge = rC;
}