/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Jun 19 15:33:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionType_Here;
    QWidget *centralWidget;
    QLabel *label_info;
    QPushButton *pushButton_generate;
    QLabel *label_image;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QLabel *label_num_01;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_num_02;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_num_03;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_num_04;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLabel *label_num_05;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLabel *label_num_06;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(400, 300));
        actionType_Here = new QAction(MainWindow);
        actionType_Here->setObjectName(QString::fromUtf8("actionType_Here"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_info = new QLabel(centralWidget);
        label_info->setObjectName(QString::fromUtf8("label_info"));
        label_info->setGeometry(QRect(10, 110, 171, 17));
        pushButton_generate = new QPushButton(centralWidget);
        pushButton_generate->setObjectName(QString::fromUtf8("pushButton_generate"));
        pushButton_generate->setGeometry(QRect(290, 260, 98, 27));
        label_image = new QLabel(centralWidget);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(10, 20, 381, 80));
        label_image->setPixmap(QPixmap(QString::fromUtf8(":/lottoBanner.jpg")));
        label_image->setScaledContents(true);
        label_image->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 157, 381, 78));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_1 = new QLabel(widget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_1);

        label_num_01 = new QLabel(widget);
        label_num_01->setObjectName(QString::fromUtf8("label_num_01"));
        sizePolicy.setHeightForWidth(label_num_01->sizePolicy().hasHeightForWidth());
        label_num_01->setSizePolicy(sizePolicy);
        label_num_01->setMinimumSize(QSize(56, 39));
        label_num_01->setMaximumSize(QSize(56, 39));
        QFont font;
        font.setPointSize(25);
        label_num_01->setFont(font);
        label_num_01->setLocale(QLocale(QLocale::English, QLocale::Ireland));
        label_num_01->setAlignment(Qt::AlignCenter);
        label_num_01->setWordWrap(false);
        label_num_01->setIndent(0);

        verticalLayout->addWidget(label_num_01);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_num_02 = new QLabel(widget);
        label_num_02->setObjectName(QString::fromUtf8("label_num_02"));
        sizePolicy.setHeightForWidth(label_num_02->sizePolicy().hasHeightForWidth());
        label_num_02->setSizePolicy(sizePolicy);
        label_num_02->setMinimumSize(QSize(56, 39));
        label_num_02->setMaximumSize(QSize(56, 39));
        label_num_02->setFont(font);
        label_num_02->setLocale(QLocale(QLocale::English, QLocale::Ireland));
        label_num_02->setAlignment(Qt::AlignCenter);
        label_num_02->setWordWrap(false);
        label_num_02->setIndent(0);

        verticalLayout_2->addWidget(label_num_02);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        label_num_03 = new QLabel(widget);
        label_num_03->setObjectName(QString::fromUtf8("label_num_03"));
        sizePolicy.setHeightForWidth(label_num_03->sizePolicy().hasHeightForWidth());
        label_num_03->setSizePolicy(sizePolicy);
        label_num_03->setMinimumSize(QSize(56, 39));
        label_num_03->setMaximumSize(QSize(56, 39));
        label_num_03->setFont(font);
        label_num_03->setLocale(QLocale(QLocale::English, QLocale::Ireland));
        label_num_03->setAlignment(Qt::AlignCenter);
        label_num_03->setWordWrap(false);
        label_num_03->setIndent(0);

        verticalLayout_3->addWidget(label_num_03);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        label_num_04 = new QLabel(widget);
        label_num_04->setObjectName(QString::fromUtf8("label_num_04"));
        sizePolicy.setHeightForWidth(label_num_04->sizePolicy().hasHeightForWidth());
        label_num_04->setSizePolicy(sizePolicy);
        label_num_04->setMinimumSize(QSize(56, 39));
        label_num_04->setMaximumSize(QSize(56, 39));
        label_num_04->setFont(font);
        label_num_04->setLocale(QLocale(QLocale::English, QLocale::Ireland));
        label_num_04->setAlignment(Qt::AlignCenter);
        label_num_04->setWordWrap(false);
        label_num_04->setIndent(0);

        verticalLayout_4->addWidget(label_num_04);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        label_num_05 = new QLabel(widget);
        label_num_05->setObjectName(QString::fromUtf8("label_num_05"));
        sizePolicy.setHeightForWidth(label_num_05->sizePolicy().hasHeightForWidth());
        label_num_05->setSizePolicy(sizePolicy);
        label_num_05->setMinimumSize(QSize(56, 39));
        label_num_05->setMaximumSize(QSize(56, 39));
        label_num_05->setFont(font);
        label_num_05->setLocale(QLocale(QLocale::English, QLocale::Ireland));
        label_num_05->setAlignment(Qt::AlignCenter);
        label_num_05->setWordWrap(false);
        label_num_05->setIndent(0);

        verticalLayout_5->addWidget(label_num_05);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        label_num_06 = new QLabel(widget);
        label_num_06->setObjectName(QString::fromUtf8("label_num_06"));
        sizePolicy.setHeightForWidth(label_num_06->sizePolicy().hasHeightForWidth());
        label_num_06->setSizePolicy(sizePolicy);
        label_num_06->setMinimumSize(QSize(56, 39));
        label_num_06->setMaximumSize(QSize(56, 39));
        label_num_06->setFont(font);
        label_num_06->setLocale(QLocale(QLocale::English, QLocale::Ireland));
        label_num_06->setAlignment(Qt::AlignCenter);
        label_num_06->setWordWrap(false);
        label_num_06->setIndent(0);

        verticalLayout_6->addWidget(label_num_06);


        horizontalLayout->addLayout(verticalLayout_6);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lotto App", 0, QApplication::UnicodeUTF8));
        actionType_Here->setText(QApplication::translate("MainWindow", "Type Here", 0, QApplication::UnicodeUTF8));
        label_info->setText(QApplication::translate("MainWindow", "Your lotto numbers are...", 0, QApplication::UnicodeUTF8));
        pushButton_generate->setText(QApplication::translate("MainWindow", "Generate", 0, QApplication::UnicodeUTF8));
        label_image->setText(QString());
        label_1->setText(QApplication::translate("MainWindow", "1st", 0, QApplication::UnicodeUTF8));
        label_num_01->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "2nd", 0, QApplication::UnicodeUTF8));
        label_num_02->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "3rd", 0, QApplication::UnicodeUTF8));
        label_num_03->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "4th", 0, QApplication::UnicodeUTF8));
        label_num_04->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "5th", 0, QApplication::UnicodeUTF8));
        label_num_05->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "6th", 0, QApplication::UnicodeUTF8));
        label_num_06->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
