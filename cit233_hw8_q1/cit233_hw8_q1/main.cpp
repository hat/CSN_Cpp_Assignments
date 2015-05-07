//
//  main.cpp
//  cit233_hw8_q1
//
//  @author Tony Hendrick
//  @version 5/4/15
//
//  Program to print out a star pattern of a certain size
//  using recursion.
//

#include <iostream>

using namespace std;

int starPattern(int numLines, int spacesSentinal, int starsSentinal, int count);
//Prints out a star pattern by calling upon other functions
int spaces(int numLines, int spacesSentinal);
//prints out the spaces needed for each line
int stars(int numLines, int spacesSentinal, int starsSentinal);
//prints out the stars for each line

int main()
{
    int userInpLines; //number of lines to print out
    
    //receives the number of lines
    cout << "Specify the number of lines: ";
    cin >> userInpLines;
    
    //calls starPattern
    starPattern(userInpLines, 0, 0, 0);
    
    //ends program
    return 0;
}//end main

//
// @brief function to call upon spaces() and stars() function to
//        print out a star pattern
// @param numLines the number of lines to print out
// @param spacesSentinal the loop control for the spaces() function
// @param starsSentinal the loop control for the stars() function
// @param count the loop control for starPattern
//
//@return the number of times starPattern has been called
int starPattern(int numLines, int spacesSentinal, int starsSentinal, int count)
{
    //prints the pattern top down lowest amount stars to largest amount of stars
    if( spacesSentinal < (numLines * 2) - 1 && count < numLines - 1)
    {
        //calls spaces() and stars() function
        spaces(numLines, spacesSentinal);
        stars(numLines, spacesSentinal, starsSentinal);
        
        //prints newline
        cout << endl;
        
        //adds one to spacesSentinal and count
        spacesSentinal++;
        count++;
        
        //returns function call with new values
        return starPattern(numLines, spacesSentinal, starsSentinal, count);
    }
    //prints out the pattern from where it left off from largest amount of stars
    //to smallest amount
    else if( spacesSentinal < (numLines * 2) && count <= (numLines * 2) - 2)
    {
        //calls spaces() and stars() function
        spaces(numLines, spacesSentinal);
        stars(numLines, spacesSentinal, starsSentinal);
        
        //prints newline
        cout << endl;
        
        //decrements spacesSentinal and increments count
        spacesSentinal--;
        count++;
        
        //returns function call with new values
        return starPattern(numLines, spacesSentinal, starsSentinal, count);
    }
    //stops the recursion call
    else
    {
        //returns 1 to show success and stop recursion
        return 1;
    }
}//end starPattern

//
// @brief function to prints the correct number of spaces using recursion
//
// @param numLines the number of lines to print out
// @param spacesSentinal the loop control for the spaces() function
//
//@return the number of times spaces() has been called
int spaces(int numLines, int spacesSentinal)
{
    if( spacesSentinal < numLines)
    {
        //prints newline
        cout << ' ';
        
        //increments spacesSentinal
        spacesSentinal++;
        
        //returns function call with new values
        return spaces(numLines, spacesSentinal);
    }
    else
    {
        //returns 1 to show success and stop recursion
        return 1;
    }
}//end spaces

//
// @brief function to prints the correct number of stars using recursion
//
// @param numLines the number of lines to print out
// @param spacesSentinal the loop control for the spaces() function
// @param starsSentinal the loop control for the stars() function
//
//@return the number of times stars() has been called
int stars(int numLines, int spacesSentinal, int starsSentinal)
{
    if( starsSentinal < (spacesSentinal + 1) )
    {
        //prints star character and a space
        cout << "* ";
        
        //increments starsSentinal
        starsSentinal++;
        
        //returns function call with new values
        return stars(numLines, spacesSentinal, starsSentinal);
    }
    else
    {
        //returns 1 to show success and stop recursion
        return 1;
    }
}//end stars