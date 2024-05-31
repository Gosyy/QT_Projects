/********************************************************************************
** Form generated from reading UI file 'model_main.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEL_MAIN_H
#define UI_MODEL_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Model_main
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButtonShowText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Model_main)
    {
        if (Model_main->objectName().isEmpty())
            Model_main->setObjectName(QString::fromUtf8("Model_main"));
        Model_main->resize(454, 283);
        centralwidget = new QWidget(Model_main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        pushButtonShowText = new QPushButton(centralwidget);
        pushButtonShowText->setObjectName(QString::fromUtf8("pushButtonShowText"));
        pushButtonShowText->setEnabled(true);

        gridLayout->addWidget(pushButtonShowText, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Model_main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Model_main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 454, 22));
        Model_main->setMenuBar(menubar);
        statusbar = new QStatusBar(Model_main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Model_main->setStatusBar(statusbar);

        retranslateUi(Model_main);

        QMetaObject::connectSlotsByName(Model_main);
    } // setupUi

    void retranslateUi(QMainWindow *Model_main)
    {
        Model_main->setWindowTitle(QCoreApplication::translate("Model_main", "Model_main", nullptr));
        pushButtonShowText->setText(QCoreApplication::translate("Model_main", "Show text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Model_main: public Ui_Model_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEL_MAIN_H
