#include "LottoNumberGenerator.h"

#include <iostream>     //  cout
#include <cstdlib>      //  rand()
#include <ctime>        //  time()



LottoNumberGenerator::LottoNumberGenerator()
{
    //  nothing     -   default constructor
}

LottoNumberGenerator::~LottoNumberGenerator()
{
    //  nothing     -   destructor
}



int LottoNumberGenerator::generateNumber(int seed)
{
    int x = 0;

    srand((unsigned)seed);

            //  To win the Irish lotto jackpot, you must match the first six numbers drawn (1 to 45).
            //  Will print out a random number from 0 - 45 (ie, rand()%46)
            x = rand()%46;

            //  0 is not a valid lotto number, so it can't be used
            if(x != 0)
            {
                //cout << x << endl;
            }
            else
            {
                //cout << x + rand()%46 + 1 << endl;
                x = x + 1;
            }

    return x;
}
