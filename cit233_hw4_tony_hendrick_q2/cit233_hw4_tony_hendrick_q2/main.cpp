//
//  main.cpp
//  cit233_hw4_tony_hendrick_q2
//
//  @author Tony Hendrick
//  @version 3/2/15
//
//  This program uses the personType, doctorType, billType,
//  and patientType class files and tests their methods.
//
//

#include <iostream>
#include "personType.h"
#include "doctorType.h"
#include "billType.h"
#include "patientType.h"

using namespace std;

//Declares const
const int QUIT_MENU = 4;

int menu();
void personTypeTest();
void doctorTypeTest();
void billTypeTest();
void patientTypeTest();

int main(int argc, const char * argv[]) {
    
    //Declares int variable
    int menuSelection = 0;
    
    //Loop to run until menu is exited
    while(menuSelection != QUIT_MENU)
    {
        switch (menuSelection = menu())
        {
            case 1:
                doctorTypeTest();
                break;
            
            case 2:
                billTypeTest();
                break;
                
            case 3:
                patientTypeTest();
                break;
                
            case 4:
                //Do nothing
                break;
            
            default:
                cout << "Error: Must enter a number 1-4.";
                break;
        }
    }
    
    //end program
    return 0;
}

int menu()
{
    int selected = 0;
    
    cout << "||||Hospital Billing System||||\n";
    
    cout << "1) Test the doctorType class\n";
    cout << "2) Test the billType class\n";
    cout << "3) Test the patientType class\n";
    cout << "4) Exit\n";
    
    cin >> selected;
    
    return selected;
}

void doctorTypeTest()
{
    //Declares doctorType objects
    doctorType testDoctorOne;
    doctorType testDoctorTwo("Pediatrician");
    doctorType testDoctorThree("Nuerosurgeon", "John", "Doe");
    
    //Declares string variable
    string docSpecialty;
    
    //Prints break to help legibility
    cout << "|||DOCTOR TYPE|||" << endl;
    
    //Sets the name of testDoctorOne
    testDoctorOne.setName("Frank", "Stein");
    
    //Prints out testDoctorOne
    cout << "First test doctor: \n";
    testDoctorOne.print();
    cout << endl;
    cout << "Specialty: " << testDoctorOne.getSpecialty();
    cout << endl;
    
    cout << "Second test doctor: \n";
    
    //Prints out testDoctorTwo
    cout << testDoctorTwo.getSpecialty();
    cout << endl;
    
    cout << "Third test doctor: \n";
    
    //Prints out testDoctorThree
    testDoctorThree.printDoctor();
    cout << endl;
    
    //Changes the specialty of test doctor one
    cout << "Enter a specialty: ";
    cin.ignore();
    getline(cin, docSpecialty);
    
    //Prints out updated testDoctorOne
    testDoctorOne.setSpecialty(docSpecialty);
    
    //Prints out testDoctorOne info
    testDoctorOne.print();
    cout << endl;
    cout << testDoctorOne.getSpecialty();
    cout << endl;
}

void billTypeTest()
{
    //Declares billType objects
    billType firstTestBill;
    billType secondTestBill(101444);
    billType thirdTestBill(100677, 80);
    billType fourthTestBill(100899, 90, 100);
    billType fifthTestBill(10100, 40, 300, 250);
    
    //Declares int variable
    int id;
    
    //Declares double variables
    double medCharge;
    double roomCharge;
    double doctorCharge;
    
    //Prints break to help legibility
    cout << "||BILL TYPE|||" << endl;
    
    //Prints out the different billType objects
    cout << "First bill: \n";
    firstTestBill.printBill();
    
    cout << "Second bill: \n";
    secondTestBill.printBill();
    
    cout << "Third bill: \n";
    thirdTestBill.printBill();
    
    cout << "Fourth bill: \n";
    fourthTestBill.printBill();
    
    cout << "Fifth bill: \n";
    fifthTestBill.printBill();
    
    //Gets the id, medCharge, roomCharge, and doctor charge from user input
    cout << "User generated bill: \n";
    cout << "Enter the patient id: ";
    cin >> id;
    cout << "Enter the medicine charge, room charge, and doctor charge: ";
    cin >> medCharge >> roomCharge >> doctorCharge;
    
    //Sets the id, medCharge, roomCharge, and doctorCharge
    fifthTestBill.setPatientID(id);
    fifthTestBill.setMedicineCharge(medCharge);
    fifthTestBill.setRoomCharge(roomCharge);
    fifthTestBill.setDoctorCharge(doctorCharge);
    
    //Prints out fifthTestBill info
    cout << "Patient ID:" << fifthTestBill.getPatientID() << "\nMedicine Charge: " << fifthTestBill.getMedicineCharge() << "\nRoom Charge: " << fifthTestBill.getRoomCharge() << "\nDoctor Charge: " << fifthTestBill.getDoctorCharge() << "\nTotal Charge: " << fifthTestBill.getTotalCharge();
    cout << endl;
}

