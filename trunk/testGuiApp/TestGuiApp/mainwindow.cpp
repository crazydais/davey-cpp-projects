#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "LottoNumberGenerator.h"

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>      //  rand()
#include <ctime>        //  time()

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*      Programmatically Set the Alignment of a 'label'...
        ui->label_1->setAlignment(Qt::AlignCenter);
    */

    //  Call 'on_pushButton_generate_clicked()' to generate numbers on startup...
    MainWindow::on_pushButton_generate_clicked();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_generate_clicked()
{
    LottoNumberGenerator *numberGen = new LottoNumberGenerator;
    stringstream ss;
    int i = 0;
    int numArray[6] = {0, 0, 0, 0, 0, 0};

    srand((unsigned)time(NULL));

    //  To prevent duplicate numbers.  If a number already exsits in the array, get another number...
    for(int j = 0; j < 6; j++)
    {
        i = numberGen->generateNumber(rand()%1000);

        if(j > 0)
        {
            for(int k = 0; k < j; k++)
            {
                //cout << k << endl;

                if(i == numArray[k])
                {
                    cout << "caught duplicate" << endl;
                    i = numberGen->generateNumber(rand()%1000);
                    k = 0;
                }
            }
        }

        numArray[j] = i;
        //  cout << numArray[j] << endl;
    }

    cout << " ---- " << endl;

    ss << numArray[0] << endl;
    ui->label_num_01->setText(QString::fromStdString(ss.str()));
    ss.str(std::string());      //  clears the contents of a stringstream
    ss.clear();                 //   set any "eofbit" (end-of-file) error state back to "goodbit" (no error).

    ss << numArray[1] << endl;
    ui->label_num_02->setText(QString::fromStdString(ss.str()));
    ss.str(std::string());
    ss.clear();

    ss << numArray[2] << endl;
    ui->label_num_03->setText(QString::fromStdString(ss.str()));
    ss.str(std::string());
    ss.clear();

    ss << numArray[3] << endl;
    ui->label_num_04->setText(QString::fromStdString(ss.str()));
    ss.str(std::string());
    ss.clear();

    ss << numArray[4] << endl;
    ui->label_num_05->setText(QString::fromStdString(ss.str()));
    ss.str(std::string());
    ss.clear();

    ss << numArray[5] << endl;
    ui->label_num_06->setText(QString::fromStdString(ss.str()));
    ss.str(std::string());
    ss.clear();
}
