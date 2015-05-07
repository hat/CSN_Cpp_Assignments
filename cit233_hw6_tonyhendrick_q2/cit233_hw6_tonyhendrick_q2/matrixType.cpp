//
//  matrixType.cpp
//  cit233_hw6_tonyhendrick_q2
//
//  @author Tony Hendrick
//  @version 4/6/15
//

#include <iostream>

#include "matrixType.h"

using namespace std;

matrixType::matrixType(int num_rows, int num_columns)
{
    rows = num_rows;
    columns = num_columns;
    
    matrix = new int*[rows];
    for(int i = 0; i < rows; i++)
    {
        matrix[i] = new int[columns];
        
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

ostream& operator << (ostream& osObject, const matrixType& matrixOne)
{
    for(int i = 0; i < matrixOne.rows; i++)
    {
        for(int j = 0; j < matrixOne.columns; j++)
        {
            osObject << matrixOne.matrix[i][j] <<" ";
        }
        cout <<endl;
    }
    
    return osObject;
}

istream& operator >> (istream& isObject, const matrixType& matrixOne)
{
    for(int i = 0; i < matrixOne.rows; i++)
    {
        for(int j = 0; j < matrixOne.columns; j++)
        {
            cout << "Enter the int for row " << i << " column " << j << ": ";
            isObject >> matrixOne.matrix[i][j];
        }
        cout <<endl;
    }
    
    return isObject;
}

matrixType matrixType::operator+(const matrixType& matrixOne) const
{
    matrixType tempMatrix(rows, columns);
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            tempMatrix.matrix[i][j] =  this->matrix[i][j] + matrixOne.matrix[i][j];
        }
    }
    
    return tempMatrix;
}

matrixType matrixType::operator-(const matrixType& matrixOne) const
{
    matrixType tempMatrix(rows, columns);
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            tempMatrix.matrix[i][j] =  this->matrix[i][j] - matrixOne.matrix[i][j];
        }
    }
    
    return tempMatrix;
}

matrixType matrixType::operator*(const matrixType& matrixOne) const
{
    matrixType tempMatrix(rows, columns);
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            tempMatrix.matrix[i][j] =  this->matrix[i][j] * matrixOne.matrix[i][j];
        }
    }
    
    return tempMatrix;
}

int matrixType::getRows() const
{
    return rows;
}

int matrixType::getColumns() const
{
    return columns;
}

int matrixType::getMatrix(int i, int j) const
{
    return matrix[i][j];
}

void matrixType::getValues()
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << "Enter the int for row " << i << " column " << j << ": ";
            cin >> matrix[i][j];
        }
    }
}