void patientTypeTest()
{
    //Declares patientType objects
    patientType testPatientOne;
    patientType testPatientTwo(100678);
    patientType testPatientThree(119982, 35);
    patientType testPatientFour(186554, 24, 6, 12, 1999);
    patientType testPatientFive(11282, 56, 12, 5, 1958, 3, 8, 2015);
    patientType testPatientSix(112321, 40, 9, 17, 1972, 3, 9, 2015, 3, 12, 2015);
    patientType testPatientSeven(12345, 25, 3, 18, 1960, 3, 10, 2015, 3, 15, 2015, "Surgeon", "John", "Doe");
    
    //Declares int variables
    int pSevenID;
    int pSevenAge;
    int pSevenBDay;
    int pSevenBMonth;
    int pSevenBYear;
    int pSevenADay;
    int pSevenAMonth;
    int pSevenAYear;
    int pSevenDDay;
    int pSevenDMonth;
    int pSevenDYear;
    
    //Declares string variables
    string pSevenDocFirst;
    string pSevenDocLast;
    string pSevenDocSpecialty;
    
    //Prints break to help legibility
    cout << "||PATIENT TYPE|||" << endl;
    
    //testPationtOne
    cout << "Test patient one: \n";
    testPatientOne.printPatient();
    
    //testPatientTwo
    cout << "Test patient two: \n";
    testPatientTwo.printPatient();
    
    //testPatientThree
    cout << "Test patient three: \n";
    testPatientThree.printPatient();
    
    //testPatientFour
    cout << "Test patient four: \n";
    testPatientFour.printPatient();
    
    //testPatientFive
    cout << "Test patient five: \n";
    testPatientFive.printPatient();
    
    //testPatientSix
    cout << "Test patient six: \n";
    cout << "ID: " << testPatientSix.getPatientID() << endl;
    cout << "Age: " << testPatientSix.getAge() << endl;
    cout << "Birth date: ";
    testPatientSix.printBirthDate();
    cout << endl;
    cout << "Admit date: ";
    testPatientSix.printAdmitDate();
    cout << endl;
    cout << "Discharge date: ";
    testPatientSix.printDischargeDate();
    cout << endl;
    cout << "Attending physician: \n";
    testPatientSix.printAttendingPhysician();
    cout << endl;
    
    //testPatientSeven
    testPatientSeven.printPatient();
    cout << endl;
    
    //Lets user enter values for patientType
    cout << "User generated patient: \n";
    
    cout << "Enter the patient's id: ";
    cin >> pSevenID;
    testPatientSeven.setPatientID(pSevenID);
    
    cout << "Enter the patient's age: ";
    cin >> pSevenAge;
    testPatientSeven.setAge(pSevenAge);
    
    cout << "Enter the patient's birth day, month, and year: ";
    cin >> pSevenBDay >> pSevenBMonth >> pSevenBYear;
    testPatientSeven.setBirthDate(pSevenBDay, pSevenBMonth, pSevenBYear);
    
    cout << "Enter the patient's admit day, month, and year: ";
    cin >> pSevenADay >> pSevenAMonth >> pSevenAYear;
    testPatientSeven.setAdmitDate(pSevenADay, pSevenAMonth, pSevenAYear);
    
    cout << "Enter the patient's discharge day, month, and year: ";
    cin >> pSevenDDay >>pSevenDMonth >> pSevenDYear;
    testPatientSeven.setDischargeDate(pSevenDDay, pSevenDMonth, pSevenDYear);
    
    cout << "Enter the patient's attending physician's first name and last name: ";
    cin >> pSevenDocFirst >> pSevenDocLast;
    cout << "Enter " << pSevenDocFirst << " " << pSevenDocLast << "'s specialty: ";
    cin.ignore();
    getline(cin, pSevenDocSpecialty);
    testPatientSeven.setAttendingPhysician(pSevenDocFirst, pSevenDocLast, pSevenDocSpecialty);
    
    //Prints patient seven info
    testPatientSeven.printPatient();
}
