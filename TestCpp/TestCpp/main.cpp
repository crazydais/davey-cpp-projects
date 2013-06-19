//
//  main.cpp
//  TestCpp
//
//  Created by David Nolan on 27/05/2013.
//  Copyright (c) 2013 David Nolan. All rights reserved.
//

//  Include Header Files
#include "NewClass.h"

//  Include Libraries
#include <iostream>     //  string, cout
#include <cstdlib>      //  rand()
#include <ctime>        //  time()
#include <cstdint>      //  uintptr_t
#include <sstream>
using namespace std;

//  Structs

typedef struct
{
    //  If you want to safely assign a string literal to a pointer (which involves an implicit array-to-pointer conversion),
    //  you need to declare the target pointer as const char*, not just as char*.
    const char *fname;
    const char *sname;
    int age;
    
} client;

int main(int argc, const char * argv[])
{
    cout << "** Random Lotto Numbers **" << endl;
    //  This changes the 'seed' for the rand() by using the time() as an argument. A different seed will output different
    //  random numbers every time. The time() takes NULL as an argument, which is the current amount of seconds since 1970.
    //  This will produce a truely random sequence of numbers for rand()
    srand((unsigned)time(NULL));
    
    for(int i = 0; i < 6; i++)
    {
        //  To win the Irish lotto jackpot, you must match the first six numbers drawn (1 to 45).
        //  Will print out a random number from 0 - 45 (ie, rand()%46)
        int x = rand()%46;
        
        //  0 is not a valid lotto number, so it can't be used
        if(x != 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << x + rand()%46 + 1 << endl;
        }
        
    }
    
    cout << "" << endl;
    cout << "** Classes getter/setters **" << endl;
    
    //  Create objects of type NewClass.  One uses the default constructor, while the other is overloaded with a string...
    NewClass nc1;
    NewClass nc2("Davey");
    
    //  Call the 'getName' method of the object
    cout << nc1.getName() << endl;
    cout << nc2.getName() << endl;
    
    cout << "" << endl;
    cout << "** Class Functions **" << endl;
    
    //  Explicitly call the deconstructor...
    nc1.~NewClass();
    nc2.~NewClass();

    
    int array[50];
    int size = sizeof(array) / sizeof(int);
    
    for(int i = 0; i < size; i++)
    {
        array[i] = rand()%51;
    }
    
    cout << "The sum is: " << nc1.sumArray(array, size) << " for an array of size: " << size << endl;
    
    
    cout << "" << endl;
    cout << "** Pointers **" << endl;
    
    float f = 5.354;    //  Creates a float in memory
    float *f_P = &f;    //  Creates a float pointer which is points to the memory address of the float
    
    cout << f_P << endl;    //  This will print out the memory address that the pointer is pointing to.
    cout << *f_P << endl;   //  This will print out the float value stored at the memory address (ie, derefferenced the pointer)
    
    float f2 = *(&f);     //  This dereferences the address of the float f, and store the resulting float value in f2.  Therefore, the *(pointer) is what is used to derefference the &(address)
    cout << f2 << endl;
    
    client c;
    c.fname = "john";
    c.sname = "Doe";
    c.age = 25;
    
    //  pointers
    
      // int
        int A[5] = {3, 5, 7, 9, 1};
        long p1 = (long)&A[0];
        int *p11 = &A[0];
    
    //experiment
        int *p111 = (int *)(long)&A[0];
    cout << "Experiment Output: " << p111 <<endl;
    
        cout << "P1&: " << p1 << endl;
        printf("HEX: 0x%lx\n", p1);
        cout << "P11: " << p11 << endl;
        
        uintptr_t p = 0x7fff5fbff510;
        int valuep = *reinterpret_cast<int *>(p);
        cout << "Value: " << valuep << endl;
        
        cout << "(P11+1) &: " << (p11+1) << endl;
        cout << "(P11+1) *: " << *(p11+1) << endl;
    
    cout << endl;
    
      // char
        char C[5] = {'j','o','h','n','\0'};
        char *p2 = &C[0];
        char *p3 = C;
        long p4 = (long)&C[0];
    
        char *p5 = (char *)(long)&C[0];
    
        cout << "p2 &: " << p2 << endl;
        cout << "p2 + 1 *: " << *(p2+1) << endl;
        cout << "p3 *: " << p3 << endl;
        cout << "p4&: " << p4 << endl;
        printf("HEX: 0x%lx\n",p4);
    
    cout << "Experiment Char Output: " << p5 <<endl;
    cout << "Experiment Output: " << *p5 <<endl;
    
    
    stringstream sstream;
    sstream << hex << p4;
    string result = "0x" + sstream.str();

    cout << "Res: " << result << endl;
    
    char *ip = (char *)p4;
    cout << "(ip *): " << *ip << endl;
    cout << "(ip+2 *): " << *(ip+2) << endl;
    
    
    
        uintptr_t q = 0x7fff5fbff4ac;
        char valueq = *reinterpret_cast<char *>(q);
        cout << "Value: " << valueq << endl;
    
    
    cout << endl;
    
    
    //  New / Delete
    
    //  This allocates memory in the heap for an int = 5, and we set a pointer 'qq' to point to that memory address
    int *qq = new int(5);
    
    cout << "The int stored in memory add: " << qq << " has a value of: " << *qq << endl;
    
    //  Set the pointer to NULL and then delete the pointer.  Don't delete the deref '*qq' or you'll delete the int stored in memory
    qq = nullptr;
    delete qq;
    
    //  This should return a bad memory access message
    //        cout << "The int stored in memory add: " << qq << " has a value of: " << *qq << endl;
    
    
    return 0;
}

