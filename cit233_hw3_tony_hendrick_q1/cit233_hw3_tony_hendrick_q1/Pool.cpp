//
//  Pool.cpp
//  cit233_hw3_tony_hendrick_q1
//
//  @author Tony Hendrick
//  @version 2/9/15
//
//  Must include "Pool.h"
//

#include "Pool.h"
#include <iostream>
using namespace std;

Pool::Pool()
{
    lengthFeet = 0;
    widthFeet = 0;
    depthFeet = 0;
    rateGallonsPerMinute = 0;
    volumeCubicFeet = 0;
}

Pool::Pool(double l)
{
    lengthFeet = l;
}

Pool::Pool(double l, double w)
{
    lengthFeet = l;
    widthFeet = w;
}

Pool::Pool(double l, double w, double d)
{
    lengthFeet = 0;
    widthFeet = 0;
    depthFeet = 0;
}

Pool::Pool(double l, double w, double d, double r)
{
    lengthFeet = 0;
    widthFeet = 0;
    depthFeet = 0;
    rateGallonsPerMinute = 0;
}

Pool::Pool(double l, double w, double d, double r, double v)
{
    lengthFeet = 0;
    widthFeet = 0;
    depthFeet = 0;
    rateGallonsPerMinute = 0;
    volumeCubicFeet = 0;
}

void Pool::setLengthFeet(double l)
{
    lengthFeet = l;
}

void Pool::setWidthFeet(double w)
{
    widthFeet = w;
}

void Pool::setDepthFeet(double d)
{
    depthFeet = d;
}

void Pool::setRateGallonsPerMinute(double r)
{
    rateGallonsPerMinute = r;
}

void Pool::setVolumeCubicFeet(double v)
{
    volumeCubicFeet = v;
}

double Pool::getLengthFeet() const
{
    return lengthFeet;
}

double Pool::getWidthFeet() const
{
    return widthFeet;
}

double Pool::getDepthFeet() const
{
    return depthFeet;
}

double Pool::getRateGallonsPerMinute() const
{
    return rateGallonsPerMinute;
}

double Pool::getVolumeCubicFeet() const
{
    return volumeCubicFeet;
}

double Pool::calculateVolume(double l, double w, double d)
{
    double volume = 0;
    
    volume = l * w * d;
    
    return volume;
}

double Pool::calculateTimeToFill(double v, double r)
{
    double time;
    
    time = v * 7.48 / r;
    
    return time;
}

void Pool::print() const
{
    cout << "\nLength of the pool: " << lengthFeet << "ft";
    cout << "\nWidth of the pool: " << widthFeet << "ft";
    cout << "\nDepth of the pool: " << depthFeet << "ft";
    cout << "\nRate of the pool being filled: " << rateGallonsPerMinute << " gallons per minute";
}






