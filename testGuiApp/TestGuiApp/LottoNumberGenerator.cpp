#include "LottoNumberGenerator.h"

#include <iostream>     //  cout
#include <cstdlib>      //  rand()
#include <ctime>        //  time()
#include <sstream>      //  ss.str(), ss.clear()


LottoNumberGenerator::LottoNumberGenerator()
{
    //  nothing     -   default constructor
}

LottoNumberGenerator::LottoNumberGenerator(int *numArray)
{
    tempArray = numArray;
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

void LottoNumberGenerator::run()
{

    cout << "Thread running..." << endl;

    int i = 0;

    srand((unsigned)time(NULL));

    //  To prevent duplicate numbers.  If a number already exsits in the array, get another number...
    for(int j = 0; j < 6; j++)
    {
        i = this->generateNumber(rand()%1000);

        if(j > 0)
        {
            for(int k = 0; k < j; k++)
            {
                //cout << k << endl;

                if(i == tempArray[k])
                {
                    cout << "caught duplicate" << endl;
                    i = this->generateNumber(rand()%1000);
                    k = 0;
                }
            }
        }

        tempArray[j] = i;
        //  cout << tempArray[j] << endl;
    }
}
