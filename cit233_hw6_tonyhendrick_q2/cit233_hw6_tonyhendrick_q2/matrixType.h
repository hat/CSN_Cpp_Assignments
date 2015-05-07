//
//  matrixType.h
//  cit233_hw6_tonyhendrick_q2
//
//  @author Tony Hendrick
//  @version 4/6/15
//

#ifndef __cit233_hw6_tonyhendrick_q2__matrixType__
#define __cit233_hw6_tonyhendrick_q2__matrixType__

#include <stdio.h>
#include <iostream>

using namespace std;


class matrixType
{
    //Methods to overload the stream insertion and extraction operators
    friend ostream& operator<<(ostream&, const matrixType &);
    friend istream& operator>>(istream&, const matrixType &);
    
public:
    //Methods to overload the arithmetic operators
    //All return matrixType
    matrixType operator+(const matrixType &) const;
    matrixType operator-(const matrixType &) const;
    matrixType operator*(const matrixType &) const;
    
    int getRows() const;
    //Method to return the number of rows
    //Post-condition: The value of rows is returned
    
    int getColumns() const;
    //Method to return the number of columns
    //Post-condition: The value of columns is returned
    
    int getMatrix(int i, int j) const;
    //Method to return the matrix
    //Post-condition: The pointer to the pointer of the matrix is returned
    
    void getValues();
    //Method to set the values of the matrix
    
    void display();
    //Methdod to display the matrix
    
    matrixType(int num_rows, int num_columns);
    //Constructor
    //Sets the values according to the parameters
    //Post-condition: rows = num_rows; columns = num_columns
    
private:
    int **matrix; //pointer to a pointer for a matrix
    int rows; //Variable to store the number of rows
    int columns; //Variable to store the number of columns
};

#endif /* defined(__cit233_hw6_tonyhendrick_q2__matrixType__) */
