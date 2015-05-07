//
//  main.cpp
//  cit233_hw5_tony_hendrick_q2
//
//  @author Tony Hendrick
//  @version 3/16/15
//
//  This program calculates the vote percentages and finds
//  the winner of an election using dynamic arrays.
//
//


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //Declare string variables
    string *candidateNames;
    string inFileName;
    string candidateNameCount;
    
    //Declare int variables
    int *candidateVotes;
    int candidateVoteCount;
    int numOfCandidates = 0;
    int totalVotes = 0;
    int winnerIndex = 0;
    
    //Declare double variable
    double *candidateVotePercentage;
    
    //Declare ifstream
    ifstream inFile;
    
    //Print program title for legibility
    cout << "--------------------------------\n";
    cout << "||  Election Results Mock-Up  ||\n";
    cout << "--------------------------------\n";
    
    //Gets the name of the file
    cout << "Enter the name of the file (include extension): ";
    cin >> inFileName;
    
    //Opens the file
    inFile.open(inFileName);
    
    //Checks if the file is open
    if(inFile.is_open())
    {
        //Gets the number of candidates
        while(!inFile.eof())
        {
            inFile >> candidateNameCount;
            inFile >> candidateVoteCount;
            numOfCandidates++;
        }
    }
    
    //Closes the file
    inFile.close();
    
    //Opens the file
    inFile.open(inFileName);
    
    //Declares dynamic arrays
    candidateNames = new string[numOfCandidates];
    candidateVotes = new int[numOfCandidates];
    
    //Checks if file is open
    if( inFile.is_open() )
    {
        //Reads the data from file
        for(int i = 0; i < numOfCandidates; i++)
        {
            inFile >> candidateNames[i];
            inFile >> candidateVotes[i];
            totalVotes += candidateVotes[i];
            
            //Gets the index of the candidate with the most votes
            if( i >= 1 )
            {
                if( candidateVotes[i] > candidateVotes[i - 1] )
                {
                    winnerIndex = i;
                }
            }
        }
    }
    else
    {
        cout << "File does not exist!\n";
    }
    
    //Declares dynamic array
    candidateVotePercentage = new double[numOfCandidates];
    
    //Gets the vote percentage of each candidate
    for( int i = 0; i < numOfCandidates; i++ )
    {
        candidateVotePercentage[i] = (candidateVotes[i] / (double)totalVotes) * 100;
    }
    
    //Prints out the top of the chart
    cout << "Candidate \t Votes Received \t % Total Votes\n";
    
    //Prints out the candidate information
    for(int i = 0; i < numOfCandidates; i++)
    {
        cout << candidateNames[i] << '\t' << '\t' << candidateVotes[i] << '\t' << '\t' << fixed << setprecision(2) <<  candidateVotePercentage[i];
        cout << endl;
    }
    
    //Prints out the total votes
    cout << "Total votes: " << totalVotes;
    cout << endl;
    
    //Prints out the winner
    cout << "The winner  of the Election is " << candidateNames[winnerIndex] << "!";
    cout << endl;
    
    //ends program
    return 0;
}
