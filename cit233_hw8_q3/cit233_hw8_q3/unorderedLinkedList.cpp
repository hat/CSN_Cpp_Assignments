//
//  unorderedLinkedList.cpp
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 5/1/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "unorderedLinkedList.h"

bool unorderedLinkedList::search(const Type &searchItem) const
{
    nodeType *current;
    
    bool found = false;
    
    current = first;
    
    while( current != NULL && !found )
    {
        if( current->info.getName() == searchItem.getName() && current->info.getSalary() == searchItem.getSalary() )
        {
            found = true;
        }
        else
        {
            current = current->link;
        }
    }
    
    return found;
}

void unorderedLinkedList::insertFirst(const Type &newItem)
{
    nodeType *newNode;
    
    newNode = new nodeType;
    
    newNode->info = newItem;
    
    newNode->link = first;
    
    first = newNode;
    
    count++;
    
    if( last == NULL )
    {
        last = newNode;
    }
}

void unorderedLinkedList::insertLast(const Type &newItem)
{
    nodeType *newNode;
    
    newNode = new nodeType;
    
    newNode->info = newItem;
    
    newNode->link = NULL;
    
    if( first == NULL )
    {
        first = newNode;
        last = newNode;
        count++;
    }
}

void unorderedLinkedList::deleteNode(const Type &deleteItem)
{
    nodeType *current;
    
    nodeType *trailCurrent;
    
    bool found;
    
    if( first == NULL )
    {
        cout << "Cannot delete from an empty list." << endl;
    }
    else
    {
        if( first->info.getName() == deleteItem.getName() && first->info.getSalary() == deleteItem.getSalary() )
        {
            current = first;
            first = first->link;
            count--;
            
            if( first == NULL )
            {
                last = NULL;
            }
            delete current;
        }
        else
        {
            found = false;
            trailCurrent = first;
            current = first->link;
            
            while( current != NULL && !found )
            {
                if( first->info.getName() != deleteItem.getName() && first->info.getSalary() != deleteItem.getSalary() )
                {
                    trailCurrent = current;
                    current = current->link;
                }
                else
                {
                    found = true;
                }
            }
            
            if( found )
            {
                trailCurrent->link = current->link;
                count--;
                
                if( last == current )
                {
                    last = trailCurrent;
                }
                
                delete current;
            }
            else
            {
                cout << "The item to be deleted is not in " << "the list." << endl;
            }
        }
    }
}