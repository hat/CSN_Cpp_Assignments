/*
 //  main.cpp
 //
 //  @author Tony Hendrick
 //  @version 2/9/15
 //
 //  This program uses the Pool class to create a new Pool object
 //  and then to test the methods of the Pool class.
 //
 //  This program must include "Pool.h"
 //
 //  Input:
 //        firstPool: a Pool object
 //        length: the length of the pool
 //        width: the width of the pool
 //        depth: the depth of the pool
 //        rate: the rate in gallons per minute the pool is being filled
 //        volume: the volume of the pool in cubic feet
 //        timeToFill: the time it takes for the pool to fill in minutes
 //    Output:
 //        Pool.print(): the length, depth, width, and rate the pool is
 //                      being filled
 //        volume: the volume of the pool in cubic feet
 //        timeToFill: the time it takes for the pool to fill in minutes
 

#include <iostream>
#include "Pool.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    //declares Pool variable
    Pool firstPool;
    
    //declares double variables
    double length;
    double width;
    double depth;
    double rate;
    double volume;
    double timeToFill;
    
    //prints out what program does
    cout << "-------------------------------------\n";
    cout << "|||| POOL SPECIFICATIONS PROGRAM ||||\n";
    cout << "-------------------------------------";
    cout << '\n';
    
    //gets the firstPool's length in feet
    cout << "Enter the pool length in feet: ";
    cin >> length;
    firstPool.setLengthFeet(length);
    
    //gets the firstPool's width in feet
    cout << "Enter the pool width in feet: ";
    cin >> width;
    firstPool.setWidthFeet(width);
    
    //gets the firstPool's depth in feet
    cout << "Enter the pool depth feet: ";
    cin >> depth;
    firstPool.setDepthFeet(depth);
    
    //gets the firstPool's rate of filling up in gallons per minute
    cout << "Enter the rate at which the pool is being filled in gallons per minute: ";
    cin >> rate;
    firstPool.setRateGallonsPerMinute(rate);
    
    //calculates the volume of firstPool
    volume = firstPool.calculateVolume(length, width, depth);
    
    //calculates the time to fill of firstPool
    timeToFill = firstPool.calculateTimeToFill(volume, rate);
    
    //prints out all the information of firstPool
    firstPool.print();
    cout << "\nVolume = " <<  volume << " cubic feet";
    cout << '\n';
    cout << "Time to fill the pool: " << timeToFill << " minutes";
    cout << '\n';
    
    //ends program
    return 0;
}
 
*/



/*
 Name: One of you
 Class Name: CIT 233, Beginning C++
 Assignment:
 Date Assigned:
 Date Due:
 
 This program tests the pool class by running various actions testing
 all of the constructors in the class. This program uses the pool.h (header) file.
 */

#include <iostream>
#include "pool.h"

using namespace std;

// variables
double length = 0.0;
double width = 0.0;
double depth = 0.0;
double rate = 0.0;

// function prototypes
double getUserInput(char type);

int main()
{
    //sets up the objects
    Pool myPool1(10, 40, 7, 10, 2800); //constructor with length, width, depth, rate, volume
    Pool myPool2(12, 40, 7, 10); //constructor with length, width, depth, rate
    Pool myPool3(10, 40, 7); //constructor with length, width, depth
    Pool myPool4(10, 40); //constructor with length, width
    Pool myPool5(10); //constructor with length
    Pool myPool6; //default constructor with no values
    
    // displays the values from myPool1 that were passed via the constructor
    cout << "Object 1-setting all values in constructor:" << endl;
    myPool1.print();
    cout << endl;
    
    // displays the values from myPool2 that were passed via the constructor
    // gets the values to use for the calculateVolume function
    length = myPool2.getLengthFeet();
    width = myPool2.getWidthFeet();
    depth = myPool2.getDepthFeet();
    myPool2.calculateVolume(length, width, depth);
    
    // displays the values
    cout << "Object 2-setting all values in constructor except volume:" << endl;
    myPool2.print();
    cout << endl;
    
    // displays the values from myPool3 that were passed via the constructor
    // gets the values to use for the calculateVolume function
    length = myPool3.getLengthFeet();
    width = myPool3.getWidthFeet();
    depth = myPool3.getDepthFeet();
    // request input from user and sets the appropriate variable
    rate = getUserInput('r');
    myPool3.setRateGallonsPerMinute(rate);
    myPool3.calculateVolume(10, 40, 7);
    
    // displays the values
    cout << "Object 3-length, width, depth values in constructor:" << endl;
    myPool3.print();
    cout << endl;
    
    // displays the values from myPool4 that were passed via the constructor
    // gets the values to use for the calculateVolume function
    length = myPool4.getLengthFeet();
    width = myPool4.getWidthFeet();
    // request input from user and sets the appropriate variables
    depth = getUserInput('d');
    myPool4.setDepthFeet(depth);
    rate = getUserInput('r');
    myPool4.setRateGallonsPerMinute(rate);
    myPool4.calculateVolume(10, 40, myPool4.getDepthFeet());
    
    // displays the values
    cout << "Object 4-length, width values in constructor:" << endl;
    myPool4.print();
    cout << endl;
    
    /*
    // displays the values from myPool5 that were passed via the constructor
    // gets the values to use for the calculateVolume function
    length = myPool5.getLength();
    // request input from user and sets the appropriate variables
    width = getUserInput('w');
    myPool5.setWidth(width);
    depth = getUserInput('d');
    myPool5.setDepth(depth);
    rate = getUserInput('r');
    myPool5.setRate(rate);
    myPool5.calculateVolume();
    
    // displays the values
    cout << "Object 5-length value in constructor:" << endl;
    myPool5.displayValues();
    cout << endl;
    
    // displays the values from myPool6 that were passed via the constructor
    // gets the values to pass into the overloaded calculateVolume function for testing
    // request input from user and sets the appropriate variables
    length = getUserInput('l');
    myPool6.setLength(length);
    width = getUserInput('w');
    myPool6.setWidth(width);
    depth = getUserInput('d');
    myPool6.setDepth(depth);
    rate = getUserInput('r');
    myPool6.setRate(rate);
    myPool6.calculateVolume(length, width, depth);
    
    // displays the values
    cout << "Object 6-length value in constructor:" << endl;
    myPool6.displayValues();
    cout << endl;
    */
}

// getUserInput function. Takes in the type of request and displays to the user
double getUserInput(char type)
{
    double value = 0.0;
    switch (type)
    {
        case 'l': // gets length
            cout << "Please enter the length of the pool in feet: ";
            cin >> value;
            cout << endl;
            break;
        case 'w': // gets width
            cout << "Please enter the width of the pool in feet: ";
            cin >> value;
            cout << endl;
            break;
        case 'd': // gets depth
            cout << "Please enter the depth of the pool in feet: ";
            cin >> value;
            cout << endl;
            break;
        case 'r': // gets rate
            cout << "Please enter the rate in gallons per minute, to fill the pool: ";
            cin >> value;
            cout << endl;
            break;
        default:
            break;
    }
    return value;
}

