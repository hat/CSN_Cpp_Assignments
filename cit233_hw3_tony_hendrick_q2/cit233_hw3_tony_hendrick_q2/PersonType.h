//
//  PersonType.h
//
//  cit233_hw3_tony_hendrick_q1
//
//  @author Tony Hendrick
//  @version 2/9/15
//
//  This header file is for the class personType
//

#ifndef __cit233_hw3_tony_hendrick_q2__PersonType__
#define __cit233_hw3_tony_hendrick_q2__PersonType__

#include <stdio.h>
#include <string>

using namespace std;

class PersonType {
public:
    void print() const;
    //Function to output the first name and last name
    //in the form "firstName lastName".
    
    void setName(string, string);
    //Function to set firstName and lastName according
    //to the parameters.
    
    void setFirstName(string);
    //Function to set firstName according to the parameter.
    
    void setLastName(string);
    //Function to set lastName according to the parameter.
    
    void setMiddleName(string);
    //Function to set middleName according to the parameter.
    
    bool compareFirstName(string);
    //Function to compare the entered first name according to the
    //parameter to the personType object's firstName.
    //Post-condition: True or false is returned depending on whether the
    //first names are the same.
    
    bool compareLastName(string);
    //Function to compare the entered last name according to the
    //parameter to the personType object's lastName.
    //Post-condition: True or false is returned depending on whether the
    //last names are the same.
    
    string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of firstName is returned.
    
    string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of lastName is returned.
    
    PersonType(string first = "", string last = "");
    //Constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are null strings.
    //Postcondition: firstName = first; lastName = last;
    
private:
    string firstName; //variable to store the first name
    string lastName; //variable to store the last name
    string middleName; //variable to store the middle name
};


#endif /* defined(__cit233_hw3_tony_hendrick_q2__PersonType__) */
