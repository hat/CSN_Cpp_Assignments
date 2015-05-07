//
//  main.cpp
//  cit233_hw5_tony_hendrick_q2
//
//  @author Tony Hendrick
//  @version 3/16/15
//
//  This program takes test scores from students and then displays which scores
//  fall between certain ranges using dynamic arrays.
//
//

#include <iostream>
#include <fstream>

using namespace std;

const int TEST_SCORE_MIN = 0; //minimum allowed test score
const int TEST_SCORE_MAX = 200; //maximum allowed test score

int findNumberScoresInRange(int numItems, double *numList, double lowestRange, double highestRange);
void printScoresInRange(int numItems, double *numList, double lowestRange, double highestRange);

int main(int argc, const char * argv[])
{
    //Declare int variables
    int numStudents = 0;
    int i = 0;
    int numFound = 0;
    
    //declares double variables
    double *studentScores;
    double readStudentScore = 0;
    
    //declares file variables
    ifstream inFile;
    
    //declares string variables
    string inFileName;
    
    //Print header to help legibility
    cout << "-----------------------------\n";
    cout << "|Sorting Student Test Scores|\n";
    cout << "-----------------------------";
    cout << endl;
    
    //Asks for the file name
    cout << "Enter the name of the file where the student test scores are saved (including extension): ";
    cin >> inFileName;
    
    //opens file
    inFile.open(inFileName);
    
    //Checks if file exists
    if(inFile.is_open())
    {
        //Finds the number of students in file
        while(!inFile.eof())
        {
            inFile >> readStudentScore;
            numStudents++;
        }
        
        //Closes file
        inFile.close();
    }
    else
    {
        //Prints out that the file can not be found
        cout << "File could not be located...\n";
    }
    
    //Opens the file
    inFile.open(inFileName);
    
    //Declare dynamic array
    studentScores = new double[numStudents];
    
    //Checks if the file is open
    if( inFile.is_open() )
    {
        //For loop to get student test scores
        for( i = 0; i < numStudents; i++ )
        {
            inFile >> readStudentScore;
            
            //Stores the number from the file if it falls between 0 and 200
            if( readStudentScore >= TEST_SCORE_MIN && readStudentScore <= TEST_SCORE_MAX )
            {
                studentScores[i] = readStudentScore;
            }
            else
            {
                //Don't read the number
            }
        }
        
        
        //Calls functions and prints data
        numFound = findNumberScoresInRange(numStudents, studentScores, 0.0, 24.0);
        cout << "Found " << numFound << " score(s) in range 0 - 24: " << '\n';
        printScoresInRange(numStudents, studentScores, 0.0, 24.0);
        
        numFound = findNumberScoresInRange(numStudents, studentScores, 25.0, 49.0);
        cout << "Found " << numFound << " score(s) in range 25 - 49: " << '\n';
        printScoresInRange(numStudents, studentScores, 25.0, 49.0);
        
        numFound = findNumberScoresInRange(numStudents, studentScores, 50.0, 74.0);
        cout << "Found " << numFound << " score(s) in range 50 - 74: " << '\n';
        printScoresInRange(numStudents, studentScores, 50.0, 74.0);
        
        numFound = findNumberScoresInRange(numStudents, studentScores, 75.0, 99.0);
        cout << "Found " << numFound << " score(s) in range 75 - 99: " << '\n';
        printScoresInRange(numStudents, studentScores, 75.0, 99.0);
        
        numFound = findNumberScoresInRange(numStudents, studentScores, 100.0, 124.0);
        cout << "Found " << numFound << " score(s) in range 100 - 124: " << '\n';
        printScoresInRange(numStudents, studentScores, 100.0, 124.0);
        
        numFound = findNumberScoresInRange(numStudents, studentScores, 125.0, 149.0);
        cout << "Found " << numFound << " score(s) in range 125 - 149: " << '\n';
        printScoresInRange(numStudents, studentScores, 125.0, 149.0);
        
        numFound = findNumberScoresInRange(numStudents, studentScores, 150.0, 174.0);
        cout << "Found " << numFound << " score(s) in range 150 - 174: " << '\n';
        printScoresInRange(numStudents, studentScores, 150.0, 174.0);
        
        numFound = findNumberScoresInRange(numStudents, studentScores, 175.0, 200.0);
        cout << "Found " << numFound << " score(s) in range 175 - 200: " << '\n';
        printScoresInRange(numStudents, studentScores, 175.0, 200.0);
        
        //Prints the total number of students
        cout << "Total number of students: " << numStudents << '\n';
        
        //closes file
        inFile.close();
    }
    else
    {
        //Prints out that the file can not be found
        cout << "File could not be located...\n";
    }

    //ends program
    return 0;
}//end main

//Method to find how many numbers fall within a certain range
int findNumberScoresInRange(int numItems, double *numList, double lowestRange, double highestRange)
{
    //declares int variables
    int i = 0;
    int numbersRead = 0;
    
    //counts how many numbers fall within the given range
    for( i = 0; i < numItems; i++ )
    {
        if( numList[i] >= lowestRange && numList[i] <= highestRange)
        {
            numbersRead++;
        }
    }
    
    return numbersRead;
}//end findNumberScoresInRange

//Method to print out the numbers that fall within a certain range
void printScoresInRange(int numItems, double *numList, double lowestRange, double highestRange)
{
    //declares int variables
    int i = 0;
    int j = 0;
    int numbersRead/* = 0*/;
    
    //declares double pointer variable
    double *numInRange;
    
    //Declares dynamic array
    numInRange = new double[numbersRead];
    
    //Adds the number to the dynamic array if it falls within range
    for( i = 0; i < numItems; i++ )
    {
        if( numList[i] >= lowestRange && numList[i] <= highestRange)
        {
            numInRange[j] = numList[i];
            j++;
        }
    }
    
    //Prints out the numbers that fall within the given range
    for( i = 0; i < j; i++ )
    {
        cout << numInRange[i] << '\n';
    }
}//end printScoresInRange
