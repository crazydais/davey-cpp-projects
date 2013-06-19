

#include <cstdlib>
#include <iostream>

using namespace std;

/*************************************
 *  Dave Nolan 19/12/2010
 *  C++ Test program
 *************************************/

int main(void)
{
    int a;

    /*cout<< "Hello world"<<endl;
    cin>> a;

    cout<< "The number you typed was " << a <<endl;
    cin>> a;
    */

    int fib = 0;
    int add = 1;
    int temp;

    cout<< "Here is the 1st 20 Fibbonacci numbers" <<endl;

    for (a=0; a<20; a++)
    {

    cout<< fib <<", ";

    temp = fib;
    fib = add + temp;
    add = temp;

    }


}
