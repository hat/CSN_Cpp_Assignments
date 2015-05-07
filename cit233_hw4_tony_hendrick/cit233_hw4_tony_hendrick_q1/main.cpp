//
//  main.cpp
//  cit233_hw4_tony_hendrick_q1
//
//  @author Tony Hendrick
//  @version 3/2/15
//
//  This program uses the clockType class and the extClockType class
// to create objects of the two types and test the methods.
//
// Input:
//      myClock: a clockType object
//      yourClock: a clockType object
//      hours: an integer to store the hours
//      minutes: an integer to store the minutes
//      seconds: an integer to store the seconds
//      myExtClock: a extClockType object
//      myExtClockTwo: a extClockType object
//      myExtClockThree: a extClockType object
//      myExtClockFour: a extClockType object
//      myExtClockFive: a extClockType object
//

#include <iostream>
#include "clocktype.h"
#include "extClockType.h"

using namespace std;

int main()
{
    //clockType test
    
    //Declares clockType objects
    clockType myClock;
    clockType yourClock;
    
    //declares ints
    int hours;
    int minutes;
    int seconds;
    
    //Set the time of myClock
    myClock.setTime(5, 4, 30);
    cout << "myClock: ";
    
    //print the time of myClock
    myClock.printTime();
    cout << endl;
    
    //print the time of yourClock Line 6
    cout << "yourClock: ";
    yourClock.printTime();
    cout << endl;
    
    //Set the time of yourClock
    yourClock.setTime(5, 45, 16);
    cout << "After setting, yourClock: ";
    
    //print the time of yourClock
    yourClock.printTime();
    cout << endl;
    
    //Compare myClock and yourClock
    if (myClock.equalTime(yourClock))
        cout << "Both times are equal." << endl;
    else
        cout << "The two times are not equal." << endl;
    
    //Gets hours, minutes, and seconds from user input
    cout << "Enter the hours, minutes, and seconds: ";
    cin >> hours >> minutes >> seconds;
    cout << endl;
    
    //Set the time of myClock using the value of the
    //variables hours, minutes, and seconds
    myClock.setTime(hours, minutes, seconds);
    cout << "New myClock: ";
    
    //print the time of myClock
    myClock.printTime();
    cout << endl;
    
    //Increment the time of myClock by one second
    myClock.incrementSeconds();
    cout << "After incrementing myClock by " << "one second, myClock: ";
    
    //print the time of myClock
    myClock.printTime();
    cout << endl;
    
    //Retrieve the hours, minutes, and seconds of the
    //object myClock
    myClock.getTime(hours, minutes, seconds); //Line 27
    
    //Output the value of hours, minutes, and seconds
    cout << "hours = " << hours << ", minutes = " << minutes << ", seconds = " << seconds << endl;
    
    //extClockType test
    
    //declares extClockType objects
    extClockType myExtClock;
    extClockType myExtClockTwo("ACDT");
    extClockType myExtClockThree(10, 30);
    extClockType myExtCLockFour("ACDT", 10, 30);
    extClockType myExtClockFive;
    
    //Declares string variable
    string timeZoneA;
    
    //Declares int variables
    int hourOffset;
    int minOffset;
    
    //prints the information of myExtClock
    cout << "myExtClock: \n";
    cout << "The time zone abbreviation is: ";
    myExtClock.printTimeZoneAbbreviation();
    cout << endl;
    cout << "The time zone offset is: ";
    myExtClock.printTimeZoneUTCOffset();
    cout << endl;
    
    //prints the information of myExtClockTwo
    cout << "myExtClockTwo: \n";
    myExtClockTwo.printTimeZone();
    cout << endl;

    //prints the information of myExtClockThree
    cout << "myExtClockThree: \n";
    myExtClockThree.printTimeZone();
    cout << endl;
    
    //prints the information of myExtClockFour
    cout << "myExtClockFour: \n";
    myExtCLockFour.printTimeZone();
    cout << endl;
    
    //Lets user know they are setting myExtClockFive
    cout << "myExtClockFive: \n";
    
    //Gets a time zone abbreviation, hours offset, and minutes offset from the user
    cout << "Enter the time zone abbreviation: ";
    cin >> timeZoneA;
    cout << "Enter the hours and minutes of offset: ";
    cin >> hourOffset >> minOffset;
    
    //Sets the information of myExtClockFive
    myExtClockFive.setTimeZoneAbbreviation(timeZoneA);
    myExtClockFive.setTimeZoneUTCOffsetHours(hourOffset);
    myExtClockFive.setTimeZoneUTCOffsetMins(minOffset);
    
    //prints the information of myExtClockFive
    cout << "MyExtClockFive: \n";
    myExtClockFive.printTimeZone();
    
    cout << endl;
    
    //ends program
    return 0;
}
