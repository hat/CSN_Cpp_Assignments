//
//  main.cpp
//  cit233_hw6_tonyhendrick_q2
//
//  @author Tony Hendrick
//  @version 4/6/15
//
//  This program tests the matrixType class that has
//  operator overloading.
//

#include <iostream>
#include "matrixType.h"

using namespace std;

int getNumRows();
int getNumCols();

int main(int argc, const char * argv[])
{
    //Declares int variables
    int numRows = getNumRows();
    int numCols = getNumCols();
    
    //Declares matrixType variables
    matrixType testMatrixOne(numRows, numCols);
    matrixType testMatrixTwo(numRows, numCols);
    matrixType tempMatrix(numRows, numCols);
    
    //Gets the values for testMatric and testMatrixTwo
    cout << "Enter the values for testMatrixOne: \n";
    cin >> testMatrixOne;
    
    cout << "Enter the values for testMatrixTwo: \n";
    cin >> testMatrixTwo;
    
    //Sets tempMatrix to testMatrix plus testMatrixTwo
    tempMatrix = testMatrixOne + testMatrixTwo;
    
    //For legibility purposes
    cout << "||| Addition |||\n";
    
    //Displays testMatrix, testMatrixTwo, and tempMatrix
    cout << "testMatrixOne: \n";
    cout << testMatrixOne;
    cout << "testMatrixTwo: \n";
    cout << testMatrixTwo;
    cout << "tempMatrix: \n";
    cout << tempMatrix;
    
    //Sets tempMatrix to testMattrix minus testMatrixTwo
    tempMatrix = testMatrixOne - testMatrixTwo;
    
    //For legibility purposes
    cout << "||| Subtraction |||\n";
    
    //Displays testMatrix, testMatrixTwo, and tempMatrix
    cout << "testMatrixOne: \n";
    cout << testMatrixOne;
    cout << "testMatrixTwo: \n";
    cout << testMatrixTwo;
    cout << "tempMatrix: \n";
    cout << tempMatrix;
    
    //Sets tempMatrix to testMatrix multiplied by testMatrixTwo
    tempMatrix = testMatrixOne * testMatrixTwo;
    
    //For legibility purposes
    cout << "||| Multiplication |||\n";
    
    //Displays testMatrix, testMatrixTwo, and tempMatrix
    cout << "testMatrixOne: \n";
    cout << testMatrixOne;
    cout << "testMatrixTwo: \n";
    cout << testMatrixTwo;
    cout << "tempMatrix: \n";
    cout << tempMatrix;
    
    //Ends program
    return 0;
}//end main

int getNumRows()
{
    int numRows;
    
    cout << "Enter the number of rows for the matrices: ";
    cin >> numRows;
    
    return numRows;
}//end getNumRows

int getNumCols()
{
    int numCols;
    
    cout << "Enter the number of columns for the matrices: ";
    cin >> numCols;
    
    return numCols;
}//end getNumCols