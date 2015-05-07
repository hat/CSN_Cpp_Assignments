//
//  fractionType.h
//  cit233_hw7_tonyhendrick_q1
//
//  @author Tony Hendrick
//  @version 4/20/15.
//
//  fractionType stores the numerator and denominator of a
//  fraction and allows addition, subtraction, multiplication,
//  and division of two fractions.
//

#ifndef __cit233_hw7_tonyhendrick_q1__fractionType__
#define __cit233_hw7_tonyhendrick_q1__fractionType__

#include <stdio.h>
#include <iostream>

using namespace std;

class fractionType
{
    friend ostream& operator<<(ostream&, const fractionType &);
    //Method to overload the stream extraction operators
    
public:
    void setFraction(int n, int d);
    //Method to set the numerator and denominator
    //of the fraction
    fractionType operator+(const fractionType &) const;
    //Method to overload the addition operator
    fractionType operator-(const fractionType &) const;
    //Method to overload the subtraction operator
    fractionType operator*(const fractionType &) const;
    //Method to overload the multiplication operator
    fractionType operator/(const fractionType &) const;
    //Method to overload the division operator
    
    fractionType();
    //Constructor
    //Sets the numerator and denominator to
    //default values
    //Post-condition: numerator = 1, denominator = 1.
    fractionType(int n, int d);
    //Constructor
    //Sets the numerator and denominator
    //according to n and d.
    //Post-condition: numerator = n, denomniator = d.
    
private:
    int numerator; //Integer - the numerator of the fraction
    int denominator; //Integer - the denominator of the fraction
};

#endif /* defined(__cit233_hw7_tonyhendrick_q1__fractionType__) */
