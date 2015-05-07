//
//  billType.h
//  cit233_hw4_tony_hendrick_q2
//
//  Created by Tony Hendrick on 2/16/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw4_tony_hendrick_q2__billType__
#define __cit233_hw4_tony_hendrick_q2__billType__

#include <stdio.h>
#include <string>

using namespace std;

class billType
{
public:
    void printBill() const;
    //Function to output the patientID, medicineCharge,
    //doctorCharge, and roomCharge
    void setPatientID(int pID);
    //Function to set the patientID according to
    //the parameter
    int getPatientID() const;
    //Function to return the patient id
    //Post-condition: The value of patientID is returned.
    void setMedicineCharge(double mC);
    //Function to set the medicineCharge according
    //to the parameter
    double getMedicineCharge() const;
    //Function to return the doctor charge
    //Post-condition: The value of the medicineCharge is
    //returned.
    void setDoctorCharge(double dC);
    //Function to set the doctor charge according to
    //the parameter
    double getDoctorCharge() const;
    //Function to return the doctor charge
    //Post-condition: The value of doctorCharge
    //is returned.
    void setRoomCharge(double rC);
    //Function to set the room charge according
    //to the parameter
    double getRoomCharge() const;
    //Function to return the room charge
    //Post-condition: The value of roomCharge
    //is returned
    double getTotalCharge() const;
    //Function to add all the charges together
    //and return the sum
    //Post-condition: The value of
    //medicineCharge + doctorCharge + roomCharge
    //is returned.
    billType();
    //Constructor
    //Sets the values to default
    //Post-condition: patientID = 0; medicineCharge = 0;
    //doctorCharge = 0; roomCharge = 0.
    billType(int pID);
    //Constructor
    //Sets the patientID
    //Post-condition: patientID = pID.
    billType(int pID, double mC);
    //Constructor
    //Sets the patientID and medicineCharge
    //Post-condiditon: patientID = pID; medicineCharge = mC.
    billType(int pID, double mC, double dC);
    //Constructor
    //Sets the patientID, medicineCharge, and doctorCharge
    //Post-condition: patientID = pID; medicineCharge = mC;
    //doctorCharge = dC.
    billType(int pID, double mC, double dC, double rC);
    //Constructor
    //Sets the patientID, medicineCharge, doctorCharge, and room charge.
    //Post-condition: patientID = pID; medicineCharge = mC;
    //doctorCharge = dC; roomCharge = rC.
private:
    int patientID; //variable to set the patient id
    double medicineCharge; //variable to set the medicine charge
    double doctorCharge; //variable to set the doctor charge
    double roomCharge; //variable to set the room charge
};

#endif /* defined(__cit233_hw4_tony_hendrick_q2__billType__) */
