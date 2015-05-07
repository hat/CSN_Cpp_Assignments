//
//  classA.h
//  cit233_hw5_tony_hendrick_q1
//
//  Created by Tony Hendrick on 3/5/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw5_tony_hendrick_q1__classA__
#define __cit233_hw5_tony_hendrick_q1__classA__

#include <stdio.h>

class classA
{
public:
    virtual void print() const;
    void doubleNum();
    classA(int a = 0);
private:
    int x;
};

#endif /* defined(__cit233_hw5_tony_hendrick_q1__classA__) */
