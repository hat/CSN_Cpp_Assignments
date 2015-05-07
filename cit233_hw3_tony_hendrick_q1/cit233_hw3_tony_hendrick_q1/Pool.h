//
//  Pool.h
//  cit233_hw3_tony_hendrick_q1
//
//  @author Tony Hendrick
//  @version 2/9/15
//
//  This header file is for the class Pool
//

#ifndef __cit233_hw3_tony_hendrick_q1__Pool__
#define __cit233_hw3_tony_hendrick_q1__Pool__

#include <stdio.h>

class Pool
{
private:
    double lengthFeet; //variable to store the length in feet
    double widthFeet; //variable to store the width in feet
    double depthFeet; //variable to store the depth in feet
    double rateGallonsPerMinute; //variable to store rate filling in gallons/minute
    double volumeCubicFeet; //variable to store the volume in cubic feet
    
public:
    void print() const;
    //Function to output the length, width, depth, and rate.
    
    void setLengthFeet(double l);
    //Function to set the length in feet according to the
    //parameter.
    
    void setWidthFeet(double w);
    //Function to set the width in feet according to the
    //parameter.
    
    void setDepthFeet(double d);
    //Function to set the depth in feet according to the
    //parameter.
    
    void setRateGallonsPerMinute(double r);
    //Function to set the rate in gallons per minute the pool
    //is being filled according to the parameter.
    
    void setVolumeCubicFeet(double v);
    //Function to set the volume in cubic feet according to
    //the parameter.
    
    double getLengthFeet() const;
    //Function to return the length in feet.
    //Post-condition: The value of the length in feet
    //is returned.
    
    double getWidthFeet() const;
    //Function to return the width in feet.
    //Post-condition: The value of the width in feet
    //is returned.
    
    double getDepthFeet() const;
    //Function to return the depth in feet.
    //Post-condition: The value of the depth in feet
    //is returned.
    
    double getRateGallonsPerMinute() const;
    //Function to return the rate in gallons per minute
    //that the pool is being filled.
    //Post-condition: The value of the rate in gallons
    //per minute is returned.
    
    double getVolumeCubicFeet() const;
    //Function to return the value of the volume in
    //cubic feet.
    //Post-condition: The value of the volume in
    //cubic feet is returned.
    
    double calculateVolume(double l, double w, double d);
    //Function to calculate the volume based on the
    //length, width, and depth.
    //Post-condition: The value of the volume in
    //in cubic feet is returned.
    
    double calculateTimeToFill(double v, double r);
    //Function to calculate the amount of minutes
    //until the pool is full based on the rate and
    //volume.
    //Post-condition: The value of the the time to fill
    //in minutes is returned.
    
    Pool();
    //Constructor
    //Sets all of the values equal to 0.
    //Post-Condition: lengthFeet = 0; widthFeet = 0;
    //depthFeet = 0; rateGallonsPerMinute = 0;
    //volumeCubicFeet = 0.
    
    
    Pool(double l);
    //Constructor
    //Sets the length in feet.
    //Post-condition: lengthFeet = l.
    
    Pool(double l, double w);
    //Constructor
    //Sets the length in feet and the width in feet.
    //Post-condition: lengthFeet = l; widthFeet = w.
    
    Pool(double l, double w, double d);
    //Constructor
    //Sets the length in feet, width in feet,
    //and the depth in feet.
    //Post-condition: lengthFeet = l; widthFeet = w;
    //depthFeet = d.
    
    Pool(double l, double w, double d, double r);
    //Constructor
    //Sets the length in feet, width in feet,
    //depth in feet, and the rate in gallons per minute.
    //Post-condition: lengthFeet = l; widthFeet = w;
    //depthFeet = d; rateGallonsPerMinute = r.
    
    Pool(double l, double w, double d, double r, double v);
    //Constructor
    //Sets the length in feet, width in feet,
    //depth in feet, rate in gallons per minute,
    //and the volume in cubic feet.
    //Post-condition: lengthFeet = l; widthFeet = w;
    //depthFeet = d; rateGallonsPerMinute = r;
    //volumeCubicFeet = v.
};

#endif /* defined(__cit233_hw3_tony_hendrick_q1__Pool__) */
