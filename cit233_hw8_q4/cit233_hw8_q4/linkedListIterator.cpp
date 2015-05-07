//
//  linkedListIterator.cpp
//  cit233_hw8_q4
//
//  Created by Tony Hendrick on 4/29/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "linkedListIterator.h"
#include "nodeType.h"
#include "Type.h"

linkedListIterator::linkedListIterator()
{
    current = NULL;
}

linkedListIterator::
linkedListIterator(nodeType *ptr)
{
    current = ptr;
}

Type linkedListIterator::operator*()
{
    return current->info;
}

linkedListIterator linkedListIterator::operator++()
{
    current = current->link;
    
    return *this;
}

bool linkedListIterator::operator==
(const linkedListIterator& right) const
{
    return (current == right.current);
}

bool linkedListIterator::operator!=
(const linkedListIterator& right) const
{ return (current != right.current);
}
