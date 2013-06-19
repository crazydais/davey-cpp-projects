#include <iostream>
#include "davey.h"
#include "Fileinput.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    davey dave;
    string a;

    a = dave.name;
    cout << a << " " <<dave.name << endl;

    cout << endl << endl << endl;

    ////    Time Duration Calculator

    //char time;

    FileInput fi;

    double b = fi.getDurations();

    //cout << "Total Time [hours] = " << b << endl;

    int hours = b * 1;
    int min = (((double)b - (double)hours) * 60);
    int sec = (((((double)b - (double)hours) * 60) - (double)min) * 60);

    cout << "Total Time = " << hours <<"[h] " <<min <<"[m] " <<sec <<"[s]" << endl;

    cout << endl << endl << endl;

    return 0;
}
