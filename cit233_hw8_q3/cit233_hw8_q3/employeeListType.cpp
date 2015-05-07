//
//  employeeListType.cpp
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 5/1/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "employeeListType.h"
#include <ctype.h>

using namespace std;

void employeeListType::searchEmployeeList(string name, bool &found, nodeType *&current) const
{
    found = false;
    
    current = first;
    
    while( current!= NULL && !found )
    {
        if(current->info.checkName(name))
        {
            found = true;
        }
        else
        {
            current = current->link;
        }
    }
}

void employeeListType::printEmployeeInfo() const
{
    nodeType *current;
    
    current = first;
    
    while( current != NULL )
    {
        cout << current->info.getName() << " $" << current->info.getSalary() << endl;
        current = current->link;
    }
}

void employeeListType::sortNamesAlphabetically()
{
    string tempName;
    double tempSalary;
    nodeType *current;
    nodeType *trailing;
    
    current = new nodeType;
    
    current = this->first;
    
    for( int i = 1; i < this->length(); i++ )
    {
        
        for( int k = 1; k < i; k++ )
        {
            current = current->link;
        }
        
        trailing = current->link;
        
        for( int j = i; j <= this->length() - 1; j++ )
        {
            if( current->info.getName() > trailing->info.getName() )
            {
                tempName = current->info.getName();
                current->info.setName(trailing->info.getName());
                trailing->info.setName(tempName);
                
                tempSalary = current->info.getSalary();
                current->info.setSalary(trailing->info.getSalary());
                trailing->info.setSalary(tempSalary);
            }
            
            trailing = trailing->link;
        }
        
        current = this->first;
    }
}

double employeeListType::getAverageSalary()
{
    nodeType *current;
    double sum = 0;
    
    current = new nodeType;
    
    current = this->first;
    
    for( int i = 0; i < this->length() && current != NULL; i++ )
    {
        sum += current->info.getSalary();
        current = current->link;
    }
    
    return sum / this->length();
}