//
//  nodeType.h
//  cit233_hw8_q3
//
//  Created by Tony Hendrick on 4/30/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#ifndef __cit233_hw8_q3__nodeType__
#define __cit233_hw8_q3__nodeType__

#include <stdio.h>
#include "employeeType.h"
#include "Type.h"

struct nodeType
{
    Type info;
    nodeType *link;
};

#endif /* defined(__cit233_hw8_q3__nodeType__) */
