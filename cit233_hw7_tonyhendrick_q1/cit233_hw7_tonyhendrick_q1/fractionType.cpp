//
//  fractionType.cpp
//  cit233_hw7_tonyhendrick_q1
//
//  @author Tony Hendrick
//  @version 4/20/15.
//

#include "fractionType.h"
#include <iostream>

using namespace std;

ostream& operator << (ostream& osObject, const fractionType& fraction)
{
    osObject << fraction.numerator << "/" << fraction.denominator;
    
    return osObject;
}

void fractionType::setFraction(int n, int d)
{
    numerator = n;
    denominator = d;
}

fractionType fractionType::operator+(const fractionType &fraction) const
{
    fractionType sumFraction;
    fractionType tempFractionOne;
    fractionType tempFractionTwo;
    
    tempFractionOne.numerator = this->numerator;
    tempFractionOne.denominator = this->denominator;
    
    tempFractionTwo.numerator = fraction.numerator;
    tempFractionTwo.denominator = fraction.denominator;
    
    tempFractionOne.denominator *= fraction.denominator;
    tempFractionTwo.denominator *= this->denominator;
    
    tempFractionOne.numerator *= fraction.denominator;
    tempFractionTwo.numerator *= this->denominator;
    
    sumFraction.numerator = (tempFractionOne.numerator) + (tempFractionTwo.numerator);
    sumFraction.denominator = tempFractionOne.denominator;
    
    return sumFraction;
}

fractionType fractionType::operator-(const fractionType &fraction) const
{
    fractionType differenceFraction;
    fractionType tempFractionOne;
    fractionType tempFractionTwo;
    
    tempFractionOne.numerator = this->numerator;
    tempFractionOne.denominator = this->denominator;
    
    tempFractionTwo.numerator = fraction.numerator;
    tempFractionTwo.denominator = fraction.denominator;
    
    tempFractionOne.denominator *= fraction.denominator;
    tempFractionTwo.denominator *= this->denominator;
    
    tempFractionOne.numerator *= fraction.denominator;
    tempFractionTwo.numerator *= this->denominator;
    
    differenceFraction.numerator = (tempFractionOne.numerator) - (tempFractionTwo.numerator);
    differenceFraction.denominator = tempFractionOne.denominator;

    return differenceFraction;
}
fractionType fractionType::operator*(const fractionType &fraction) const
{
    fractionType productFraction;
    
    productFraction.numerator = this->numerator * fraction.numerator;
    productFraction.denominator = this->denominator * fraction.denominator;
    
    return productFraction;
}

fractionType fractionType::operator/(const fractionType &fraction) const
{
    fractionType quotientFraction;
    
    quotientFraction.numerator = this->numerator * fraction.denominator;
    quotientFraction.denominator = this->denominator * fraction.numerator;
    
    return quotientFraction;
}

fractionType::fractionType()
{
    numerator = 1;
    denominator = 1;
}

fractionType::fractionType(int n, int d)
{
    try
    {
        numerator = n;
        denominator = d;
        
        if( d <= 0 )
        {
            throw denominator;
        }
    }
    catch(int x)
    {
        numerator = 1;
        denominator = 1;
    }
}