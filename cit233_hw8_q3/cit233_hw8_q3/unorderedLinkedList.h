//
//  unorderedLinkedList.h
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 5/1/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw8_q3__unorderedLinkedList__
#define __cit233_hw8_q3__unorderedLinkedList__

#include <stdio.h>
#include "linkedList.h"

using namespace std;

class unorderedLinkedList : public linkedListType
{
public:
    bool search(const Type &searchItem) const;
    //Function to determine whether searchItem is
    //in the list
    //Postcondition: Returns true if searchItem
    //is in the list, otherwise the value false
    //is returned
    
    void insertFirst(const Type &newItem);
    //Function to insert newItem at the beginning
    //of the list
    //Postcondition: first points to the new list,
    //newItem is inserted at the beginning of
    //the list, last points to the last node
    //in the list, and count is incremented by 1
    
    void insertLast(const Type &newItem);
    //Function to insert newItem at the end
    //of the list
    //Postcondition: first points to the new list,
    //newItem is inserted at the end of
    //the list, last points to the last node
    //in the list, and count is incremented by 1
    
    void deleteNode(const Type &deleteItem);
    //Function to delete deleteItem from the list
    //Postcondition: If found, the node containing
    //deleteItem is deleted from the list, first
    //points to the first node, last the last
    //node, and count decremented by 1
};

#endif /* defined(__cit233_hw8_q3__unorderedLinkedList__) */
