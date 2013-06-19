#include "Fileinput.h"
#include "iostream"
#include "fstream"
#include <sstream>
#include <cstdlib>

using namespace std;

FileInput::FileInput()
{
    //int time;
}

double FileInput::getDurations()
{
    double timeInput = 0;
    ifstream file;

    file.open("bill.txt");


    stringstream stream;
    string value = "";

    while ( file.good() )
    {
        getline ( file, value, ',' ); // read a string from 'file', storing the string in 'value', until next comma: http://www.cplusplus.com/reference/string/getline/
        //cout << string( value, 1, value.length()-2 ); // display value removing the first and the last character from it

        //cout << value <<endl;

        for(int i = 0; i < 7; i = i)
        {

            string stemp = value.substr(i,2);
            stream << stemp;
            //cout << "stemp is " << stemp <<" at i = " << i << endl;
            int dtemp;
            stream >> dtemp;
            //cout << "dtemp is " << dtemp <<" at i = " << i << endl;

            if(i < 3)   // hours
            {
                timeInput = timeInput + (double)dtemp;
                //cout << "Hours " << timeInput << endl;
            }
            else if (i == 3)    //minutes
            {
                timeInput = timeInput + ((double)dtemp / 60);
                //cout << "Minutes " << timeInput << endl;
            }
            else
            {
                timeInput = timeInput + (((double)dtemp / 60) /60);
                //cout << "Seconds " << timeInput << endl;
            }

            i = i + 3;

            stream.str("");
            stream.clear();
        }

        //cout << timeInput << endl;

    }

    return timeInput;
}
