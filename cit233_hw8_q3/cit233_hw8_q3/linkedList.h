//
//  linkedList.h
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 5/1/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw8_q3__linkedList__
#define __cit233_hw8_q3__linkedList__

#include <iostream>
#include <cassert>
#include "nodeType.h"

using namespace std;

class linkedListIterator
{
public:
    linkedListIterator();
    //Default constructor
    //Postcondition: current = NULL;
    
    linkedListIterator(nodeType *ptr);
    //Constructor with a parameter
    //Postcondition: current = ptr;
    
    Type operator*();
    //Function to overload the dereferencing operator *
    //Postcondition: Returns the info conatined in the node
    
    nodeType operator++();
    //Function to overload the ++ operator
    //Postcondition: The current link becomes the
    
    bool operator ==(const linkedListIterator& right) const;
    //Overload the quality operator
    //Postcondition: Returns true if this iterator is equal to
    //the iterator specified by right, otherwise it returns
    //the value false
    
    bool operator !=(const linkedListIterator& right) const;
    //Overload the not equal operator
    //Postcondition: Returns true if this iterator is not equal
    //to the iterator specified by right, otherwise it returns
    //the value false
    
private:
    nodeType *current;
};

class linkedListType
{
public:
    const linkedListType &operator=(const linkedListType&);
    //Overloads the assignment operator
    
    void initializeList();
    //Initialize the list to an empty state
    //Postcondition: first = NULL;, last = NULL,
    //count = 0
    
    bool isEmptyList() const;
    //Function to determine whether the list is empty
    //Postcondition: Returns true if the list is empty,
    //otherwise it returns false
    
    void print() const;
    //Function to output the data contained in each node
    //Postcondition: none
    
    int length() const;
    //Function to return the number of nodes in the list
    //Postcondition: The value of count is returned
    
    void destroyList();
    //Function to delete all the nodes from the list
    //Postcondition: First = NULL, Last = NULL,
    //count = 0
    
    Type front() const;
    //Function to return the first element of the list
    //Precondition: The list must exist and must not be
    //empty
    //Postcondition: If the list is empty the program
    //terminates, otherwise the first element of the
    //list is returned
    
    Type back() const;
    //Function to return the last element of the list
    //Precondition: The list must exist and must not be
    //empty
    //Postcondition: If the list is empty the program
    //terminates, otherwise the last element of the
    //list is returned
    
    virtual bool search(const Type& searchItem) const = 0;
    //Function to determine whether searchItem is in the
    //list
    //Postcondition: Returns true if the searchItem is
    //in the list, otherwise the value false is returned
    
    virtual void insertFirst(const Type& newItem) = 0;
    //Function to insert newItem at the beginning of
    //the list
    //Postcondition: first points to the new list,
    //newItem is inserted at the beginning of the list,
    //last points to the last node of the list,
    //and count is incremented by 1
    
    virtual void insertLast(const Type& newItem) = 0;
    //Function to insert newItem at the end of
    //the list
    //Postcondition: first points to the new list,
    //newItem is inserted at the end of the list,
    //last points to the last node of the list,
    //and count is incremented by 1
    
    virtual void deleteNode(const Type& deleteItem) = 0;
    //Function to delete deleteItem from the list
    //Postcondition: If found, the node containing
    //deleteItem is deleted from the list,
    //first points to the first node, last points
    //to the last node of the updated list, and
    //count is decremented by 1
    
    linkedListIterator begin();
    //Function to return an iterator at the beginning
    //of the linked list
    //Postcondition: Returns an iterator such that
    //current is set to first
    
    linkedListIterator end();
    //Function to return an iterator one element
    //past the last element of the linked list
    //Postcondition: Returns an iterator such
    //that current is set to NULL
    
    linkedListType();
    //default constructor
    //Initializes the list to an empty state
    //Postcondition: first = NULL, last = NULL,
    //count = 0;
    
    linkedListType(const linkedListType& otherList);
    //copy constructor
    
    ~linkedListType();
    //deconstructor
    //Deletes all the nodes from the list
    //Postcondition: The list object is destroyed
    
protected:
    int count;
    nodeType *first;
    nodeType *last;
    
private:
    void copyList(const linkedListType &otherList);
    //Function to make a copy of otherList
    //Postcondition: A copy of otherList is created
    //and assigned to this list
    
};

#endif /* defined(__cit233_hw8_q3__linkedList__) */
