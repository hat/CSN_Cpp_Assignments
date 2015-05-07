/*
//  cit233-1001
//
//  @author Tony Hendrick
//  @version 1/27/15
//  
//  Input:
//        inData: the file the data is being read from
//        fileName: the name of the file the data is being read from
//        num_salaries_read: the number of salaries in the file
//    Output:
//        salary: the salary values
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int INDEX_SIZE = 100; //The size of the array

int readData(double[], string, int); //reads the data from a file
double calculateAverage(double[], int); //calculates the average of numbers in an array
void sortAscending(double[], int); //sorts the doubles of an array in ascending order
void printData(double[], int); //prints all the data of an array

int main() {
    
    //declares double variable
    double salary[INDEX_SIZE];
    
    //declares fstream variable
    ifstream inData;
    
    //declares string variable
    string fileName;
    
    //declares int variable
    int num_salaries_read;
    
    //asks the user to enter the file to read data from
    cout << "Enter the name of the file to read from (include extension) 'file.txt': ";
    cin >> fileName;
    
    //calls readData function and sets return value to num_salaries_read
    num_salaries_read = readData(salary, fileName, INDEX_SIZE);
    
    //calls the calculateAverage function
    calculateAverage(salary, num_salaries_read);
    
    //calls the sortAscending function
    sortAscending(salary, num_salaries_read);
    
    //calls the printData function
    printData(salary, num_salaries_read);
    
    //ends program
    return 0;
}

int readData(double array[], string fileName, int num_elements)
{
    //declares fstream variable
    ifstream inData;
    
    //declares int variable
    int i = 0;
    
    //opens file
    inData.open(fileName);
    
    //cehcks to see if the file existed
    if( !inData.fail() )
    {
        //reads in data
        while( !inData.eof() && i < num_elements )
        {
            inData >> array[i];
            i++;
        }
    }
    else
    {
        //prints error message
        cout << "Error: file does not exist" << endl;
    }
    
    //returns number of items read from file
    return i;
    
}//reads the data from a file

double calculateAverage(double array[], int num_elements)
{
    //declares double variables
    double average = 0;
    double sum = 0;
    
    //loops through the data and finds the sum
    for( int i = 0; i < num_elements; i++ )
    {
        sum += array[i];
    }
    
    //calculates the average
    average = sum / num_elements;
    
    //returns the average
    return average;
}//calculates the average of numbers in an array

void sortAscending(double array[], int num_elements)
{
    sort(array, array + num_elements);
}//sorts the doubles of an array in ascending order

void printData(double array[], int num_elements)
{
    //loops through the array and prints all the data
    for( int i = 0; i < num_elements; i++ )
    {
        cout << array[i];
        cout << endl;
    }
}//prints all the data of an array
