//
//  main.cpp
//  cit233_hw8_q2
//
//  @author Tony Hendrick
//  @version 5/4/15
//
//  Program to use recursion to find the sum of squares from 0
//  to a user entered number
//
#include <iostream>

using namespace std;

int sumSquares(int num);
//function to return the sum of squares from 0 to num

int main()
{
    int runProgram = 1; //check if program should continue running
    int numEntered; //number entered to find the sum of squares of
    
    //while loop to go until something other than 1 is entered
    while( runProgram == 1 )
    {
        //gets the number to find the sum of squares of
        cout << "Enter an integer value to find the sum of squares: ";
        cin >> numEntered;
        
        //Prints the sum of squares
        cout << "The sum of squares for " << numEntered << " is " << sumSquares(numEntered) << endl;
        
        //checks to see whether the program should continue execution
        cout << "Enter 1 to continue program execution (0 to quit): ";
        cin >> runProgram;
    }
    
    //ends program
    return 0;
}//end main

//
// @brief function to get the sum of squares from 0
//        to num using recursion
// @param num the number to find the sum of squres of
//
//@return the sum of squres from 0 to num
int sumSquares(int num)
{
    //if else to check to see if num is 0 or not
    if( num == 0 )
    {
        //ends recursion call
        return 0;
    }
    else
    {
        //returns the sum of the current num parameter
        //and calls upon sumSqures recursively with
        //num - 1
        return (num * num) + sumSquares(num - 1);
    }
}