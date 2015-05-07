//
//  orderedListType.h
//  cit233_hw8_q4
//
//  Created by Tony Hendrick on 5/1/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw8_q4__orderedListType__
#define __cit233_hw8_q4__orderedListType__

#include <stdio.h>
#include <iostream>
#include "linkedListType.h"

using namespace std;

class orderedLinkedList: public linkedListType
{
public:
    bool search(const Type& searchItem) const;
    //Function to determine whether searchItem is in the list.
    //Postcondition: Returns true if searchItem is in the list,
    // otherwise the value false is returned.
    
    void insert(const Type& newItem);
    //Function to insert newItem in the list.
    //Postcondition: first points to the new list, newItem
    // is inserted at the proper place in the
    // list, and count is incremented by 1.
    
    void insertFirst(const Type& newItem);
    //Function to insert newItem at the beginning of the list.
    //Postcondition: first points to the new list, newItem is
    // inserted at the proper place in the list,
    // last points to the last node in the
    // list, and count is incremented by 1.
    
    void insertLast(const Type& newItem);
    //Function to insert newItem at the end of the list.
    //Postcondition: first points to the new list, newItem is
    // inserted at the proper place in the list,
    // last points to the last node in the
    // list, and count is incremented by 1.
    
    void deleteNode(const Type& deleteItem);
    //Function to delete deleteItem from the list.
    //Postcondition: If found, the node containing
    // deleteItem is deleted from the list;
    // first points to the first node of the
    // new list, and count is decremented by 1.
    // If deleteItem is not in the list, an
    // appropriate message is printed.
};


#endif /* defined(__cit233_hw8_q4__orderedListType__) */
