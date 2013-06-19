//
//  NewClass.cpp
//  TestCpp
//
//  Created by David Nolan on 27/05/2013.
//  Copyright (c) 2013 David Nolan. All rights reserved.
//


//  include headers files and libraries
#include "NewClass.h"

#include <iostream>
using namespace std;

/*
    NOTE: See the use of the double colon (::).  This is the scope resolution operator, which is used to identify
    the class in which the function resides.  eg. The 'setName' function resides in the NewClass Class.
*/


//  Constructor Definitions
NewClass::NewClass()
{
    name = "nil";
}

NewClass::NewClass(string s)
{
    name = s;
}

NewClass::~NewClass()
{
    //  Your destructor only has to destroy the members for which you allocate resources.  You delete pointers you allocate with new.
}

//  Setter/Getter Definitions
void NewClass::setName(string n)
{
    name = n;
}

//  Function Definitions
int NewClass::sumArray(int array[], int size)
{
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    
    return sum;
}

string NewClass::getName()
{
    return name;
}
