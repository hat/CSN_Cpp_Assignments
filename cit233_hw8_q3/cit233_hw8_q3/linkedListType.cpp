//
//  linkedListType.cpp
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 4/30/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "linkedListType.h"
#include "nodeType.h"

using namespace std;

bool linkedListType::isEmptyList() const
{
    return(first == NULL);
}

linkedListType::linkedListType() //default constructor
{
    first = NULL;
    last = NULL;
    count = 0;
}

void linkedListType::destroyList()
{
    nodeType *temp; //pointer to deallocate the memory
    //occupied by the node
    while (first != NULL) //while there are nodes in the list
    {
        temp = first; //set temp to the current node
        first = first->link; //advance first to the next node
        delete temp; //deallocate the memory occupied by temp
    }
    last = NULL; //initialize last to NULL; first has already
    //been set to NULL by the while loop
    count = 0;
}

void linkedListType::initializeList()
{
    destroyList(); //if the list has any nodes, delete them
}

void linkedListType::print() const
{
    nodeType *current; //pointer to traverse the list
    
    current = first; //set current so that it points to
    //the first node
    while (current != NULL) //while more data to print
    {
        cout << current->info << " ";
        current = current->link;
    }
}//end print

int linkedListType::length() const
{
    return count;
} //end length

Type linkedListType::front() const
{
    assert(first != NULL);
    
    return first->info; //return the info of the first node
}//end front

Type linkedListType::back() const
{
    assert(last != NULL);
    
    return last->info; //return the info of the last node
}//end back

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

void linkedListType::copyList
(const linkedListType& otherList)
{
    nodeType *newNode; //pointer to create a node
    nodeType *current; //pointer to traverse the list
    
    if (first != NULL) //if the list is nonempty, make it empty
        destroyList();
    
    if (otherList.first == NULL) //otherList is empty
    {
        first = NULL;
        last = NULL;
        count = 0;
    }
    else
    {
        current = otherList.first; //current points to the
        //list to be copied
        count = otherList.count;
        
        //copy the first node
        first = new nodeType; //create the node
        
        first->info = current->info; //copy the info
        first->link = NULL; //set the link field of
        //the node to NULL
        last = first; //make last point to the
        //first node
        current = current->link; //make current point to
        //the next node
        
        //copy the remaining list
        while (current != NULL)
        {
            newNode = new nodeType; //create a node
            newNode->info = current->info; //copy the info
            newNode->link = NULL; //set the link of
            //newNode to NULL
            last->link = newNode; //attach newNode after last
            last = newNode; //make last point to
            //the actual last node
            current = current->link; //make current point
            //to the next node
        }//end while
    }//end else
}//end copyList

linkedListType::~linkedListType() //destructor
{
    destroyList();
}//end destructor

linkedListType::linkedListType
(const linkedListType& otherList)
{
    first = NULL;
    copyList(otherList);
}//end copy constructor

//overload the assignment operator
const linkedListType& linkedListType::operator=
(const linkedListType& otherList)
{
    if (this != &otherList) //avoid self-copy
    {
        copyList(otherList);
    }//end else
    
    return *this;
}

/* MY ENTRY */
Type linkedListType::getElement(const Type k)
{
    Type infoK = 0;
    nodeType *current;
    int isFound = 1;
    
    current = this->first;
    
    for( int i = 0; i < k; i++ && isFound == 1 )
    {
        if( current == NULL )
        {
            isFound = 0;
        }
        else
        {
            current = current->link;
        }
    }
    
    if(isFound == 1)
    {
        infoK = current->info;
    }
    
    return infoK;
};

void linkedListType::deleteElement(const Type k)
{
    nodeType *current;
    int isFound = 1;
    
    current = this->first;
    
    for( int i = 0; i < k && isFound == 1; i++ )
    {
        current = current->link;
        
        if( current == NULL )
        {
            isFound = 0;
        }
    }
    
    if( isFound == 1 )
    {
        this->deleteNode(current->info);
    }
}
