//
//  linkedListIterator.h
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 5/1/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw8_q3__linkedListIterator__
#define __cit233_hw8_q3__linkedListIterator__

#include <stdio.h>
#include "nodeType.h"
#include "Type.h"

class linkedListIterator
{
public:
    linkedListIterator();
    //Default constructor
    //Postcondition: current = NULL;
    
    linkedListIterator(nodeType *ptr);
    //Constructor with a parameter.
    //Postcondition: current = ptr;
    
    Type operator*();
    //Function to overload the dereferencing operator *.
    //Postcondition: Returns the info contained in the node.
    
    linkedListIterator operator++();
    //Overload the pre-increment operator.
    //Postcondition: The iterator is advanced to the next
    // node.
    
    bool operator==(const linkedListIterator& right) const;
    //Overload the equality operator.
    //Postcondition: Returns true if this iterator is equal to
    // the iterator specified by right,
    // otherwise it returns the value false.
    
    bool operator!=(const linkedListIterator& right) const;
    //Overload the not equal to operator.
    //Postcondition: Returns true if this iterator is not
    // equal to the iterator specified by
    // right; otherwise it returns the value
    // false.
    
private:
    nodeType *current; //pointer to point to the current
    //node in the linked list
};


#endif /* defined(__cit233_hw8_q3__linkedListIterator__) */
