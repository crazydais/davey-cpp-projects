#ifndef LOTTONUMBERGENERATOR_H
#define LOTTONUMBERGENERATOR_H

//  include required headers for the class
#include <string>       //  (since the constructor takes a string arg)
#include <QtCore>


using namespace std;    //  include this or use std:: in front of string, ie: std::string

class LottoNumberGenerator : public QThread
{
    public:
        //  Constrctor declarations

        LottoNumberGenerator();
        LottoNumberGenerator(int *numArray);


        //  Destructor declaration
        ~LottoNumberGenerator();

        //  setter/getters declarations

        //  Function declarations
        int generateNumber(int);

        void run();     //  override QThread run() function...

    protected:


    private:

        int *tempArray;
};


#endif // LOTTONUMBERGENERATOR_H
