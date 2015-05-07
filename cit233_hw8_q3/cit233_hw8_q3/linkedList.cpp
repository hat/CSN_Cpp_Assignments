//
//  linkedList.cpp
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 5/1/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include <iostream>
#include "linkedList.h"
#include "nodeType.h"

using namespace std;

linkedListIterator::linkedListIterator()
{
    current = NULL;
}

linkedListIterator::linkedListIterator(nodeType *ptr)
{
    current = ptr;
}

Type linkedListIterator::operator*()
{
    return current->info;
}

nodeType linkedListIterator::operator++()
{
    current = current->link;
    
    return *current;
}

bool linkedListIterator::operator==(const linkedListIterator &right) const
{
    return (current == right.current );
}

bool linkedListIterator::operator!=(const linkedListIterator &right) const
{
    return (current != right.current);
}

/*-------------LinkedList-------------------*/

bool linkedListType::isEmptyList() const
{
    return (first == NULL);
}

linkedListType::linkedListType()
{
    first = NULL;
    last = NULL;
    count = 0;
}

void linkedListType::destroyList()
{
    nodeType *temp; //pointer to deallocate the memory
    
    while(first != NULL)
    {
        temp = first;
        first = first->link;
        
        delete temp;
    }
    
    last = NULL;
    
    count = 0;
}

void linkedListType::initializeList()
{
    destroyList(); //if the link has any nodes delete them
}

void linkedListType::print() const
{
    nodeType *current;
    
    current = first;
    
    while(current != NULL)
    {
        cout << current->info.getName() << " " << current->info.getSalary() << " ";
        current = current->link;
    }
}

int linkedListType::length() const
{
    return  count;
}

Type linkedListType::front() const
{
    assert(first != NULL);
    
    return first->info;
}

Type linkedListType::back() const
{
    assert(last != NULL);
    
    return last->info;
}

linkedListIterator linkedListType::begin()
{
    linkedListIterator temp(first);
    
    return temp;
}

linkedListIterator linkedListType::end()
{
    linkedListIterator temp(NULL);
    
    return temp;
}

void linkedListType::copyList(const linkedListType &otherList)
{
    nodeType *newNode;
    nodeType *current;
    
    if( first != NULL )
        destroyList();
    
    if( otherList.first == NULL )
    {
        first = NULL;
        last = NULL;
        count = 0;
    }
    else
    {
        current = otherList.first;
        count = otherList.count;
        first = new nodeType;
        
        first->info = current->info;
        first->link = NULL;
        
        last = first;
        
        current = current->link;
        
        while( current != NULL )
        {
            newNode = new nodeType;
            
            newNode->info = current->info;
            
            newNode->link = NULL;
            
            last->link = newNode;
            
            last = newNode;
            
            current = current->link;
        }
    }
}

linkedListType::~linkedListType()
{
    destroyList();
}

linkedListType::linkedListType(const linkedListType &otherList)
{
    first = NULL;
    
    copyList(otherList);
}

const linkedListType &linkedListType::operator=(const linkedListType &otherList)
{
    if( this != &otherList )
    {
        copyList(otherList);
    }
    
    return *this;
}

