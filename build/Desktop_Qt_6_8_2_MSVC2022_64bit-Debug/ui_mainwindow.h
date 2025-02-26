/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *submitBtn;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *clientName;
    QLineEdit *clientSubname;
    QLabel *label_4;
    QLineEdit *clientCPF;
    QLabel *label_3;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 81, 16));
        submitBtn = new QPushButton(centralwidget);
        submitBtn->setObjectName("submitBtn");
        submitBtn->setGeometry(QRect(490, 190, 80, 24));
        submitBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(150, 100, 421, 91));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        label_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        clientName = new QLineEdit(formLayoutWidget);
        clientName->setObjectName("clientName");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, clientName);

        clientSubname = new QLineEdit(formLayoutWidget);
        clientSubname->setObjectName("clientSubname");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, clientSubname);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        clientCPF = new QLineEdit(formLayoutWidget);
        clientCPF->setObjectName("clientCPF");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, clientCPF);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 70, 181, 16));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_5->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        submitBtn->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "CPF:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sobrenome:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Cadastro de cliente:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
