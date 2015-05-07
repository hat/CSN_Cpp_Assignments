//
//  main.cpp
//  cit233_hw5_tony_hendrick_q1
//
//  Created by Tony Hendrick on 3/4/15.
//  Copyright (c) 2015 Tony Hendrick. All rights reserved.
//

#include <iostream>
#include "classA.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    /*
    int x = 25;
    int *p;
    
    p = &x;
    
    cout << p << '\n';
    cout << x << '\n';
    
    *p = 55;
    
    cout << *p << '\n';
    cout << x << '\n';
    
    x = 100;
    
    cout << p << '\n';
    cout << x << '\n';
    cout << &x << '\n';
    */
    
    /*
    classA *ptrA;
    classA objectA(2);
    
    ptrA = &objectA;
    ptrA->doubleNum();
    ptrA->print();
    cout << endl;
     
     */
    
    
    int num;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    
    //ptr3 = 3;
    //ptr2 = 4;
    
    //ptr1 = &ptr2;
    //num = *ptr1;
    ptr1 = &num;
    
    cout << num << '\n' << ptr1 << '\n' << ptr2 << '\n' << ptr3 << '\n';
    
    
    /*
    int x;
    int y;
    int *p = &x;
    int *q = &y;
    x = 35;
    y = 46;
    p = q;
    *p = 27;
    cout << x << " " << y << endl;
    cout << *p << " " << *q << endl;
     */
    
    /*
    double *deposit;
    double *intRate;
    double interest;
    deposit = new double;
    intRate = new double;
    *deposit = 25000;
    *intRate = 2;
    interest = (*deposit) * (*intRate);
    cout << interest << endl;
     */
    
    /*
    int *p;
    int *q = new int;
    p = q;
    *q = 75;
    delete p;
    p = new int;
    *p = 62;
    q = new int;
    q = p;
    *q = 26;
    cout << *p << " " << *q << endl;
    */
     
    return 0;
}
