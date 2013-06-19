//
//  NewClass.h
//  TestCpp
//
//  Created by David Nolan on 27/05/2013.
//  Copyright (c) 2013 David Nolan. All rights reserved.
//

/*  
    These are 'inclusion guards', which prevent duplicate definitions. It creates a unique macro name for each header file.
    Traditionally, the name is an uppercase version of the file name, with the dot changed to an underscore.
    NewClass.h  -> NEWCLASS_H
    #ifndef NEWCLASS_H     -    (ie, If Not Defined)  This tests to see if the def has already been made. The def is ignored if already created.  This is terminated by an #endif at the end of the file.
    #define NEWCLASS_H     -   If a def is not created, then the compiler will use the following definition.
 */
#ifndef NEWCLASS_H       
#define NEWCLASS_H  

//  include required headers for the class 
#include <string>       //  (since the constructor takes a string arg)
using namespace std;    //  include this or use std:: in front of string, ie: std::string


//  Class declaration
class NewClass
{
public:
    //  Constrctor declarations
    NewClass();
    
    NewClass(string);
    
    //  Destructor declaration
    ~NewClass();
    
    //  setter/getters declarations
    void setName(string);
    string getName();
    
    //  Function declarations
    int sumArray(int[], int);

protected:
    //
    
private:
    //  private iVars
    string name;
    
};



//  Close the #ifndef definiton for NEWCLASS_H
#endif 