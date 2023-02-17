/********************************************************************************
** Form generated from reading UI file 'countfileclass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTFILECLASS_H
#define UI_COUNTFILECLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CountFileClass
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CountFileClass)
    {
        if (CountFileClass->objectName().isEmpty())
            CountFileClass->setObjectName("CountFileClass");
        CountFileClass->resize(1269, 677);
        CountFileClass->setStyleSheet(QString::fromUtf8("background-color: rgb(2, 68, 6);"));
        centralwidget = new QWidget(CountFileClass);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 450, 151, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5615, y1:0.693, x2:0.558, y2:0.943182, stop:0.0721154 rgba(203, 213, 217, 255), stop:1 rgba(245, 251, 255, 255));\n"
"color: rgb(3, 86, 10);\n"
"font: 700 16pt \"Segoe Script\";\n"
"border:2px solidqlineargradient(spread:pad, x1:0.5615, y1:0.693, x2:0.558, y2:0.943182, stop:0.0721154 rgba(203, 213, 217, 255), stop:1 rgba(245, 251, 255, 255));\n"
"border-radius:20px;\n"
""));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(770, 190, 491, 431));
        textBrowser->setStyleSheet(QString::fromUtf8("color: rgb(16, 99, 15);\n"
"font: 700 16pt \"Sitka\";\n"
"background-color: rgb(220, 221, 223);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 350, 531, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";\n"
"background-color: rgb(220, 221, 223);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1321, 81));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.499423, y1:0.744, x2:0.5, y2:1, stop:0 rgba(199, 204, 207, 255), stop:0.826923 rgba(245, 251, 255, 255));\n"
"font: 24pt \"Algerian\";\n"
"color: rgb(74, 147, 35);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 110, 851, 61));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(185, 188, 188);\n"
"font: 18pt \"Segoe Script\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 210, 431, 41));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(209, 209, 209);\n"
"font: 16pt \"Segoe Script\";"));
        CountFileClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CountFileClass);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1269, 26));
        CountFileClass->setMenuBar(menubar);
        statusbar = new QStatusBar(CountFileClass);
        statusbar->setObjectName("statusbar");
        CountFileClass->setStatusBar(statusbar);

        retranslateUi(CountFileClass);

        QMetaObject::connectSlotsByName(CountFileClass);
    } // setupUi

    void retranslateUi(QMainWindow *CountFileClass)
    {
        CountFileClass->setWindowTitle(QCoreApplication::translate("CountFileClass", "CountFileClass", nullptr));
        pushButton->setText(QCoreApplication::translate("CountFileClass", "Count", nullptr));
        label->setText(QCoreApplication::translate("CountFileClass", "    Frequency of word", nullptr));
        label_2->setText(QCoreApplication::translate("CountFileClass", "You can count the frequency of every word in file ", nullptr));
        label_3->setText(QCoreApplication::translate("CountFileClass", "Please enter the file as *.txt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountFileClass: public Ui_CountFileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTFILECLASS_H
