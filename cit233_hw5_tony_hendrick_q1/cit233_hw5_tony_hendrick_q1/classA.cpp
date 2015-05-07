//
//  classA.cpp
//  cit233_hw5_tony_hendrick_q1
//
//  Created by Tony Hendrick on 3/5/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include "classA.h"
#include <iostream>

using namespace std;

void classA::print() const
{
    cout << "ClassA x: " << x << endl;
}

void classA::doubleNum()
{
    x *= 2;
}

classA::classA(int a)
{
    x = a;
}